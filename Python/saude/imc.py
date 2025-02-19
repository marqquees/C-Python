"""
Cálculo do IMC (Índice de Massa Corporal)
"""

def libras_para_kg(libras):
    """
    Converte libras para kg.

    return: libras convertidas em kg.
    """
    return libras * 0.45359237

def pe_para_metros(pe):
    """
    Converte pés para metros.

    return: pés convertidos em metros.
    """
    return pe * 0.3048

def polegadas_para_metros(polegadas):
    """
    Converte polegadas para metros.

    return: polegadas convertidas em metros.
    """
    return polegadas * 0.0254

def imc(peso, altura):
    """
    Calcula o IMC (Índice de Massa Corporal)

    peso: peso em kg
    altura: altura em metros
    imc = peso / altura ** 2
    """
    imc = peso / altura ** 2
    print(f"\nIMC: {imc:.2f}")
    classifica_imc(imc)

def classifica_imc(imc):
    """
    Classifica o IMC (Índice de Massa Corporal)

    imc: IMC calculado
    print: classificação do IMC
    """
    if imc < 16:
        print("Baixo peso Grau III")
    elif imc < 17:
        print("Baixo peso Grau II")
    elif imc < 18.5:
        print("Baixo peso Grau I")
    elif imc < 25:
        print("Peso ideal")
    elif imc < 30:
        print("Sobrepeso")
    elif imc < 35:
        print("Obesidade Grau I")
    elif imc < 40:
        print("Obesidade Grau II")
    else:
        print("Obesidade Grau III")
    
def principal():
    """
    Função principal.
    """

    print("IMC (Índice de Massa Corporal)\n")

    print("Unidade de Medida\n")
    print("1. Sistema Internacional (kg, metros)")
    print("2. Sistema Inglês (libras, pés, polegadas)")
    unidade = int(input("Escolha a unidade de medida: "))

    if unidade == 2:
        peso = libras_para_kg(float(input("\nPeso (libras): ")))
        altura = pe_para_metros(float(input("Altura (pés): "))) + polegadas_para_metros(float(input("Altura (polegadas): ")))
    else:
        peso = float(input("\nPeso (kg): "))
        altura = float(input("Altura (m): "))

    imc(peso, altura)
    
if __name__ == "__main__":
    principal()
