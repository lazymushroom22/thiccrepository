#include<stdlib.h>
#include<stdio.h>


int computeSum(int n)
{

    int i;
    int sum = 0;
    int nextValue = 1;
    for (i = 0; i<=n-1; i++) {
        sum += nextValue;
        nextValue *= 3;
        }
    return sum;
}

int main()
{
    int n;
    printf("Input number of terms: ");
    scanf("%d",&n);
    printf("The sum of %d terms is as follows: %d\n",n,computeSum(n));
    printf("The sum 1+3+9+27+81 is: %d",computeSum(5));
}
