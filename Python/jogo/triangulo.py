
def e_triangulo(lado_a, lado_b, lado_c):
    """
    Verifica se três lados podem formar um triângulo.
    A soma de dois lados arbitrários precisa ser maior que o terceiro lado.
    """
    return (lado_a + lado_b > lado_c) and (lado_a + lado_c > lado_b) and (lado_b + lado_c > lado_a)

def e_triangulo_retangulo(lado_a, lado_b, lado_c):
    """
    Verifica se um triângulo é retângulo aplicando o Teorema de Pitágora.
    """
    if not e_triangulo(lado_a, lado_b, lado_c):
        print("\nNão é um triângulo.")
        return False
    elif lado_c ** 2 == lado_a ** 2 + lado_b ** 2:
        print("\nÉ um triângulo retângulo.")
    else:
        print("\nNão é um triângulo retângulo.")
    
def area_triangulo(lado_a, lado_b, lado_c):
    """
    Calcula a área de um triângulo usando a fórmula de Heron.
    """
    if not e_triangulo(lado_a, lado_b, lado_c): 
        print("\nNão é um triângulo.")
    else:
        s = (lado_a + lado_b + lado_c) / 2
        area = (s * (s - lado_a) * (s - lado_b) * (s - lado_c)) ** 0.5
        print(f"\nÁrea do Triângulo: {area:.2f}")

def menu():
    print("Triângulo")

    print("\n1. Validar Triângulo Retângulo")
    print("2. Calcular Área de Triângulo")
    opcao = input("\nEscolha uma opção: ")
    print()

    
    lado = []
    for i in range(2):
        lado.append(float(input(f"Digite o lado {i + 1}: ")))

    if opcao == "1":
        lado.append(float(input("Digite a Hipotenusa: ")))
        e_triangulo_retangulo(lado[0], lado[1], lado[2])
    elif opcao == "2":
        lado.append(float(input(f"Digite o lado 3: ")))
        area_triangulo(lado[0], lado[1], lado[2])

if __name__ == "__main__":
    menu()