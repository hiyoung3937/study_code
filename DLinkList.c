//自己写的有bug的双链表
#include<stdio.h>
#include<stdlib.h>

typedef struct DNode
{
    int data;
    struct DNode *prior,*next;
}DNode,*DLinklist;

void InitDLinkList(DLinklist *L)//初始化双链表
{
    (*L)=(DNode*)malloc(sizeof(DNode));
    (*L)->prior =NULL;
    (*L)->next=NULL;
}

void InsertNextDNode(DLinklist *L)//在p节点之后插入s节点
{
    int x;
    (*L)=(DNode *)malloc(sizeof(DNode));
    DNode *s,*p=(*L);
    while (scanf("%d",&x) && x!=9999)
    {
        s=(DNode *)malloc(sizeof(DNode));
        s->next=p->next;
        p->next->prior=s;
        s->prior=p;
        p->next=s;
    }
    s->next=NULL;
}

// void DeleteNextDnode(DNode *p)//删除p节点的后继节点
// {
//     DNode *q=p->next;
//     p->next=q->next;
//     if(q->next!=NULL)
//     q->next->prior=p;
//     free(q);

// }
// void DestoryList(DLinklist *L)//删除双链表
// {
//     while ((*L)->next != NULL)
//     DeleteNextDnode(&L);
//     free(&L);
//     (*L)=NULL;
// }

void ShowList(DLinklist *L)					//打印整个链表
{
	DLinklist p;
	p = (*L)->next;
	if (p == NULL)
	{
		printf("这是一个空链表！\n");
	}
	printf("单链表");
	while (p)
	{
		printf(" -> %d", p->data);
		p = p->next;
	}
	printf("\n");
}

int main(void)
{
    DLinklist L;
    InsertNextDNode(&L);
    ShowList(&L);

    return 0;
}
