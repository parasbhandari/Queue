//Queue using linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}K;
K *Front=NULL;
K *Rear=NULL;
void Enqueue(K *p,int x)
{
    K *t=(K*)malloc(sizeof(K));
    if(t==NULL)
    {
        printf("\n Queue is full\n");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(p==NULL)
        {
            Front=Rear=t;
        }
        else{
            Rear->next=t;
            Rear=t;
        }
    }
}
void Dequeue ()
{
    K *temp;
    if(Front==NULL)
    {
     printf("\n Queue is Empty");
    }
    else{
    temp=Front;
    Front=Front->next;
    free(temp);
    }
}
void Display(K *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void isEmpty()
{
    if(Front==NULL)
     {
        printf("\n Queue is Empty");
     }
     else{
        printf("\n Queue is not empty");
     }
}
void isFull()
{
    K *temp=(K*)malloc(sizeof(K));
    if(temp==NULL)
    {
        printf("\n Queue is full");

    }
    else{
        printf("\n Queue is not full");
    }
}
void getFirstElement()
{
    printf("%d ",Front->data);
}
void getLastElement()
{
    printf("%d ",Rear->data);
}

int main()
{
    int a;
    while(1)
    {
    printf("\n -----------------Menu drive of Queue----------------");
    printf("\n 1. To enqueue\n");
    printf("\n 2. To dequeue\n");
    printf("\n 3. To check if queue is Empty\n");
    printf("\n 4. To check if queue is full\n");
    printf("\n 5. To print the first value of queue\n");
    printf("\n 6. To print the last element of queue\n");
    printf("\n 7. To display the queue\n");
    printf("\n 8. To exit\n"); 
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            int x;
            printf("\n Enter the element you want to enqueue\n");
            scanf("%d",&x);
            Enqueue(Front,x);
            break;
        }
        case 2:
        {
            Dequeue();
            break;
        }
        case 3:
        {
            isEmpty();
            break;
        }
        case 4:
        {
            isFull();
            break;
        }
        case 5:
        {
            getFirstElement();
            break;
        }
        case 6:
        {
            getLastElement();
            break;
        }
        case 7:
        {
            Display(Front);
            break;
        }
        case 8:
        {
            return 0;
            break;
        }
        default:
        {
            printf("\n Please choose correct index");
            break;
        }
    }
    }
return 0;
}
