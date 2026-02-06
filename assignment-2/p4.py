n1 = int(input("enter first integer: "))
n2 = int(input("enter second integer: "))
n3 = int(input("enter third integer: "))

if n1 > n2 and n1 > n3 :
    print(n1," is the greatest integer")
elif n2 > n1 and n2 > n3:
    print(n2," is the greatest integer")
else:
    print(n3," is the greatest integer")
