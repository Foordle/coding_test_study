import scipy.stats as ss
import numpy as np
import matplotlib.pyplot as plt

valueX = [1, 2, 3, 4]
scoreList = [5, 0, 0, 2]

plt.plot(valueX, scoreList)
plt.xlabel("Score number") # Text for X-Axis
plt.ylabel("Score") # Text for Y-Axis
plt.title("Scores for the topic ")

plt.xticks([1,2,3,4])
plt.xticks(list(range(-3, 8)))


plt.show()