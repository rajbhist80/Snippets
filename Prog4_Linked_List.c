#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nxt;
}*head, *ptr, *nnode;

void llmake()
{
    char c;
    // head = (struct node*)malloc(sizeof(struct node));
    nnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter No. : ");
    scanf("%d", &(nnode->data));
    nnode->nxt = NULL;
    head = nnode;
    printf("Wnat to enter more? y/n : ");
    scanf("%s", &c);
    while(c == 'y')
    {
        ptr = (struct node*)malloc(sizeof(struct node));
        printf("Enter No. : ");
        scanf("%d", &(ptr->data));
        ptr->nxt = NULL;
        nnode->nxt = ptr;
        nnode = ptr;
        printf("Wnat to enter more? y/n : ");
        scanf("%s", &c);
    }
    printf("Linked list created successfully.\n");
}

void showll()
{
    ptr = head;
    printf("\n-----------------------------\n");
    do
    {
        printf("\nNo. : %d", ptr->data);
        ptr = ptr->nxt;
    }while (ptr != NULL);
    printf("\n-----------------------------\n");
}

void ins_head()
{
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter No. : ");
    scanf("%d", &(ptr->data));
    ptr->nxt = head;
    head = ptr;
}

void main()
{
    llmake();
    showll();
    ins_head();
    showll();
}
