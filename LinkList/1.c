//弃用

#include<time.h>
#include"link_list.h"

//时间复杂度: O(n)
void AddSomeNums(List list, int num)
{
    int i = 0;

    for (i = 0; i < num; i++)
    {
        Insert(i, list, list);
    }
}

//测试释放链表
void Test1(List list)
{
    clock_t time_begin = clock();
    clock_t time_end = 0;
    double temp_time = 0;

    AddSomeNums(list, 1000);
    time_end = clock();
    printf("test:%f\n", (double)time_end);
    printf("AddSomeNums: [time:%fs]\n", ((double)(time_end - time_begin)/CLOCKS_PER_SEC));

    PrintList(list);

    time_begin = clock();
    DeleteList(list);
    time_end = clock();
    printf("test2:%f\n", (double)time_end);
    printf("DeleteList: [time:%fs]\n", ((double)((time_end - time_begin)/CLOCKS_PER_SEC)));

    PrintList(list);
}


int main()
{
    Position temp = NULL;
    List list = InitList();
    if (IsEmpty(list))
    {
        printf("list is empty\n");
    }

    Test1(list);
    /*
     *Insert(2, list, list);
     *Insert(4, list, list);
     *PrintList(list);
     *temp = Find(2, list);
     *printf("The find element is %d\n", temp->data);
     *PrintList(list);
     *Delete(4, list);
     *PrintList(list);
     */
    return 0;
}
