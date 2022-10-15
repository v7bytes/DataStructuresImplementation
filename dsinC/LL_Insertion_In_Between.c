#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    
};
//Returning a head pointer

struct Node * insertatFirst(struct Node*head,int data){
    struct Node*ptr =(struct Node*)malloc(sizeof(struct Node)); // Ptr to be the next head.
    ptr->next=head;
    ptr->data=data;
    return ptr; // PTR IS New Head and Is Returned;
};

struct Node * insertatIndex(struct Node*head,int data,int index){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node*p = head; // Initializing P to head
    int i=0;
    while(i!=index-1){ //Just before where the element to be inserted.
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next= third;
    third->data = 3;
    third->next = fourth;
    fourth->data=4;
    fourth->next = NULL;

    traverse(head);
   // head = insertatFirst(head,18);
    head = insertatIndex(head,56,1);
    printf("Traversing new array\n");
    traverse(head);
    return 0;
}