#include"link_list.h"

int main()
{
    Position temp = NULL;
    List list = InitList();
    if (IsEmpty(list))
    {
        printf("list is empty\n");
    }
    Insert(2, list, list);
    Insert(4, list, list);
    PrintList(list);
    temp = Find(2, list);
    printf("The find element is %d\n", temp->data);
    PrintList(list);
    Delete(4, list);
    PrintList(list);
    return 0;
}
