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
    printf("������������");
    scanf("%d",&day);
    if(day<=0)
    {
        printf("�������ϵͳ�˳���");
        break;
    }
    weeks=day/7;
    num1=day%7;
    printf("%d����%d��%d��\n",day,weeks,num1);
    }
}




/*
int main()
{
    int num;
    printf("������һ������:");
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
    printf("�������������");
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
            printf("%d���ӵ���%dСʱ%d����\n",min,num,num1);
        }
        else
        {
            printf("0Сʱ%d����\n",min);
        }
        printf("�������������");
    }
}
*/
