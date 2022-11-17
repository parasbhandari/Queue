//Circular queue
// while implementing queue with array we found the drawbacks which are listed 
// below:
// 1) we cann't reuse empty spaces.
// 2) Every location is used only one time.
// 3) There might be a condition where queue is Empty and full at the same time.
#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void Enqueue(struct Queue *p, int x)
{
    if((p->rear+1)%p->size==p->front)
    {
        printf("\n Queue is full");
    }
    else{
        p->rear=(p->rear+1)%p->size;
        p->Q[p->rear]=x;
    }
}
void Dequeue(struct Queue *p)
{
    if(p->front==p->rear)
    {
        printf("\n Queue is Full");
    }
    else{
        p->front=(p->front+1)%p->size;
    }
}
void Display(struct Queue p)
{
    int i;
    i=p.front+1;
    do{
        printf("%d ",p.Q[i]);
        i=(i+1)%p.size;
    }while(i!=(p.rear+1)%p.size);
}
void Create(struct Queue *p)
{
    p->front=p->rear=0;
    p->Q=(int*)malloc(sizeof(int)*p->size);
}
int main()
{
    int key;
    struct Queue k;
    printf("\n Enter the size of queue");
    scanf("%d ",&k.size);
    k.front=k.rear=0;
    k.Q=(int*)malloc(sizeof(int)*k.size);
    
    while(1)
   {
    printf("\n-------------- Drive Menu of circular queue-------------");
    printf("\n 1.To enqueue the element in queue");
    printf("\n 2.To dequeue the element from queue");
    printf("\n 3.To display the queue");
    printf("\n 4. To exit");
    printf("\n\n");
    scanf("%d",&key);
    switch(key)
    {
        case 1:
        {
            int x;
            printf("\n Enter the element you want to enqueue");
            scanf("%d ",&x);
            Enqueue(&k,x);
            break;
        }
        case 2:
        {
            Dequeue(&k);
            break;
        }
        case 3:
        {
            Display(k);
            break;
        }
        case 4:
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
