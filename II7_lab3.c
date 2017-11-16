#include<stdio.h>
int i;
int j;
int main()
{
for ( i =0 ; i <=4 ; i++) {
    for ( j =i ; j <=8-i ; j++)
        printf("%d ",j+1);

printf("\n");
}

}
