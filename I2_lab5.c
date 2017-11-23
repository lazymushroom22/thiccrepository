#include<stdio.h>

int main()
{
    int n;
    int x[20];
    int i;
    int ratio,auxiliary;
    printf("Input number of elements: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        printf("Input element %d: ",i+1);
        scanf("%d",&x[i]);
    }
    auxiliary=x[1]-x[0];
    for(i=1;i<=n-2;i++){
        ratio=x[i+1]-x[i];
        if(auxiliary!=ratio){
            printf("The sequence is not in an arithmetical progression");
            exit(0);
        }
    }
    printf("The ratio of the arithmetical progression is: %d",ratio);






}
