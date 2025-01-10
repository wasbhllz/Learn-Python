import numpy as np    
import matplotlib.pyplot as plt    
from mpl_toolkits.mplot3d import Axes3D    
from matplotlib.animation import FuncAnimation    
    
  
# 生成网格    
x = np.linspace(-2, 2, 100)    
y = np.linspace(-2, 2, 100)    
x, y = np.meshgrid(x, y)  
    
# 定义初始波动参数    
amplitude = 1.0  # 振幅    
frequency = 1  # 频率    
phase = 0.0  # 相位    
    
# 创建3D绘图对象    
fig = plt.figure()    
ax = fig.add_subplot(111, projection='3d')    
    
# 初始绘制曲面图（不带颜色）    
z = amplitude * np.sin(frequency * np.sqrt(x**2 + y**2) + phase)    
surf = ax.plot_surface(x, y, z, linewidth=0, antialiased=False, cmap='viridis')  # 添加颜色映射  
    
# 添加坐标轴标签    
ax.set_xlabel('X')    
ax.set_ylabel('Y')    
ax.set_zlabel('Z')    
    
# 更新函数，用于更新曲面图    
def update(frame):    

    frequency= frame / 10.0 + 1  # 更新频率，频率范围

    phase = frame / 20.0 * np.pi  # 更新相位，产生一个动态的效果  


  
    z = amplitude * np.sin(frequency * np.sqrt(x**2 + y**2) + phase)   
    ax.clear()  # 清空原来的曲面图   
   
    surf = ax.plot_surface(x, y, z, linewidth=0, antialiased=False, cmap='viridis')  # 添加颜色映射  
    return surf,    
  
# 创建动画对象，指定更新函数和帧率    
ani = FuncAnimation(fig, update, frames=range(0,100), interval=1000, blit=False)  # 增加帧数，使得动画更平滑  
    
plt.show()