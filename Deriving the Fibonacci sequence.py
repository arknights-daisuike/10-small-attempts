b = int(input("次数:"))
x = y = 1
for i in range(b):
    n = x
    x = x+y
    y = n
    #print(x)
print(x)