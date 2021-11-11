//用头插法建立单链表

#include<stdlib.h>
#include<stdio.h>

typedef struct LNode    
{
    int data;
    struct LNode *next;
    
}LNode,*LinkList;

LinkList List_Handinsert(LinkList *L)
{
    LNode *s;
    int x;
    (*L)=(LinkList)malloc(sizeof(LNode));
    (*L)->next=NULL;
    
    while (scanf("%d",&x) && x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        s->next=(*L)->next; 
        (*L)->next=s;
    }
    
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
    List_Handinsert(&L);
    ShowList(&L);

    return 0;
}