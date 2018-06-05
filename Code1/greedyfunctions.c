#include<stdio.h>
#include "greedyfunctions.h"

void make_change(int n)
{
 int C[]={1,5,10,50};
 int S[50],s=0,x,ind=0,i;
 printf("\n----------------AVAILABLE COINS-----------------\n");

 for(i=0;i<= 3;i++)
  printf("%5d",C[i]);

 printf("\n------------------------------------------------");




while(s!=n)
 {
  x=bestsol(s,n);
  if(x==-1)
  {}
  else
  {
   S[ind++]=x;
   s=s+x;
  }
 }
 printf("\n-------------MAKING CHANGE FOR %4d-------------",n);
 for(i=0;i < ind;i++)
 {
  printf("\n%5d",S[i]);
 }
 printf("\n------------------------------------------------");
}


int bestsol(int s,int n)
{
    int C[]={1,5,10,50};
 int i;

 for(i=3;i>-1;i--)
 {
  if((s+C[i]) <= n)
   return C[i] ;
 }
 return -1;
}

