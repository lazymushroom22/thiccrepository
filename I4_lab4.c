#include<stdlib.h>
int a;
int b;
void  fucntie(int* n1, int* n2){
    int aux=*n1;
    *n1=*n2;
    *n2=aux;
}

int main(){
    scanf("%i %i", &a, &b);
    fucntie(&a,&b);
    printf("Numerele inversate sunt: %i %i", a, b);






}

