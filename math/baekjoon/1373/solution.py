# base2 = str(input())
# base8 = ""

# digits = {
#     "000": "0",
#     "001": "1",
#     "010": "2",
#     "011": "3",
#     "100": "4",
#     "101": "5",
#     "110": "6",
#     "111": "7",
#     "00": "0",
#     "01": "1",
#     "10": "2",
#     "11": "3",
#     "0": "0",
#     "1": "1",
# }

# while base2 != "":
#     temp = base2[-3::]
#     base2 = base2[:-3:]

#     base8 = digits[temp] + base8

# print(base8)

base2 = input()
print(oct(int(base2, 2))[2:])
