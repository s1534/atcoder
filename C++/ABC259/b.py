import math
pi = 3.14156
a, b, c = map(float, input().split())

c = 360 -c
rd = -c*pi/180.0
x = a*math.cos(rd)-b*math.sin(rd)
y = a*math.sin(rd)+b*math.cos(rd)
print(x,y)
