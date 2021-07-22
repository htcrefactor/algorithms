def simplify(string):
    string = string.replace("AA", "")
    string = string.replace("BB", "")
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
        counter = counter + 1

    n = n - 1

print(counter)