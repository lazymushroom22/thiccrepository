#include <stdio.h>
#include <stdlib.h>

typedef struct s1
{
    char c1;
    struct s1 * next;
};

typedef struct s2
{
    char c2;
    struct s2 * next;
};
int i;

int main()
{
    struct s1 * p = (struct s1 *) malloc( sizeof(struct s1) );
    struct s2 * p2 = ( struct s2 *) malloc( sizeof( struct s2) );

    p -> next = NULL;
    p2 -> next = NULL;

    struct s1 * head = p;
    struct s2 * head2 = p2;


    for (i = 0 ; i < 3 ; i++ )
    {
        struct s1 * newEl = ( struct s1 *) malloc( sizeof( struct s1) );
        newEl -> c1 = i + 97;
        newEl -> next = NULL;
        p -> next = newEl;
        p = newEl;

        struct s2 * newEl2 = ( struct s2 *) malloc( sizeof( struct s2) );
        newEl2 -> c2 = 3 * i + 97;
        newEl2 -> next = NULL;
        p2 -> next = newEl2;
        p2 = newEl2;
    }

    concatenate (  p , head2 );

    printf ( "\n The elements of the first list, now, are : ");

    while ( head -> next )
    {
        head = head -> next;
        printf ( "\n %c ", head -> c1);
    }
    return 0;
}

void concatenate ( struct s1 * p , struct s2 * head2 )
{
    p -> next = head2 -> next;
}
