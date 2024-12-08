odd = list()
even = list()

oddSize = 0
evenSize = 0
n = int(input("enter the size: "))
arr = []
for i in range(n):
    arr.append(int(input()))
    if(i % 2 == 0):
        evenSize += 1 
        even.append(arr[i])
    else:
        oddSize += 1
        odd.append(arr[i])
even.sort()
odd.sort()
print(even[evenSize - 2] + odd[oddSize -2])

