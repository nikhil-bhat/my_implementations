#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node * next;
    int data;
} node;
node * head=NULL ;

void insert(int data);
void insert(int data) {
    node * temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    head->next=temp;
    head=temp;

}

void find(int d);
void find(int d)
{



}



int main()
{ node * xul;

    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    head->data=8;
xul=head;
    printf("Head stores:%d\n",head->data);
    insert(5);
    insert(-1);
head=xul;

    while(head!=NULL)
    {
        printf("Data:%d\n",head->data);
       head=head->next;

    }
    return 0;


}
