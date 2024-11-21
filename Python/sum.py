print("SUM\n")

def sum(number1, number2, number3):
    return number1 + number2 + number3

number = []
sequence_number = ["first", "second", "third"]

for i in range(3):
    number.append(float(input(f"Enter the {sequence_number[i]} number: ")))

print(f"\nThe sum of the three numbers is: {sum(number[0], number[1], number[2])}")