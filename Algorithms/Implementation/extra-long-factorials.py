#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'extraLongFactorials' function below.
#
# The function accepts INTEGER n as parameter.
#

def extraLongFactorials(n):
    ans = 1
    while n:
        ans *= n
        n -= 1
    print(ans)

if __name__ == '__main__':
    n = int(input().strip())

    extraLongFactorials(n)
