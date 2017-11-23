#include<stdlib.h>
#include<math.h>

int main(){
    int p;
    int q;
    int number;
    int aux;
    int help=0;
    int sum=0;
    int conclusion=0;

    printf("Input number: ");
    scanf("%d",&number);
    printf("Input the base of given number: ");
    scanf("%d",&p);
    aux=number;
    while(aux!=0){
        if(aux%10>=p){
            printf("Incorrect number.");
            exit(0);
            }
        aux=aux/10;
    }

    printf("Input the base you want the number converted to: ");
    scanf("%d",&q);
    aux=0;
    while(number!=0)
    {
        aux=number%10*pow(p,help);
        number=number/10;
        sum+=aux;
        help++;
    }
aux=1;
    while(sum!=0){
        conclusion=(sum%q)*aux+conclusion;
        sum=sum/q;
        aux=aux*10;
    }
if(q==16)
    printf("The conversion from base %d to base %d is: %x",p,q,conclusion);
else
    printf("The conversion from base %d to base %d is: %d",p,q,conclusion);
}
