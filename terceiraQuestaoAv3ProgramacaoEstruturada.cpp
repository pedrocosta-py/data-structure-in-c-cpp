/*
by: sudoAptIPedro
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
//begin typedef input
struct dataAlunos{
	char nome[60];
	char telefone[11];
	int idade;
};
//begin main function
int main(){
        
    struct dataAlunos  lista_alunos[3];
    int i;
    //
    setlocale(LC_ALL,"");
    //
    for (i=0;i<=2;i++){
        printf ("\n--> De o nome do aluno\n -->");
        scanf("%s",lista_alunos[i].nome);
        printf ("\n--> De o telefone do aluno\n-->");
        scanf("%s",lista_alunos[i].telefone);
        printf ("\n--> De a idade do aluno\n-->");
        scanf("%d",&lista_alunos[i].idade);  
    }
    //
    printf ("--> O nome do terceiro aluno eh %s \n\n -->  A idade do segundo aluno eh %d \n\n --> O telefone do primeiro aluno eh %s \n\n", lista_alunos[2].nome,lista_alunos[1].idade,lista_alunos[0].telefone);	
    printf("\n\n= = = = = = = = = = = = = = = = = = = = F I M  \n  D O  \n  P R O G R A M A = = = = = = = = = = = = = = = = = = = =\n\n");
    system("pause");
    return 0;

} //end main function