#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int WordCounter(char* file_name){
    FILE* fp;
    fp=fopen(file_name, "r");

    int words;
    char ch;
    words=0;

    while((ch=fgetc(fp))!=EOF)
        if(ch==' ' || ch=='\n')
            words++;

    fclose(fp);
    return words;
}

int main(){
    char s[]="iamafile.txt";

    printf("The file contains %d words.", WordCounter(s));
}
