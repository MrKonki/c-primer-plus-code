#include <stdio.h>
#include <stdlib.h>
#define TIME 60

int main()
{
    int day;
    int weeks;
    int num1;
    while(1)
    {
    printf("请输入天数：");
    scanf("%d",&day);
    if(day<=0)
    {
        printf("输入错误系统退出！");
        break;
    }
    weeks=day/7;
    num1=day%7;
    printf("%d天是%d周%d天\n",day,weeks,num1);
    }
}




/*
int main()
{
    int num;
    printf("请输入一个整数:");
    scanf("%d",&num);
    int i=num;
    while(i<=num+10)
    {
        printf("%d\n",i);
        i++;
    }
}
*/

/*
int main()
{
    int min;
    int num;
    int num1;
    printf("请输入分钟数：");
    while(1)
    {
        scanf("%d",&min);
        if(min<=0)
        {
            break;
        }else if(min>TIME)
        {
            num=min/TIME;
            num1=min%TIME;
            printf("%d分钟等于%d小时%d分钟\n",min,num,num1);
        }
        else
        {
            printf("0小时%d分钟\n",min);
        }
        printf("请输入分钟数：");
    }
}
*/
