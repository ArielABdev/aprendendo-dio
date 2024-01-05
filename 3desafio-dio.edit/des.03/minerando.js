const quantidadeGolpes = parseInt(gets());

// Definição dos tipos de minerais Carvao, Ferro, Diamante e Pedra
let minerais = ["Carvao", "Ferro", "Diamante", "Pedra"];
let minaIndex = 0;

// Loop para cada golpe, de 1 até a quantidade informada
for (let i = 1; i <= quantidadeGolpes; i++) {
  // Calcula o índice do mineral usando o operador de módulo (%) para garantir que o índice esteja dentro do tamanho do array
  minaIndex = (i - 1) % minerais.length;

  // Exibe o índice i, concatena com o caractere ":", após, concatena com o tipo de minerais[minaIndex]
  console.log(i + ": " + minerais[minaIndex]);
}
