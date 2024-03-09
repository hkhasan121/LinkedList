#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;  //declare global variable

void firstNode(int data)
{
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=data;
    head->next=NULL;
}
void add_beggining(int data)
{
    struct Node *ptr=NULL;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=NULL;
    //this is adding part at beginning.
    ptr->next=head;
    head=ptr;
}

void addNodeEnd(int data)
{
    struct Node *ptr;
    ptr=head;
    struct Node *temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}

void addNode_atPos(int data,int pos)
{
    struct Node *ptr;
    ptr=head;
    struct Node *temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    int i=0;
    while(i!=pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;

}

void delFirstNode()
{
    if(head==NULL)
    {
        printf("List Empty");
    }
    else
    {
        struct Node *temp=NULL;
        temp=head;
        head=head->next;
        temp=NULL;
    }
}

void delNode_atPos(int pos)
{
    struct Node *ptr;
    ptr=head;
    int i=0;
    while(i!=pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    ptr->next=ptr->next->next;
}

void printNode()
{
    struct Node *ptr;
    ptr=head;
    printf("Linked list: ");
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        if(ptr->next!=NULL)
            printf("->");
        ptr=ptr->next;
    }
    printf("\n");
}


int main()
{
    add_beggining(5);
    addNodeEnd(10);
    addNodeEnd(15);
    printNode();
    printf("\n");
    addNode_atPos(25,2);
    delNode_atPos(1);
    addNode_atPos(20,2);
    delNode_atPos(3);
    printNode();
    printf("\n");
    return 0;
}
