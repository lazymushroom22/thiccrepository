#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void display(char* file_name){
    FILE* fp;
    fp=fopen(file_name, "r");
    char ch;

    while((ch=fgetc(fp))!=EOF)
        printf("%c", ch);

    fclose(fp);
}

int main(){
    char s[]="iamafile.txt";

    display(s);
}
