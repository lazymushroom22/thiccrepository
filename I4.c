#include<stdlib.h>
#include<stdio.h>
   int n1;
   int n2;

int main(){
        scanf("%d",&n1);
        scanf("%d",&n2);
        printf("Adunare: %d\n",n1+n2);
        printf("Scadere: %d\n",n1-n2);
        printf("Inmultire: %d\n",n1*n2);
        printf("Impartire integer: %d\n",n1/n2);
        printf("Modulo: %d\n",n1%n2);
        printf("Impartire reala: %.2f",(float)n1/n2);



return 0;
}

