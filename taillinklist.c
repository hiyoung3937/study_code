//尾插法单链表
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

LinkList List_Taillnsert(LinkList *L)
{
    int x;
    (*L)=(LinkList)malloc(sizeof(LNode));
    LNode*s,*r=(*L);
    scanf("%d",&x);
    while (x!=9999)
    {
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return (*L);
    
}

void ShowList(LinkList *L)					//打印整个链表
{
	LinkList p;
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
    LinkList L;
    List_Taillnsert(&L);
    ShowList(&L);

    return 0;
}