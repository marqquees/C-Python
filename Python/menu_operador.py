import os, time

def clear():
    time.sleep(2)
    os.system("cls")
def sum(number1, number2): 
    return number1 + number2
def sub(number1, number2):
    return number1 - number2 
def mult(number1, number2):
    return number1 * number2
def div(number1, number2):
    return number1 / number2
def pot(number1, number2):
    return number1 ** number2

def menu(option):
    # refactoring the code (while loop).
    if option < 1 or option > 5:
        print("Invalid option.")
        clear()
        main()
    else:
        number = []
        sequence_number = ["first", "second"]
        for i in range(2):
            number.append(float(input(f"Enter the {sequence_number[i]} number: ")))
        if option == 1: print("\nThe sum of two numbers is:", sum(number[0], number[1]))
        elif option == 2: print("\nThe subtraction of two numbers is:", sub(number[0], number[1]))
        elif option == 3: print("\nThe multiplication of two numbers is:", mult(number[0], number[1]))
        elif option == 4: print("\nThe division of two numbers is:", div(number[0], number[1]))
        elif option == 5: print("\nThe potentiation of two numbers is:", pot(number[0], number[1]))
def main():
    print("CALCULATOR\n")
    print("1. Sum")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Potentiation")
    option = int(input("\nEnter the desired operation: "))
    print("")
    menu(option)

if __name__ == "__main__":
    main()