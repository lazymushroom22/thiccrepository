#include<stdlib.h>
int number;
int i;
int ok=1;
int main(){
    scanf("%d",&number);
    if(number==2 || number==1)
        printf("The number %d is prime.",number);
    else{
    for(i=2;i<=number/2;i++)
            if (number%i==0){

                    ok=0;
                    break;
                    }
    if(ok==1)
        printf("The number %d is prime.",number);
    else
        printf("The number %d is not prime.",number);
    }





    }
