#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node * next;
    int data;
} node;
int main()
{
    node * head=NULL ;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    head->data=8;
    printf("Head stores:%d\n",head->data);

    return 0;


}
