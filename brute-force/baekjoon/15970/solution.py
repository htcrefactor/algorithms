def arrow(ol, index):
    if index == 0:
        return ol[index+1] - ol[index]
    elif index == len(ol) - 1:
        return ol[index] - ol[index-1]
    else:
        return min((ol[index+1] - ol[index]), (ol[index] - ol[index-1]))


n = int(input())
dots = {}
for _ in range(n):
    position, color = map(int, input().split())
    if color in dots:
        dots[color][len(dots[color]):] = [position]
    else:
        dots[color] = [position]

total = 0
colors = dots.keys()
for color in colors:
    dots[color].sort()
    for index in range(len(dots[color])):
        total += arrow(dots[color], index)

print(total)