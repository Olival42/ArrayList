#include "ArrayList.h"

int main()
{
    ArrayList *arrayList = create();

    printf("%d\n", isEmpty(arrayList));

    insertLast(arrayList, 10);
    insertLast(arrayList, 20);
    insertLast(arrayList, 30);
    insertFirst(arrayList, 5);
    insertAt(arrayList, 25, 3);

    getAllElements(arrayList);

    printf("%d\n", contains(arrayList, 20));
    printf("%d\n", indexOf(arrayList, 20));

    deleteFirst(arrayList);
    deleteAt(arrayList, 1);
    deleteLast(arrayList);

    getAllElements(arrayList);

    insertLast(arrayList, 50);
    insertFirst(arrayList, 35);
    insertAt(arrayList, 2, 4);

    printf("%d\n", size(arrayList));

    printf("%d\n", get(arrayList, 2));

    getAllElements(arrayList);
    sort(arrayList);
    getAllElements(arrayList);

    reverse(arrayList);
    getAllElements(arrayList);

    free(arrayList->data);
    free(arrayList);

    return 0; //
}