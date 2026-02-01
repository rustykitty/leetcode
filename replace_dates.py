"""
Replace LeetCode dates (e.g. "Feb 01, 2026") with proper long dates (e.g. "February 1, 2026")
"""

# IDK which ones leetcode uses
months = {
    "Jan": "January",
    "Feb": "February",
    "Mar": "March",
    "Apr": "April",
    "May": "May",
    "Jun": "June",
    "Jul": "July",
    "Aug": "August",
    "Sep": "September",
    "Oct": "October",
    "Nov": "November",
    "Dec": "December"
}

import glob

import re
SUBMITTED_PATTERN = re.compile(r"Submitted: (\w{3}) (\d{2}), (\d{4})")

for file in glob.iglob("*-*.*"):
    with open(file) as fp:
        data = fp.read()
    match = re.search(SUBMITTED_PATTERN, data)
    if match is None:
        print(f"Skipping {file}, no match")
        continue
    month, day, year = match.groups()
    month = months[month] if month in months else month
    day = str(int(day))
    data = data.replace(data[match.start():match.end()], f"Submitted: {month} {day}, {year}")
    with open(file, "w") as fp:
        fp.write(data)
    print(f"Saved {file}")