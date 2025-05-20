"""
script that determines which problems I have solved but only in a different language than the given language
"""

import sys
import os
import re
from collections import defaultdict

if len(sys.argv) == 1:
    sys.stderr.write('You must specify the language extension\n')
    sys.exit(1)
else:
    lang = sys.argv[1]

# problem file format: NNNN-name-of-problem.lang
pattern = re.compile(r'^(\d{4}-[a-z0-9\-]+)(\.[a-z]{2,4})$')

ignored_extensions = (
    'js', # because of JS-only problems
    'sh',
    'sql',
    'md' # not a programming language
)

files = [
    file for file in os.listdir(os.getcwd())
    if re.fullmatch(pattern, file) and 
    not any(file.endswith(x) for x in ignored_extensions)
]

langs = defaultdict(set)

for file in files:
    match = re.fullmatch(pattern, file)
    if not match: 
        sys.stderr.write(f'{file} did not match pattern\n')
        continue
    langs[match.group(2)[1:]].add(file[:match.end(1)])

from functools import reduce

sol = reduce(lambda x, y: x | y, (x for x in langs.values() if x != lang))

print(sol - langs[lang])
