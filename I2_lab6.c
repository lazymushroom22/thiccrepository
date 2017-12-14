#include<stdio.h>
#include<string.h>

int strlen_array(char array[]){

    int i;
    int length=0;
    for(i=0;array[i]!=NULL;i++)
        length++;
    return length;
}
int strlen_pointer(char* strp){

    int i;
    int length=0;
    for(i=0;*(strp+i)!=NULL;i++)
        length++;
    return length;
}
int main(){

char s[100];

gets(s);

printf("%d ", strlen_array(s));
printf("%d ", strlen_pointer(s));
}
