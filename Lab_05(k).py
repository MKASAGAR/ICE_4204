

num = int(input("Enter a number to check For loop : "))

fac = 1

for i in range(1, num + 1):
    fac = fac * i

print("factorial of ", num, " is ", fac)


num = int(input("\n Enter a number to check while loop: "))

fac = 1
i = 1

while i <= num:
    fac = fac * i
    i = i + 1

print("factorial of ", num, " is ", fac)