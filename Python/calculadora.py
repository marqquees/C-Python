import os

def limpar():
    if os.name == "nt":
        os.system("cls")
    else:
        os.system("clear")

def soma(a, b): 
    return a + b

def subtracao(a, b):
    return a - b 

def multiplicacao(a, b):
    return a * b

def divisao(a, b):
    if b != 0:
        return a / b
    else:
        print("Erro. Não é possível dividir por zero!")

def potenciacao(a, b):
    return a ** b

def calculadora(opcao):
    if opcao < 1 or opcao > 5:
        print("Opção inválida.")
        limpar()
        principal()
    else:
        numero = []
        sequencia = ["primeiro", "segundo"]
        for i in range(2):
            numero.append(float(input(f"Digite o {sequencia[i]} número: ")))
        if opcao == 1:
            print(f"\nA soma de {numero[0]} mais {numero[1]} é de {soma(numero[0], numero[1])}") 
        elif opcao == 2: 
            print(f"\nA subtração de {numero[0]} menos {numero[1]} é de {subtracao(numero[0], numero[1])}")
        elif opcao == 3: 
            print(f"\nA multiplicação de {numero[0]} por {numero[1]} é de {multiplicacao(numero[0], numero[1])}")
        elif opcao == 4: 
            print(f"\nA divisão de {numero[0]} por {numero[1]} é de {divisao(numero[0], numero[1])}")
        elif opcao == 5: 
            print(f"\nA potenciação de {numero[0]} elevado a {numero[1]} é de {potenciacao(numero[0], numero[1])}")
        
def principal():
    print("CALCULADORA\n")
    print("1. Soma")
    print("2. Subtração")
    print("3. Multiplicação")
    print("4. Divisão")
    print("5. Potenciação")
    opcao = int(input("\nDigite a operação desejada: "))
    limpar()
    calculadora(opcao)

if __name__ == "__main__":
    principal()
