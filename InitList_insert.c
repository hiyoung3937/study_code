//自己写的可以运行的顺序表
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define InitSize 10//默认的最大长度

typedef struct L
{
    int *data;//指示动态分配数组的指针
    int MaxSize;//顺序表的最大容量
    int length;
}SeqList;

void InitList(SeqList *L)//初始化顺序表
{
    L->data=(int *)malloc(InitSize*sizeof(int));//用malloc函数申请一片连续的存储空间
    L->length=0;
    L->MaxSize=InitSize;
}

bool ListInsert(SeqList *L,int i,int e)//在列表中插入
{
   /* if(i<1||i>L->length+1)
    return false;
    if(L->length>=L->MaxSize)
    return false; */

    for(int j=L->length;j>=i;j--)
    L->data[j]=L->data[j-1];
    L->data[i-1]=e;//数组从0开始，在i插入，在i-1处储存
    L->length++;
    
    return true;
}

int main(void)
{
    
    SeqList L;
    InitList(&L);
    for(int i=0;i<L.MaxSize;i++)
    {
        L.data[i]=i;
    }
    ListInsert(&L,10,100);
    for(int j=0;j<L.MaxSize;j++)
    {
        printf("%d\n",L.data[j]);
    }

    return 0;
}

