#include "List_struct.h"
#include "locale.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    List_struct<int> list;

    for (size_t i = 0; i < 20; i++)
    {
        list.addElement(rand() % 9 + 1);
    }

    cout << "Список (после удаления одного элемента): ";
    list.printList();

    return 0;
}