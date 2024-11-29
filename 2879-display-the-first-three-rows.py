"""
2879. Display the First Three Rows

Submitted: November 7, 2024

Runtime: 344 ms (beats 80.13%)
Memory: 69.54 MB (beats 9.22%)
"""

import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.head(3)