import numpy as np
import matplotlib.pyplot as plt

# Define the functions
def f1(x):
    return 18 + 10* x

def f2(x):
    return 12 * 1.4**x

# Generate x values
x_values = np.linspace(0, 10, 400)

# Compute y values for both functions
y_values_f1 = f1(x_values)
y_values_f2 = f2(x_values)

# Create the plot
plt.figure(figsize=(10, 6))
plt.plot(x_values, y_values_f1, label=r'$f(x) = 3x + 60$', color='blue')
plt.plot(x_values, y_values_f2, label=r'$f(x) = 50 \cdot 1.08^x$', color='red')
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Comparison of f(x) = 500x + 25000 and f(x) = 20000 * 1.05^x')
plt.legend()
plt.grid(True)
plt.show()
