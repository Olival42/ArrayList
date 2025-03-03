#include "ArrayList.h"

int main()
{
    ArrayList *arrayList = create();

    insertLast(arrayList, 10);
    insertLast(arrayList, 20);
    insertLast(arrayList, 30);
    inserFirst(arrayList, 5);
    insertAt(arrayList, 25, 3);

    getAllElements(*arrayList);

    deleteFirst(arrayList);
    deleteAt(arrayList, 1);
    deleteLast(arrayList);

    getAllElements(*arrayList);

    insertLast(arrayList, 50);
    inserFirst(arrayList, 35);
    insertAt(arrayList, 2, 4);

    printf("%d\n", size(*arrayList));

    getAllElements(*arrayList);

    return 0; //
}