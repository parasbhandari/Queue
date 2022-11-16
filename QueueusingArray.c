//Queue using array
#include<stdio.h>
#include<stdlib.h>
typedef struct Queues{
    int size;
    int front;
    int Rear;
    int *n;
}K;
void Enqueue(K *p,int x)
{
    if(p->Rear==p->size-1)
    {
        printf("\n Queue is full, cann't inserted");
    }
    else{
        p->Rear++;
        p->n[p->Rear]=x;
    }
}
void Dequeue(K *p)
{
    if(p->Rear==p->front)
    {
        printf("\n Queue is Empty");
    }
    else{
        p->front++;
    }
}
void isEmpty(K p)
{
    if(p.front==p.Rear)
    {
        printf("\n Yes Queue is Empty");

    }
    else{
        printf("\n No Queue is not Empty");
    }
}
void isFull(K p)
{
    if(p.Rear==p.size-1)
    {
        printf("\n Yes Queue is full");
    }
    else{
        printf("\n No Queue is not full");
    }
}
void first(K p)
{
    printf("first element of queue is %d ",p.front++);
}
void last(K p)
{
    printf("\n Last element of queue is %d ",p.Rear );
}
void Display(K p)
{
    int i;
    for(i=p.front+1;i<=p.Rear;i++)
    {
        printf("%d ",p.n[i]);
    }
}
int main()
{
    int a;
    K queue;
    printf("\n Enter the size of queue");
    scanf("%d",&queue.size);
    queue.front=queue.Rear=-1;
    queue.n=(int*)malloc(sizeof(int)*queue.size);
    
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
            printf("\n Enter the element you want to insert in queue\n");
            scanf("%d",&x);
            Enqueue(&queue,x);
            break;
        }
        case 2:
        {
            Dequeue(&queue);
            break;
        }
        case 3:
        {
            isEmpty(queue);
            break;
        }
        case 4:
        {
           isFull(queue);
           break;
        }
        case 5:
        {
            first(queue);
            break;
        }
        case 6:
        {
            last(queue);
            break;
        }
        case 7:
        {
            Display(queue);
            break;
        }
        case 8:
        {
            return 0;
            break;
        }
        default:
        {
            printf("\n Please choose right index");
            break;
        }
    }
}
return 0;
}





