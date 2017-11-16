#include<stdlib.h>
int n;
int i;
int fibo[100];

int main(){
    printf("Input number of Fibonacci terms: ");
    scanf("%d",&n);
    fibo[0]=0;
    fibo[1]=1;
    printf("The Fibonacci sequence is as follows:\n%d %d ",fibo[0],fibo[1]);
    for(i=2;i<=n-1;i++){
        fibo[i]=fibo[i-2]+fibo[i-1];
        printf("%d ",fibo[i]);
    }



}
