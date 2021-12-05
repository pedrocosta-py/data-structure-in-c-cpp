/*
by: sudoAptIPedro
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//constante para contole
#define max 3

//create a struct informations
struct registro_alunos{
    char nome[60];
    char telefone[15];
    int idade;
};

//begin main function
int main(){
    struct registro_alunos alunos[max];
    int i;
    int c;
    FILE* p;
    //abertura e leitura do arquivo de dados txt
    if((p=fopen("alunos.txt", "a+"))==NULL){
        printf("ERRO NO ARQUIVO!\n\n POR FAVOR, TENTE NOVAMENTE");
        exit(1);
    }
    //
	printf(" W E L C O M E \n T O \n T H E \n P R O G R A M \n");
    //loop for data input
    for(i=0; i<max;i++){
        printf("\n--> Digite o nome do aluno\n -->");
        fflush(stdin);
        gets(alunos[i].nome);
        //
        if(p!=NULL){
            printf("OS DADOS DOS ALUNOS FORAM CADASTRADOS\n");
            fprintf(p, "%s", alunos[i].nome);
            fprintf(p,"\n\n");
        }
        //
        printf("\n --> Digite o telefone do aluno\n -->");
        fflush(stdin);
        gets(alunos[i].telefone);
        //
        if(p!=NULL){
            printf("OS DADOS DOS ALUNOS FORAM CADASTRADOS\n");
            fprintf(p, "%s", alunos[i].telefone);
            fprintf(p,"\n\n");
        }
        //
        printf("\n--> Digite a idade do aluno\n -->");
        scanf("%d", &alunos[i].idade);
        if(p!=NULL){
            printf("\n\nOS DADOS DOS ALUNOS FORAM CADASTRADOS\n\n");
            fprintf(p, "%d", alunos[i].idade);
            fprintf(p,"\n\n");
        }
    }
    
    for(i=0; i<max; i++){
        printf("IMPRESSAO DOS REGISTROS %d", i+1);
        printf("\n--> Nome do aluno\n --> %s \n\n", alunos[i].nome);
        printf("\n --> Telefone do aluno \n --> %s \n\n", alunos[i].telefone);
        printf("\n --> Idade do aluno \n --> %d \n\n", alunos[i].idade);
    }

    //end program
    printf("\n===================================================================\nF I N A L D O \nP R O G R A M A===================================================================\n");
    system("pause");
    return 0;
}//end main function