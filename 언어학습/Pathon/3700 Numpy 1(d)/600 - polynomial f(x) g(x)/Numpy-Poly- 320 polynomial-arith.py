#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-04-27
#-------------------------------------------------------------------------------

from numpy.polynomial import polynomial as P

f = (1,1,1,1,1,1)  # 1 + x + x^2 ... x^5
g = (-1,1)         # 1 - x

print(" f(x)+g(x) = :", end=" ")
print(P.polyadd(f,g))
print(" f(x)-g(x) = :", end=" ")
print(P.polysub(f,g))
print(" f(x)*g(x) = :", end=" ")
print(P.polymul(f,g))
print(" f(x)/g(x) = :", end=" ")
print(P.polydiv(f,g))

# it is difficult!.
# it is challenging !
