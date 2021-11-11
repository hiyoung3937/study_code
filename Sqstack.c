//数组栈的实现
#include<stdio.h>
 
#define MaxSize 50
 
typedef struct Stack_Array{
	int data[MaxSize];
	int top;
}Sqstack,*pSqstack;
 
void Initstack();					//初始化
int Isempty();						//判断栈空
int Push();						//入栈
int Pop();						//出栈
int Gettop();						//get栈顶元素
 
int main(void)						//测试
{
	int val;
	Sqstack s1;
	pSqstack ps1=&s1;
	Initstack(&s1);					//初始化
 
	if(Isempty(&s1))				//判断栈空
		printf("栈为空！\n");
	else printf("栈不为空！\n");
 
	printf("输入压栈元素的值");		//压栈1
	scanf("%d",&val);
	Push (ps1,&val);
 
	printf("输入压栈元素的值");		//压栈2
	scanf("%d",&val);
	Push (ps1,&val);
 
	if(Isempty(ps1))				//判断栈空
		printf("栈为空！\n");
	else printf("栈不为空！\n");
 
	if(Gettop(ps1,&val))			//GET栈顶元素
		printf("栈顶值为%d\n",val);
	else printf("栈顶元素查找失败！\n");
 
	if(Pop(ps1,&val))				//出栈
		printf("出栈成功，出栈元素为%d\n",val);
	else printf("出栈失败！\n");
 
	return 0;
}
//初始化
void Initstack (pSqstack ps1)
{
	ps1->top=-1;
	return;
}
//判断栈空
int Isempty(pSqstack ps1)
{
	if(ps1->top==-1)
		return 1;
	else return 0;
}
//若栈不满，则进行压栈
int Push(pSqstack ps1,int *val)//*val:接受一个地址(int *(&val))
{
	if(ps1->top==MaxSize)
		return 0;
	else
	{
		ps1->top++;
		ps1->data[ps1->top]=*val;//这里传递的是值，这里的*val是*(&val),&val是由主调函数输入
		return 1;
	}
}
//若栈不空，则进行出栈，用val返回栈顶元素
int	Pop(pSqstack ps1,int *val)
{
	if(Isempty(ps1))
		return 0;
	else
	{
		*val=ps1->data[ps1->top--];
		return 1;
	}
}
//get栈顶元素，用val返回栈顶元素
int Gettop(pSqstack ps1,int *val)
{
	if(Isempty(ps1))
		return 0;
	else 
	{
		*val=ps1->data[ps1->top];
		return 1;
	}
}