# Função para determinar o nível do herói com base na XP
def determinar_nivel(experiencia):
    if experiencia < 1000:
        return "Ferro"
    elif 1001 <= experiencia <= 2000:
        return "Bronze"
    elif 2001 <= experiencia <= 5000:
        return "Prata"
    elif 5001 <= experiencia <= 7000:
        return "Ouro"
    elif 7001 <= experiencia <= 8000:
        return "Platina"
    elif 8001 <= experiencia <= 9000:
        return "Ascendente"
    elif 9001 <= experiencia <= 10000:
        return "Imortal"
    else:
        return "Radiante"

# Entrada do nome e experiência do herói
nome_heroi = input("Digite o nome do herói: ")
experiencia_heroi = int(input("Digite a quantidade de experiência do herói: "))

# Determinar o nível do herói com base na experiência
nivel_heroi = determinar_nivel(experiencia_heroi)

# Exibir mensagem com o nome do herói e seu nível
print(f"O Herói de nome {nome_heroi} está no nível de {nivel_heroi}")
