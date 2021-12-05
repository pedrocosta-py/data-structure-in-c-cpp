/*
by: sudoAptIPedro
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int fat(int n){
    if((n==0)||(n==1)||(n==2)){
        return n;
    }
    else{
        return (n*fat(n-1));
    }
}

/* function potencia recursive */
int pot(int base, int exp){
    if(exp==0){
        return 1;
    }
    else{
        return (base*pot(base, exp-1));
    }
}
// 
/*main function*/
int main(){
    int m, n, result;
    //date input:
    printf(" W E L C O M E \n T O \n T H E \n P R O G R A M \n");
    //input 1:
    printf("--> Digite um numero inteiro \n -->");
    scanf("%d",&m);
    //input 2:
    printf("\n--> Digite um outro numero inteiro \n -->");
    scanf("%d",&n);
    //result for expression
    result = (pot(n,m)-fat(n));
    printf("\n\n --> Your result is %d", result);
    //end program
    return 0;
} //end main method