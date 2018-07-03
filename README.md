Atividade avaliativa da faculdade

Suponha que você foi contratado por uma academia que está preocupada em acompanhar a saúde de todos os seus alunos. Portanto, você vai precisar criar para eles uma estrutura de cadastro de alunos que possa guardar o nome, o e-mail, o peso e a altura de cada aluno. Considere que essa academia nunca vai ter mais do que 20 alunos (a gente nunca pode garantir isso no mundo real, mas podemos garantir nesse mundo imaginário, controlado, considerando que só existem 20 pessoas no mundo).

Além de criar o cadastro de alunos, a academia quer uma opção que calcule o IMC (índice de massa corpórea) de cada aluno para listar a situação em que eles se encontram, para saber se vão precisar de acompanhamento especial ou não.
Então você pensou muito a respeito e decidiu fazer da seguinte forma:

* Uma função separada para calcular o imc, ela recebe dois valores em ponto flutuante (peso e altura) e retorna um valor (o imc) em ponto flutuante.
* Uma estrutura chamada Aluno onde será armazenado nome, e-mail, peso e altura.
* Um vetor de 20 posições que armazenará as estruturas.
* Uma tela de menu, que terá as seguintes opções:

1. Cadastra aluno (apenas 1, escolhendo a posição de 1 a 20).
2. Listar alunos.
3. Apagar aluno (pode apagar pela posição na lista).
4. Listar IMC de alunos (lista todos os nomes, com o valor do IMC e a condição para o IMC de acordo com a tabela acima).
0. Sair.

O programa deve permanecer em execução até o usuário escolher a opção "Sair".
