/*
 *该递归过程是有基准情形的，但在递归过程中并没有无限逼近基准情形，具体表现为用bad(1)定义bad(1)
 */



#include<stdio.h>

int bad(int N)
{
    if (N == 0)
    {
        return 0;
    }
    else
    {
        printf("bad(%d) + %d - 1\n", N/3 + 1, N);
        return bad(N/3 + 1) + N - 1;
    }
}

int main()
{
    bad(4);
    return 0;
}
