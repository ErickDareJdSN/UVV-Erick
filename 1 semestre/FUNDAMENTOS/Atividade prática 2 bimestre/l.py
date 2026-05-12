import math

def main ():
    while True:
        try:
            print()
            r = float(input("Digite o valor do raio da esfera: "))

            if r <= 0:
                raise ValueError ("Insira um número maior que zero")
            
            area = 4 * math.pi * r ** 2
            volume = 4/3 * math.pi * r ** 3

            print()
            print(f"Resultados do cálculo da esfera de raio {r}")
            print()
            print(f"Área: {area:.2f}")
            print(f"Volume: {volume:.2f}")

        except ValueError as e:
            print(f"Erro: {e}")

        resposta = input ("\nDeseja calcular novamente? (s/n): ").strip().lower()

        while resposta not in ["s", "n"]:
            resposta = input("\nOpção inválida, utilize s para sim ou n para não: ").strip().lower()

        if resposta == "n":
            break

main()