/*
by: sudoAptIPedro
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//globalizando metodos
void decimalToBin();
void decimalToBaseThree();
void decimalToBaseFour();
void decimalToBaseFive();
void decimalToBaseSix();
void decimalToBaseSeven();
void decimalToBaseEight();
void decimalToBaseNine();

//method decimal number to Bin
void decimalToBin(int decimal){
    //declaration
    int i, j, resto, quociente; 
    int a[10];
    //begin code
    i=-1;
    do{
        i=i+1;
        quociente=decimal/2;
        resto=decimal%2;
        a[i]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (j=i;j>=0;j--){
            printf("%d",a[j]);
        }
}

//method decimal number to base 3
void decimalToBaseThree(int decimal){
    int l, h, resto, quociente; 
    int b[10];
    //begin code
    h=-1;
    do{
        h=h+1;
        quociente=decimal/3;
        resto=decimal%3;
        b[h]=resto;
        decimal=quociente;

    }while (quociente!=0);
         for (l=h;l>=0;l--){
            printf("%d",b[l]);
        }
}

//method decimal number to base 4
void decimalToBaseFour(int decimal){
    int a, b, resto, quociente; 
    int c[10];
    //begin code
    a=-1;
    do{
        a=a+1;
        quociente=decimal/4;
        resto=decimal%4;
        c[a]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (b=a;b>=0;b--){
            printf("%d",c[b]);
        }
}

//method decimal number to Base 5
void decimalToBaseFive(int decimal){
    int y, z, resto, quociente; 
    int d[10];
    //begin code
    y=-1;
    do{
        y=y+1;
        quociente=decimal/5;
        resto=decimal%5;
        d[y]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (z=y;z>=0;z--){
            printf("%d",d[z]);
        }
}

//method decimal number to base 6
void decimalToBaseSix(int decimal){
    int u, g, resto, quociente; 
    int e[10];
    //begin code
    u=-1;
    do{
        u=u+1;
        quociente=decimal/6;
        resto=decimal%6;
        e[u]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (g=u;g>=0;g--){
            printf("%d",e[g]);
        }
}

//method decimal number to Base 7
void decimalToBaseSeven(int decimal){
    int s, q, resto, quociente; 
    int f[10];
    //begin code
    s=-1;
    do{
        s=s+1;
        quociente=decimal/7;
        resto=decimal%7;
        f[s]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (q=s;q>=0;q--){
            printf("%d",f[q]);
        }
}

//method decimal number to Base 8
void decimalToBaseEight(int decimal){
    int v, m, resto, quociente; 
    int g[10];
    //begin code
    v=-1;
    do{
        v=v+1;
        quociente=decimal/8;
        resto=decimal%8;
        g[v]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (m=v;m>=0;m--){
            printf("%d",g[m]);
        }
}

//method decimal number to Base 9
void decimalToBaseNine(int decimal){
    int t, r, resto, quociente; 
    int i[10];
    //begin code
    t=-1;
    do{
        t=r+1;
        quociente=decimal/9;
        resto=decimal%9;
        i[t]=resto;
        decimal=quociente;

    }while (quociente!=0);
        for (r=t;r>=0;r--){
            printf("%d",i[r]);
        }
}
int main(){
    int decimal, op;
    printf("\n\n= = = = = = = = = = = = = = = = = = = = \n B E M \n V I N D O \n A O \n P R O G R A M A \n = = = = = = = = = = = = = = = = = = = =\n\n");
    printf("--> Entre com o numero na base 10\n -->");
    scanf("%d",&decimal);
    printf("OPCOES:\n\n [1] -- SAIR \n\n [2] Conversao para binario \n\n [3] Conversao para base 3 \n\n [4] Conversao para base 4 \n\n [5] Conversao para base 5 \n\n [6] Conversao para base 6 \n\n [7] Conversao para base 7 \n\n [8] Conversao para base 8\n\n [9] Conversao para base 9\n\n");
    printf("--> Digite um numero de 1 a 9 para escolher qual opcao deseja executar\n -->");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("OBRIGADO PELA COLABORACAO!\n\n");
    break;
    case 2:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BINARIO! \n Seu numero em binario eh\n -->");
        decimalToBin(decimal);
    break;
    case 3:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 3! \n Seu numero na base 3 eh\n -->");
        decimalToBaseThree(decimal);
    break;
    case 4:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 4! \n Seu numero na base 4 eh\n -->");
        decimalToBaseFour(decimal);
    break;
    case 5:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 5! \n Seu numero na base 5 eh\n -->");
        decimalToBaseFive(decimal);
    break;
    case 6:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 6! \n Seu numero na base 6 eh\n -->");
        decimalToBaseSix(decimal);
    break;
    case 7:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 7! \n Seu numero na base 7 eh\n -->");
        decimalToBaseSeven(decimal);
    break;
    case 8:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 8! \n Seu numero na base 8 eh\n -->");
        decimalToBaseEight(decimal);
    break;
    case 9:
        printf("VOCE ESCOLHEU A OPCAO DE CONVERSAO PARA BASE 9! \n Seu numero na base 9 eh\n -->");
        decimalToBaseNine(decimal);
    break;
    default:
        printf("--> Enter a valid number \n\n");
    break;
    }

    printf("\n\n= = = = = = = = = = = = = = = = = = = = \n P R O G R A M A \n \n E N C E R R A D O \n = = = = = = = = = = = = = = = = = = = =\n\n");
    system("pause");
    return 0;
}