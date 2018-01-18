#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));

    new_node->data=new_data;

    new_node->next=(*head_ref);

    (*head_ref)=new_node;
}

void showList(struct Node* head){
    struct Node* p = head;

    while(p!=NULL){
    	printf("%d ", p->data);
    	p=p->next;
    }

    printf("\n");
}

void bubbleSortList(struct Node** head, int n){
    if (n==1)
        return;

    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    p=head;
    struct Node* auxl=(struct Node*)malloc(sizeof(struct Node));
    auxl=head;
    int aux;

    int i;
    for (i=0;i<n-1;i++){
        if (p->data>p->next->data){
            aux=p->data;
            p->data=p->next->data;
            p->next->data=aux;
        }

        p=p->next;
    }
    bubbleSortList(auxl,n-1);
}

int main(){
    struct Node* head=NULL;

    push(&head,8);
    push(&head,13);
    push(&head,5);
    push(&head,2);
    push(&head,3);
    push(&head,1);
    push(&head,7);

    int n;
    n=7;

    bubbleSortList(head,n);

    showList(head);
}
