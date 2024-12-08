def differenceofSum(n,m):
    
    a = 0
    b = 0

    

    for i in range(1,m+1):
        if(i % n):
            a += i
        else:
            b += i

    return a - b

print(differenceofSum(int(input()), int(input())))


