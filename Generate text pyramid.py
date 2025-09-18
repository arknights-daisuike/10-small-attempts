a = input("内容:")
b = int(input("行数:"))
c = input("调整:")
for i in range(b):
    print(c*(b-i-1)+a*(i+1)+c*(b-i-1))
c = input("回车以退出:")