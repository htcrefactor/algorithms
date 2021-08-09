import sys
number_of_commands = int(sys.stdin.readline())
size = 0
queue = []


for command_index in range(number_of_commands):
    command = sys.stdin.readline().split()

    if command[0] == "push":
        queue.append(int(command[1]))
        size = size + 1

    elif command[0] == "pop":
        if size == 0:
            print("-1")
        else:
            print(queue.pop(0))
            size = size - 1

    elif command[0] == "size":
        print(size)

    elif command[0] == "empty":
        if size == 0:
            print("1")
        else:
            print("0")

    elif command[0] == "front":
        if size == 0:
            print("-1")
        else:
            print(queue[0])

    elif command[0] == "back":
        if size == 0:
            print("-1")
        else:
            print(queue[size - 1])

    else:
        print("Undefined Behavior")
