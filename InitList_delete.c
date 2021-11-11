#include<stdbool.h>
#include<stdio.h>
#define SIZE 10//默认的最大长度

typedef struct L
{
    int data[SIZE];
    int length;
}SeqList;


bool ListDelete(SeqList *L,int i,int e)
{
    if(i<1||i>L->length)
    return false;

    e=L->data[i-1];
    for(int j=i;j<L->length;j++)
    L->data[j-1]=L->data[j];
    L->length--;
    return true;

}

int main(void)
{
   
        
    SeqList L;
    struct L=
    {
        {1,2,3,4,5,6,7,8,9,0},
        10
    };
    InitSize(&L);
    ListDelete(&L,3,*e);
    printf("删除了第三位%d",e);
}