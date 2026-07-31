def calculate(x, y, a):
    if a == "+":
        return x + y
    elif a == "-":
        return x - y
    elif a == "*":
        return x * y
    elif a == "/":
        return x / y
    else:
        return "Invalid operator"
x = int(input("enter your first no."))
y = int(input("enter your second no."))
a = input("chose from +,-,*,/")
print(calculate(x,y,a))