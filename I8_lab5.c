#include <stdio.h>
#include <string.h>
int main()
{
 char s[200];
 int count = 0;
 int i;
 int foundLetter = 0;
 printf("Enter the string: \n");
 gets(s);
 for (i = 0;i<strlen(s);i++){
    if (s[i] == ' ')
    foundLetter = 0;
    else{
        if (foundLetter == 0)
            count++;
    foundLetter = 1;
  }
 }
 printf("Number of words in given string are: %d\n", count);
}
