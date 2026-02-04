import os
import os.path

from itertools import product

files = os.listdir(os.path.dirname(__file__))

langs = "py cpp c rs js sql sh".split()

for (prob, lang) in product(range(1, 4001), langs):
    res = [file for file in files if file.startswith(str(prob).zfill(4)) and file.endswith("." + lang)]
    if len(res) > 1:
        print("possible dupe", *res)
