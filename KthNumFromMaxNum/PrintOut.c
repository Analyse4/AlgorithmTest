#include<stdio.h>

int PrintDigit(int num)
{
    if(num/10 != 0)
    {
        return 0;
    }
    printf("%d", num);
}

void PrintOut(int num)
{
    if (num >= 10)
        PrintOut(num/10);
    PrintDigit(num%10);
}


int main()
{
    PrintOut(12345);
    printf("\n");
    return 0;
}
