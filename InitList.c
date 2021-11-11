#include <stdlib.h>
#include<stdio.h>
#define InitSize 10//默认的最大长度

typedef struct L
{
    int *data;//指示动态分配数组的指针
    int MaxSize;//顺序表的最大容量
    int Length;//
}SeqList;

void InitList(SeqList *L){
    L->data=(int *)malloc(InitSize*sizeof(int));//用malloc函数申请一片连续的存储空间
    L->Length=0;
    L->MaxSize=InitSize;
}

void IncreaseSize(SeqList *L,int len){
    int *p=L->data;
    L->data=(int *)malloc((L->MaxSize+len)*sizeof(int));
    for(int i=0;i<L->Length;i++){
        L->data[i]=p[i];//将数据复制到新区域
    }
    L->MaxSize=L->MaxSize+len;//顺序表最大长度增加len
    free(p);//释放原来的内存空间
}

int main()
{
    int len;
    printf("输入要增加的长度:");
    scanf("%d",&len);
    SeqList L;//声明一个顺序表
    InitList(&L);//初始化顺序表
    for(int i=0;i<InitSize;i++)
    {
        L.data[i]=i;
        printf("%d\n",L.data[i]);
    }
    //插入一些数据
    puts("\n");
    IncreaseSize(&L,len);
    for(int i=0;i<InitSize+len;i++)
    {
        L.data[i]=i;
        printf("%d\n",L.data[i]);
    }
    return 0;
}