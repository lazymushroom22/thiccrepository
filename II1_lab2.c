#include<stdlib.h>
long product=1;
int term;
int i;
int n;
int nr=0;

int main(){
    printf("Input number of terms: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
      printf("Input term %d: ",i+1);
      scanf("%d",&term);
      product*=term;
    }
    printf("The product is %li\n",product);
    while(product%10==0){
           nr++;
           product=product/10;
    }

    printf("The number of zeroes at the end of the product is: %d",nr);



}
