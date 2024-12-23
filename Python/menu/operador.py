import os, time

def limpar():
    time.sleep(5)
    if os.name == "nt":
        os.system("cls")
    else:
        os.system("clear")

def soma(numero1, numero2): 
    return numero1 + numero2

def subtracao(numero1, numero2):
    return numero1 - numero2 

def multiplicacao(numero1, numero2):
    return numero1 * numero2

def divisao(numero1, numero2):
    return numero1 / numero2

def potenciacao(numero1, numero2):
    return numero1 ** numero2

def menu(opcao):
    # refatoração do código (laço while).
    if opcao < 1 or opcao > 5:
        print("Opção inválida.")
        limpar()
        principal()
    else:
        numeros = []
        sequencia_numeros = ["primeiro", "segundo"]
        for i in range(2):
            numeros.append(float(input(f"Digite o {sequencia_numeros[i]} número: ")))
        if opcao == 1: print("\nA soma dos dois números é:", soma(numeros[0], numeros[1]))
        elif opcao == 2: print("\nA subtração dos dois números é:", subtracao(numeros[0], numeros[1]))
        elif opcao == 3: print("\nA multiplicação dos dois números é:", multiplicacao(numeros[0], numeros[1]))
        elif opcao == 4: print("\nA divisão dos dois números é:", divisao(numeros[0], numeros[1]))
        elif opcao == 5: print("\nA potenciação dos dois números é:", potenciacao(numeros[0], numeros[1]))
        
def principal():
    print("CALCULADORA\n")
    print("1. Soma")
    print("2. Subtração")
    print("3. Multiplicação")
    print("4. Divisão")
    print("5. Potenciação")
    opcao = int(input("\nDigite a operação desejada: "))
    print("")
    menu(opcao)

if __name__ == "__main__":
    principal()
