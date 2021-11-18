#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int ElemType;

typedef struct LinkNode
{
    ElemType data;
    struct LinkNode *next;
}LinkNode;

typedef struct 
{
    LinkNode *front,*rear;
}LinkQueue;

void InitQueue(LinkQueue &Q)//初始化队列
{
    Q.front=Q.rear=(LinkNode *)malloc(sizeof(LinkNode));
    Q.front->next=NULL;
}

void EnQueue(LinkQueue &Q,ElemType x)//入队操作
{
    LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
    s->data=x;
    s->next=NULL;
    Q.rear->next=s;
    Q.rear=s;
}

void DeQueue(LinkQueue &Q,ElemType &x)//出队操作(有BUG)
{
    if(Q.rear=Q.front)
    return;
    LinkNode *p=Q.front->next;
    x=p->data;
    Q.front->next=p->next;
    if(Q.rear==p)
    Q.rear=Q.front;
    free(p);
    
}

void PrintQueue(LinkQueue &Q)
{
    if(Q.front==NULL || Q.rear==NULL)
    return;
    
    while(Q.front!=NULL)
    {
		printf("%d\n",Q.front->data);
		Q.front=Q.front->next;
	}
}

int main(void)
{
    LinkQueue Q;
    ElemType x=0;
    InitQueue(Q);
    EnQueue(Q,1);
    EnQueue(Q,2);
    PrintQueue(Q);
    // DeQueue(Q,x);
    // PrintQueue(Q);

    return 0;
    
}
