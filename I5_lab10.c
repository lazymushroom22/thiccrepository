#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int LongestLineLength(char* file_name){
    FILE* fp;
    fp=fopen(file_name, "r");

    int max_lenght;
    int current_lenght;
    char ch;
    max_lenght=0;
    current_lenght=0;

    while((ch=fgetc(fp))!=EOF)
        if(ch!='\n'){
            current_lenght++;
            if(current_lenght>=max_lenght)
                max_lenght=current_lenght;

        }else{

            current_lenght=0;
        }

    fclose(fp);
    return max_lenght;
}

int main(){
    char s[]="iamafile.txt";

    printf("The file's longest line is %d characters long.", LongestLineLength(s));
}
