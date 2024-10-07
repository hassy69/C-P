for num in range(1,1001):
    if (num % 4) == 0 and (num % 6) != 0:
        print(num)

for num in range(1,1001):
    if (num % 8) == 0 and not num % 2:
        print(num)

for num in range(1,1001):
    if ((num % 5) == 0 or (num % 7) == 0) and (num % 10) != 0:
        print(num)
