﻿//Creation & Display of doubly linked list
#include<stdio.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
int main() {
int i, n;
struct node *head=NULL, *temp=NULL, *newnode=NULL;
printf("\n Enter Number of Nodes :");
scanf("%d",&n);
for(i=0; i<n; i++)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the data[%d]:",i);
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
temp=head;
printf("\n You data is :");
while(temp)
{
    printf("\n%d",temp->data);
    temp=temp->next;
}
}
