
while (1):
    n=input("Enter the value:")

    revers = n[::-1]
    if n == revers:
       print(f"This value {n} is palindrome")
    else:
       print(f"This value {n} is not palindrome")
