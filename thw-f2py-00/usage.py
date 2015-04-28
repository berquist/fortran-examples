#!/usr/bin/env python

from __future__ import print_function
import numpy as np
import fib1


print(fib1.__doc__)
print(fib1.fib.__doc__)

a = np.zeros(10, 'd')
fib1.fib(a)
print(a)
