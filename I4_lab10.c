#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int charcount;

   charcount = 0;

   printf("Enter a filename :");
   gets(filename);

   fp = fopen(filename,"r");

   if ( fp )
   {
	   while ((ch=getc(fp)) != EOF)
		    if (ch != ' ' && ch != '\n') { ++charcount; }
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Characters : %d \n", charcount);

getchar();
return(0);
}
