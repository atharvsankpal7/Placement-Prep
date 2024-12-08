n = input()
count = {}
sol = 0
for i in range(len(n)):
    count.update({n[i]:0})
for i in range(len(n)):
    count[n[i]] += 1

for i in range(len(n)):

    digit = int(n[i])
    
    if digit != 0:
        if count[n[i]] == digit:
            sol += 1
print(sol)