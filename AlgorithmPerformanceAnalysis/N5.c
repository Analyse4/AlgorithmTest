#include<stdio.h>
#include<time.h>

int AddN5 (int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i*i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                sum++;
            }
        }
    }
    return sum;
}

int main()
{
    clock_t start_time = clock();
    clock_t end_time = 0;
    double total_time = 0;
    printf("sum is %d\n", AddN5(100));
    end_time = clock();
    total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("total time: %f\n", total_time);
    // printf("totoal time: %f\n",(end_time - start_time)/CLOCKS_PER_SEC);
    return 0;
}
