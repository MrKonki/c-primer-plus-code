#include <stdio.h>
#include <stdlib.h>
#include <string.h>












/*
//6.16 6
int main()
{
    int i;
    scanf("%d",&i);
    for(i=i;i>0;i--)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
}
*/

/*
//6.16 5
int main()
{
    int i,j,k;
    int num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<2*i+1;k++)
        {
            if(k==0||k==i*2)
            {
                printf("%c",'A');
            }
            else
            {
                printf("%c",'A'+k);
            }

        }
        printf("\n");
    }
}
*/

/*
//6.16 4
int main()
{
    char a='A';
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a++);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
// 6.16 3
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",'F'-j);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//6.16 2
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }



    return 0;
}
*/

/*
//6.16 1
int main()
{
    char ch[26];
    int i;
    for(i=0;i<26;i++)
    {
        scanf("%c",&ch[i]);
    }
    for(i=0;i<26;i++)
    {
        printf("%c",ch[i]);
    }

    return 0;
}
*/
