#include <stdio.h>
#include "greedyfunctions.h"

int C[]={1,5,10,50};

void make_change(int n);
int bestsol(int s,int n);

int main()
{
 int n;
 printf("\n------------------------------------------------");
 printf("\n       MAKING CHANGE USING GREEDY ALGORITHM     ");
 printf("\n------------------------------------------------");
 printf("\n Enter amount you want:");
 scanf("%d",&n);
 make_change(n);

return 0;
}


