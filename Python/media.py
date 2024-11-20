
def media(n1, n2):
    return (n1 + n2) / 2

print("MÉDIA")

number = [0,0] 

number[0] = float(input("\nDigite um número: "))
number[1] = float(input("Digite outro número: "))

resultado = media(number[0], number[1])

if resultado >= 10:
    print("\nAPROVADO")
    print(f"Média: {resultado}")
else:
    print("\nREPROVADO")
    print(f"Média {resultado}")