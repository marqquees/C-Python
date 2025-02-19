def limpa_ecra():
    import os
    os.system("cls" if os.name == "nt" else "clear")

def consumo_gasolina(opcao):
    # distância padrão para o consumo de gasolina na Europa.
    dpeuropa = 100 
    pais = {
        "1": "Europa",
        "2": "Estados Unidos",
        "3": "Brasil"
    }

    limpa_ecra()

    distancia = float(input("Distancia (Km/M): "))
    quantidade = float(input("Litros: "))
    
    if opcao == "1":
        consumo =  dpeuropa / quantidade
    else:
        consumo =  distancia / quantidade

    if opcao == "1":
        print(f"\nO consumo de gasolina na {pais['1']} é de {consumo:.2f} L em {dpeuropa} Km.")
    elif opcao == "2":
        print(f"\nO consumo de gasolina nos {pais['2']} é de {consumo:.2f} milhas/L.")
    elif opcao == "3":
        print(f"\nO consumo de gasolina no {pais['3']} é de {consumo:.2f} km/L.")
        

def menu():
    print("Consumo de Gasolina\n")
    print("1. Europa")
    print("2. Estados Unidos")
    print("3. Brasil")
    opcao = input("\nSelecione uma opção: ")

    consumo_gasolina(opcao)
    
if __name__ == "__main__":
    menu()