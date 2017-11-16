#include<stdio.h>
#include<stdlib.h>
int n;
int i;
int sum=0;

int main()
{
    printf("Input number of squares: ");
    scanf("%d",&n);
    if(n<1){
        printf("Error. Cannot input value lower than 1");
        exit(0);
    }
    for(i=1;i<=n;i++)
        {sum+=i*i;
         if(sum<0){
            printf("The sum has broken the limit of int. The largest value of n is: %d\n",i-1);
            exit(0);
         }

        }

    printf("The sum of the first %d squares is: %d",n,sum);

}
