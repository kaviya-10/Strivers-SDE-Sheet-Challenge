

#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *start,*tptr,*prev;
NODE *InsertNode(int num)
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
        return start;
}
NODE* MergeList(NODE* start1, NODE *start2)
{
    NODE *tptr1,*tptr2,*prev;
    tptr1 = start1;
    tptr2 = start2;
    if(tptr1->data < tptr2->data)
    {
        start = tptr1;
        prev = tptr1;
        tptr1=tptr1->next;
    }
    else
    {
        start = tptr2;
        prev = tptr2;
        tptr2=tptr2->next;
    }
    while(tptr1!=NULL && tptr2!=NULL)
    {
        if(tptr1->data < tptr2->data)
        {
            prev->next = tptr1;
            prev=tptr1;
            tptr1=tptr1->next;
        }
        else
        {
            prev->next = tptr2;
            prev=tptr2;
            tptr2=tptr2->next;
        }
    }
    if(tptr1==NULL)
        prev->next = tptr2;
    else
        prev->next = tptr1;
    return start;
}
SllDisplay(NODE *start)
{
    for(tptr=start; tptr!=NULL; tptr=tptr->next)
        printf("%d->",tptr->data);
    printf("\n");
}
int main()
{
    int num;
    NODE *start1,*start2;
    while(1)
    {
        scanf("%d",&num);//20
        if(num==-1)
            break;
        start1 = InsertNode(num);//InsertNode(20)
    }
    start = NULL;
   while(1)
    {
        scanf("%d",&num);//20
        if(num==-1)
            break;
        start2 = InsertNode(num);//InsertNode(20)
    }
    SllDisplay(start1);
    SllDisplay(start2);
    NODE* newstart = MergeList(start1,start2);
    SllDisplay(newstart);
    return 0;
}



