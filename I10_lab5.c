#include<stdio.h>
#include<string.h>

void accountid(char first[30], char last[30]){

    int i;
    int nr=0;
    strlwr(first);
    strlwr(last);
    printf("Your account ID is: ");
    printf("%c",first[0]);
    for(i=0;i<=strlen(last)-1;i++){
        printf("%c",last[i]);
        nr++;
        if(nr==7)
            break;
    }


}

int main(){

    char first[30];
    char last[30];
    printf("Please enter your first name:\n ");
    gets(first);
    printf("Please enter your last name:\n ");
    gets(last);

    accountid(first,last);
}
