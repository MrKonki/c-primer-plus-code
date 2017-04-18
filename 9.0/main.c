#include <stdio.h>

int c=0;
void move(int disk,char start,char end)
{
    printf("step:%d,move %c to %c\n",++c,start,end);
    return;
}
void hanoi(int n,char A,int B,char C)
{
    if(n==1)
        move(1,A,C);//disk=1时，直接将disk从A移动到C
    else
    {
        hanoi(n-1,A,C,B);//第一步，将n-1个盘从A移动到B，其中C为辅助盘
        move(n,A,C);//第二步，将n号盘直接从A移动到C
        hanoi(n-1,B,A,C);//第三步，将B盘上的n-1个盘递归调用
    }
    return;
}
int main()
{
    int disk_num;
    printf("input diak_num:\n");
    scanf("%d",&disk_num);
    hanoi(disk_num,'A','B','C');
    return 0;
}
/*
long fact(int n);
long rfact(int n);
int main(void)
{
    int num;

    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative numbers, please.\n");
        else if (num > 12)
            printf("Keep input under 13.\n");
        else
        {
            printf("loop: %d factorial = %ld\n",
                   num, fact(num));
            printf("recursion: %d factorial = %ld\n",
                   num, rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

long fact(int n)     // loop-based function
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;

    return ans;
}

long rfact(int n)    // recursive version
{
    long ans;

    if (n > 0)
        ans= n * rfact(n-1);
    else
        ans = 1;

    return ans;
}



void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n); // 1
    if (n < 4)
        up_and_down(n+1);
    printf("LEVEL %d: n location %p\n", n, &n); // 2

}

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
     putchar(r == 0 ? '0' : '1');

    return;
}
*/
