import os, time

def limpar_ecra():
    time.sleep(2)
    if os.name == "nt":
        os.system("cls")
    else:
        os.system("clear")

def vender_livro():
    livro = {}

    print("Vender Livro.\n")

    livro["nome"] = input("Nome do livro: ")
    livro["autor"] = input("Autor do livro: ")
    livro["editora"] = input("Editora do livro: ")
    livro["ano"] = input("Ano de publicação: ")
    livro["genero"] = input("Gênero do livro: ")
    livro["edicao"] = input("Edição do livro: ")
    livro["preco"] = float(input("Preço do livro: "))
    livro["ean"] = float(input("EAN do livro: "))

    print(livro)


def livro():
    print("Bem vindo a Livraria Marquees\n")

    print("1. Comprar livro.")
    print("2. Devolver livro.")
    print("3. Vender livro.")

    opcao = int(input("\nDigite a opção desejada: "))
    if opcao < 1 or opcao > 3:
        print("Opção inválida. Digite novamente.")
        limpar_ecra()
        livro()
    else:
        if opcao == 3:
            vender_livro()


if __name__ == "__main__":
    livro()