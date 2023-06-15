#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *start,*tptr,*prev;
void InsertNode(int num)//num=10
{
        NODE *newnode;
        newnode = (NODE*)malloc(1*sizeof(NODE));
        newnode -> data = num;
        newnode -> next = NULL;
        if(start == NULL)
            start = newnode;
        else
        {
            for(prev=NULL,tptr=start; tptr!=NULL&&tptr->data < newnode->data ;
            prev=tptr,tptr=tptr->next);
            if(start==tptr)
            {
                newnode->next = tptr;
                start = newnode;
            }
            else
            {
                prev->next = newnode;
                newnode->next = tptr;
            }
        }
}
SllDisplay()
{
    for(tptr=start; tptr!=NULL; tptr=tptr->next)
        printf("%d->",tptr->data);
    printf("\n");
}
int FindMid()
{
    NODE *tptr1,*tptr2;
    tptr1=tptr2=start;
    while(tptr2!=NULL &&  tptr2->next!=NULL)
    {
        tptr1 = tptr1->next;
        tptr2 = tptr2->next->next;
    }
    return tptr1->data;
}
int main()
{
    int num;
    while(1)
    {
        scanf("%d",&num);//20
        if(num==-1)
            break;
        InsertNode(num);//InsertNode(20)
    }
    SllDisplay();
    printf("Mid : %d",FindMid());
    return 0;
}


