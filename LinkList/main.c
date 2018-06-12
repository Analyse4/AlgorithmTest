#include"link_list.h"
#include<time.h>

//时间复杂度: O(n)
void AddSomeNums(List list, int num)
{
    int i = 0;
    for (i; i < num; i++)
    {
        Insert(i, list, list);
    }
}

void Test1(List list)
{
    clock_t time_begin = clock();
    clock_t time_end = 0;
    double temp_time = 0;

    AddSomeNums(list, 10000);
    PrintList(list);
    time_end = clock();
    printf("AddSomeNums: [time:%fs]\n", ((double)(time_end - time_begin))/CLOCKS_PER_SEC);

    time_begin = clock();
    BadDeleteList(list);
    PrintList(list);
    time_end = clock();
    /*temp_time = ((double)(time_end - time_begin))/CLOCKS_PER_SEC;*/
    printf("BadDeleteList: [time:%fs]\n", ((double)(time_end - time_begin))/CLOCKS_PER_SEC);

}

void Test2(List list)
{
    clock_t time_begin = clock();
    clock_t time_end = 0;
    double temp_time = 0;

    AddSomeNums(list, 10000);
    PrintList(list);
    time_end = clock();
    printf("AddSomeNums: [time:%fs]\n", ((double)(time_end - time_begin))/CLOCKS_PER_SEC);

    time_begin = clock();
    DeleteList(list);
    PrintList(list);
    time_end = clock();
    /*temp_time = ((double)(time_end - time_begin))/CLOCKS_PER_SEC;*/
    printf("DeleteList: [time:%fs]\n", ((double)(time_end - time_begin))/CLOCKS_PER_SEC);

}


int main()
{
    List list = InitList();
    if (IsEmpty(list))
    {
        printf("The list is empty!\n");
    }

    /*Test1(list);*/
    Test2(list);

}
