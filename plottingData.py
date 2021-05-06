# -*- coding: utf-8 -*-
"""
Kathryn Brill
Capstone Project
Evaluation of Lotka-Volterra Equations using Euler's Method
"""
import numpy as np
import matplotlib.pyplot as plt

# load data from the text file and create variables
x,y,z= np.loadtxt('predatorprey.txt', delimiter=',',unpack=True)

# first graph
# plot hare and fox populations
plt.plot(y,z, color = 'green')

# label the x-axis and the y-axis
plt.xlabel('Hare Population')
plt.ylabel('Fox Population')

# add a title to the graph
plt.title('Predator Versus Prey Populations')

# show the graph
plt.show()


# second graph
# plot time and hare population
plt.plot(x,y,label='Hare Population', color = 'orange')
# plot time and fox population
plt.plot(x,z,label='Fox Population', color = 'crimson')

# label the x-axis and the y-axis
plt.xlabel('Time (Months)')
plt.ylabel('Population' )

# add a title to the graph
plt.title('Predator and Prey Populations Over Time')

# add the legend
plt.legend()

# show the graph
plt.show()
