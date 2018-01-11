#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[20];
char c;
int length;
int top = -1;


void push( char ch );
void pop();
char top1();


int main()
{
    printf( "Enter the length of the string:\n");
    scanf( "%d", &length );

    printf( "\nEnter the string: \n" );

    do
    {
        scanf( "%c" , &c );
        push( c );
    }
    while( top < length );

    printf( "\nThe reverse of this string : \n ");

    while( top != -1 )
    {
        printf( "%c" , top1() );
        pop();
    }

    return 0;
}

void push( char ch )
{
    top ++;
    a[ top ] = ch;
}

void pop()
{
    top --;
}

char top1()
{
    return a[top];
}
