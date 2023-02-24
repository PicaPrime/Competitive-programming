k = int(input())
r = int(input())
result = 10
for i in range(1, 10):
    if ((k*i) % 10) == 0:
        result = i
        break
    elif (((k*i)%10)-r) == 0:
        result = i
        break

print(result)
