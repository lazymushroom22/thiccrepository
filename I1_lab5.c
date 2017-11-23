#include<stdio.h>

int main(){

    int a[20];
    int n;
    int i;
    int nr=0;
    printf("Input number of elements: ");
    scanf("%d",&n);
    if(n<3){
        printf("invalid number.");
        exit(0);
    }
    for(i=0;i<=n-1;i++){
        printf("Input element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-2;i++)
        if(a[i]=(a[i-1]+a[i+1])/2)
            nr++;
    printf("The number of elements which are equal to the average value of their neighboring elements is: %d ",nr);













}
