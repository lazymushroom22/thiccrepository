#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  char nume[256];

int main(){

    scanf("%[^\n]s",nume);
    printf("%s\n",nume);
    printf("%s\n",strupr(nume));
    printf("%s",strlwr(nume));

    return 0;
}
