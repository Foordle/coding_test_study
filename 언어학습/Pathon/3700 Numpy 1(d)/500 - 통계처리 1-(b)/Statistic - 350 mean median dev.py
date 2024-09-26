import scipy.stats as ss
import numpy as np
import matplotlib.pyplot as plt


X = [32.32, 56.98, 21.52, 44.32, 55.63, 13.75, 43.47, 43.34]

X.sort()
print(X)

# Using NumPy's built-in functions to Find Mean, Median, SD and Variance
mean     = np.mean(X)
median   = np.median(X)
sd       = np.std(X)
variance = np.var(X)

# Printing the values
print(("Mean", mean)) # 38.91625
print(("Median", median)) # 43.405
print(("Standard Deviation", sd)) # 14.3815654029
print(("Variance", variance)) # 206.829423437
