#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void FirstNode(int data)
{
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=data;
    head->next=NULL;
}
void addNodeEnd(int data)
{
    struct Node *temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    struct Node *ptr=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}

void printNode()
{
    struct Node *ptr=NULL;
    ptr=head;
    int sum=0;
    cout<<"List: ";
    while(ptr!=NULL)
    {
        cout<<ptr->data<<",";
        sum+=(ptr->data * ptr->data);
        ptr=ptr->next;
    }
    cout<<endl;
    cout<<"Sum of square of the linked list: "<<sum;
    cout<<endl;
}


int main()
{
    FirstNode(5);
    addNodeEnd(7);
    addNodeEnd(9);
    addNodeEnd(11);
    addNodeEnd(13);
    printNode();

}
