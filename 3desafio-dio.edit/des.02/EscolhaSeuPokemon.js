function escolherPokemon(escolha) {
    let mensagem = "";

    switch (escolha) {
        case 1:
            mensagem = "Bem-vindo! Você escolheu Bulbasaur!";
            break;
        case 2:
            mensagem = "Bem-vindo! Você escolheu Charmander!";
            break;
        case 4:
            mensagem = "Bem-vindo! Você escolheu Pikachu!";
            break;
        case 5:
            mensagem = "Bem-vindo! Você escolheu Mewtwo!";
            break;
        default:
            mensagem = "Escolha inválida!";
    }

    return mensagem;
}

// Exemplo de uso com a escolha 2 (Charmander)
const escolhaDoTreinador = 1;
const mensagemDeBoasVindas = escolherPokemon(escolhaDoTreinador);
console.log(mensagemDeBoasVindas);
