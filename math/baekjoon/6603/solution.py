from itertools import combinations


def tuple2str(tup):
    length = len(tup)
    ret = str(tup[0])
    for index in range(1, length):
        ret += str(" " + str(tup[index]))

    return ret


out = ""
while True:
    input_str = list(map(int, input().split()))

    if input_str[0] != 0:
        numbers = input_str[1::]

        iterator = combinations(numbers, 6)
        for combination in iterator:
            out += tuple2str(combination) + "\n"
        out += "\n"
    else:
        print(out.lstrip().rstrip(), end="")
        break
