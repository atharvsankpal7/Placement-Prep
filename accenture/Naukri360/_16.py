n = int(input())
arr = [0] * n
count = {}
for i in range(n):
    arr[i] = int(input())
    count[arr[i]] = 0
for i in range(n):
    count[arr[i]] +=1

arr.sort(key = lambda x:(-count[x],x))
print(arr[0])