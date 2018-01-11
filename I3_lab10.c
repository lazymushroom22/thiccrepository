#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    int charcount;
    int max=-1;
    int linecount;
    int linelength;
    charcount = 0;
    linecount = 0;
    linelength=0;

    printf("Enter a filename :");
    gets(filename);
    fp = fopen(filename,"r");

   if ( fp )
   {
	   while ((ch=getc(fp)) != EOF){
           if (ch != ' ' && ch != '\n') {
               ++charcount;
               ++linelength ;
               }
		   if (ch == '\n') {
                ++linecount;
                if(max<linelength)
                    max=linelength;
                linelength=0;
		   }
	   }

	   if (charcount > 0)
            ++linecount;
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", linecount);
    printf("The longest line has %d characters ",linelength);

    getchar();
    return(0);
}
