#include<stdlib.h>
 int n;
 int min;
 int max;
 int i;
 int x;

 int main(){
    printf("Input number of elements:");
    scanf("%d",&n);
    printf("Input number %d ", 1);
    scanf("%d",&x);
    min=x;
    max=x;
    for(i=2;i<=n;i++){
      printf("Input number %d ", i);
      scanf("%d",&x);
      if(x<min)
        min=x;
      if(x>max)
        max=x;
    }

    printf("Max is %d\n",max);
    printf("Min is %d",min);
 }
