  
#include <stdio.h>//报告字母在字母表中的位置例如c和C都是3，其他字符返回-1
int main(void)
{
    char ch;
    while ((scanf("%c", &ch)) == 1 && ch != '&')
    {
        if (ch == '\n')
            continue;
        printf("%d\n", interchar(ch));
    }
    return 0;
}
int interchar(char ch);
int interchar(char ch)
{
    if (ch >= 65 && ch <= 90)
        return (ch - 'A' + 1);
    else if (ch >= 97 && ch <= 122)
        return (ch - 'a' + 1);
    else return (-1);
}
