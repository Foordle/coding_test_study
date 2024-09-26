#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
import collections
import math
import numbers

import statistics

a= statistics.mean([1, 2, 3, 4, 4])

b = statistics.mean([-1.0, 2.5, 3.25, 5.75])


from fractions import Fraction as F
c= statistics.mean([F(3, 7), F(1, 21), F(5, 3), F(1, 3)])


from decimal import Decimal as D
d = statistics.mean([D("0.5"), D("0.75"), D("0.625"), D("0.375")])


print(a,b,c,d)


data1 = (1, 2, 2, 3, 3, 3, 4, 4, 4, 4)
print(statistics.mode(data1))

data2 = (2.1, 1.9, 2.1, 1.8, 2.9)
print(statistics.mode(data2))

data3 = ( F(19, 21), F(18, 21), F(19, 21), F(21, 46))
print(statistics.mode(data3))

data4 = (-21, -22, -21, -29, -18, -19)
print(statistics.mode(data4))

data5 = ('Emily', 'Matt', 'Ross', 'Rachel', 'Monica', 'Chandler', 'Rachel')
print(statistics.mode(data5))
