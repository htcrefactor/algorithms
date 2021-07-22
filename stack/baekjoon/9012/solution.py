def simplify(string):
    string = string.replace("()", "")
    return string


n = int(input())
counter = 0
while n != 0:
    string = input()
    prev = string

    string = simplify(string)
    while prev != string:
        prev = string
        string = simplify(string)

    if string == "":
        print("YES")
    else:
        print("NO")

    n = n - 1