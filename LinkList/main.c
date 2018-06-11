#include"link_list.h"

int main()
{
    List list = InitList();
    Insert(2, list, list);
    Insert(4, list, list);
    PrintList(list);
    return 0;
}
