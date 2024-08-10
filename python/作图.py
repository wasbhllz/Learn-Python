import numpy as np
import matplotlib.pyplot as plt

# 创建一个新的图
plt.figure(figsize=(6,6))

# 画单位圆
theta = np.linspace(0, 2 * np.pi, 400)
x = np.cos(theta)
y = np.sin(theta)
plt.plot(x, y, label='Unit Circle')

# 标注特殊角度
angles = [0, np.pi/6, np.pi/4, np.pi/3, np.pi/2, np.pi, 3*np.pi/2, 2*np.pi]
angle_labels = ['0', 'π/6', 'π/4', 'π/3', 'π/2', 'π', '3π/2', '2π']
for angle, label in zip(angles, angle_labels):
    plt.plot([0, np.cos(angle)], [0, np.sin(angle)], linestyle='--', color='gray')
    plt.text(np.cos(angle)*1.1, np.sin(angle)*1.1, label, ha='center', va='center')

# 设置图的属性
plt.axhline(0, color='black',linewidth=0.5)
plt.axvline(0, color='black',linewidth=0.5)
plt.grid(color = 'gray', linestyle = '--', linewidth = 0.5)
plt.title('Unit Circle')
plt.xlabel('x')
plt.ylabel('y')
plt.axis('equal')
plt.legend()
plt.show()
