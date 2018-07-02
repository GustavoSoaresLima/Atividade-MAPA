#include<stdio.h>
#include<stdlib.h>

struct Aluno{
          char nome[20];
          char email[20];
          float peso;
		  float altura;
};
    struct Aluno cad_aluno[20];

float calculaimc(float p, float a){
    float resultado = p / (a*a);
    return resultado;
}
int main (){
	int opcao, i, l, excluir = 0, posicao;
        for (i = 1; i <=20;){
            printf("\n\nCadastro dos Alunos: \n");
            printf("Digite o numero de uma das opções: \n");
            printf("1: Cadastrar um aluno \n");
            printf("2: Listar alunos \n");
            printf("3: Apagar alunos \n");
            printf("4: Listar IMC dos alunos \n");
            printf("0: Sair \n");
            scanf("%d", &opcao);
            switch(opcao) {
            case 1:
                if(excluir == 0){
                    printf ("\n Nome do aluno: ");
                    scanf ("%s", &cad_aluno[i].nome);
                    fflush(stdin);
                    printf ("\n Email do aluno: ");
                    scanf ("%s", &cad_aluno[i].email);
                    fflush(stdin);
                    printf ("\n Peso do aluno: ");
                    scanf ("%f", &cad_aluno[i].peso);
                    fflush(stdin);
                    printf ("\n Altura do aluno: ");
                    scanf ("%f", &cad_aluno[i].altura);
                    fflush(stdin);
                    i++; //incrementa o laco
                } else if(excluir == 1){ //sobrescreve o aluno apagado
                    printf ("\n Nome do aluno: ");
                    scanf ("%s", &cad_aluno[posicao].nome);
                    fflush(stdin);
                    printf ("\n Email do aluno: ");
                    scanf ("%s", &cad_aluno[posicao].email);
                    fflush(stdin);
                    printf ("\n Peso do aluno: ");
                    scanf ("%f", &cad_aluno[posicao].peso);
                    fflush(stdin);
                    printf ("\n Altura do aluno: ");
                    scanf ("%f", &cad_aluno[posicao].altura);
                    fflush(stdin);
                    excluir = 0;
                }break;
            case 2:
                for (l = 1; l <=20; l++) {
                    if(l < i){
                        printf("\n\nNome: %s", cad_aluno[l].nome);
                        printf("\nEmail: %s", cad_aluno[l].email);
                        printf("\nPeso: %1.2f", cad_aluno[l].peso);
                        printf("\nAltura: %1.2f", cad_aluno[l].altura);
                    } else{
                        l = 20;
                    }
                }break;
            case 3 :
                excluir = 1;
                for (l = 1; l <=20; l++) {
                    if(l < i){
                        printf("\n\nNome: %s Posição: %d", cad_aluno[l].nome, l);
                    } else{
                        l = 20;
                    }
                }
                printf("\nDigite a posição do aluno que deseja excluir: ");
                scanf("%d", &posicao);
                strcpy(cad_aluno[posicao].nome, "");
                strcpy(cad_aluno[posicao].email, "");
                cad_aluno[posicao].peso = 0;
                cad_aluno[posicao].altura = 0;
                break;
            case 4 :
                for (l = 1; l <=20; l++) {
                    if(l < i){
                        float IMC = calculaimc(cad_aluno[l].peso, cad_aluno[l].altura);;
                        printf("\nIMC do aluno %s", cad_aluno[l].nome);
                        printf(": %1.2f", IMC);
                        printf(" e sua condição: ");
                        if (IMC < 18.5){ //esse desvio define a condicao do aluno
                            printf("Baixo peso.");
                        } else if (IMC >=18.5 &&  IMC <25){
                            printf("Peso ideal.");
                        } else if (IMC >=25 &&  IMC<30){
                            printf("Sobrepeso.");
                        } else if (IMC >=30 &&  IMC<35){
                            printf("Obesidade Grau 1.");
                        } else if (IMC >=35 &&  IMC<=40){
                            printf("Obesidade Grau 2.");
                        } else if (IMC > 40){
                            printf("Obesidade Grau 3.");
                        }
                    } else{
                        l = 20;
                    }
                }break;
            case 0 : exit(0); //encerra o programa
            default:
                printf ("Opção invalida(Somente numeros de 0 a 4)\n");
                break;
        }
	}
	return 0;
}
