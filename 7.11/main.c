#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int
}











/*
//7.12 6
int main()
{
    int i=0;
    char ch;
    while((ch=getchar())!='#')
    {
        if(ch=='e')
        {
            i++;
        }
        if(ch=='i')
        {
            i++;
        }
    }
    printf("%d",i);
}
*/

/*
//7.12 4
int main()
{
    int i=0;
    char ch;
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
        case '.':
            putchar(ch-13);
            printf("\n");
            i++;
            break;
        case '!':
            putchar(ch);
            putchar(ch);
            printf("\n");
            i++;
            break;
        }
    }
    printf("%d",i);
}
*/

/*
//7.12 4
int main()
{
    char ch;
    int i=0;
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            ch-=13; //把'.'替换成!
            putchar(ch); //打印！
            printf("\n");//打印换行
            fflush(stdin);//清空缓存区
            i++;//计数器增加替换次数
        }
        else if(ch=='!')
        {
            putchar(ch);//如果输入的字符是'!'，则打印2次叹号
            putchar(ch);
            printf("\n");
            fflush(stdin);
            i++;//计数器增加替换次数
        }
    }
    printf("%d",i);//结束录入打印计数器
}
*/

/*
//7.12 3
int main()
{
    int num;
    int i=0;
    int j=0;
    double sum1;
    double sum2;
    while(scanf("%d",&num)==1)
    {
        if(num==0)
        {
            break;
        }
        if(num%2==0)
        {
            sum1+=num;
            i++;
        }
        else
        {
            sum2+=num;
            j++;
        }
    }
    printf("偶数的平均数为：%.2lf\t奇数的平均和为：%.2lf\n",sum1/i,sum2/j);
}
*/

/*
//7.12 2
int main()
{
    int i;
    char ch;
    while((ch=getchar())!='#')
    {
        if(ch=='\n')
        {
            continue;
        }
        printf("%c:%d ",ch,ch);
        i++;
        if ((0 == (i % 8)) && (i > 8))
        printf("\n");
    }
}
*/

/*
//7.12 1
int main()
{
    int i=0;
    int j=0;
    int k=0;
    char ch;
    while((ch=getchar())!='#')
    {
        if(ch==' ')
        {
            i++;
        }
        else if(ch=='\n')
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    printf("%d个空格，%d个回车，%d个其他\n",i,j,k);
}
*/

/*
//7.7
int main()
{
    char ch;
    printf("Give me aletter of the alphabet, and I will gove ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while((ch=getchar())!='#')
    {
        if('\n'==ch)
        {
            continue;
        }
        if(islower(ch))
        switch(ch)
        {
        case 'a':
            printf("argali,a wild sheep of Asia\n");
            break;
        case 'b':
            printf("babirusa, a wild pig of Malay\n");
            break;
        case 'c':
            printf("coati, racoonlike mammal\n");
            break;
        case 'd':
            printf("desman, aquatic, molelike critter\n");
            break;
        case 'e':
            printf("echidna,the spiny anteater\n");
            break;
        case 'f':
            printf("fisher, brownish marten\n");
            break;
        default:
            printf("That's a stumper.\n");
        }
        else
        {
            printf("I recoqnize only lowercase letters.\n");
        }
        while(getchar()!='\n')//用于清空缓存区!
        {
            continue;
        }
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;
}
*/

/*
//7.10
int main()
{
    float length,width;
    printf("Enter the length of the rectangle:\n");
    while((scanf("%f",&length)==1))
    {
        printf("length=%0.2f:\n",length);
        printf("Enter its width:\n");
        if((scanf("%f",&width))!=1)
        {
            break;
        }
        printf("Width=%0.2f:\n",width);
        printf("Area=%0.2f:\n",length*width);
        printf("Enter the length of the rectangle:\n");
    }
}
*/

/*
//7.9
int main()
{
   const float MIN=0.0f;
   const float MAX=100.0f;
   float score;
   float total=0.0f;
   int n=0;
   float min=MAX;
   float max=MIN;
   printf("enter the first score (q to quit): ");
   while(scanf("%f",&score)==1)
   {
        if(score<MIN||score>MAX)
        {
            printf("%0.1f is an invalid value. Try again:",score);
            continue;
        }
        printf("Accepting %0.1f:\n",score);
        min=(score<min)?score:min;
        max=(score>max)?score:max;
        total+=score;
        n++;
        printf("enter next score (q to quit): ");
   }
   if(n>0)
   {
    printf("Average of %d score is %0.1f.\n",n,total/n);
    printf("Low=%0.1f,high=%0.1f\n",min,max);
   }
   else
   {
    printf("No valid score were entered.\n");
   }
}
*/
