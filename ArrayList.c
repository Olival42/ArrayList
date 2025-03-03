/*
 * @Name: ArrayList C
 * @Author: Olival
 * @Date: 2025/03/02
 * @Repository: https://github.com/Olival42/ArrayList.git
 */

#include "ArrayList.h"

ArrayList *create()
{
    ArrayList *arrayList = malloc(sizeof(ArrayList));
    if (arrayList == NULL)
    {
        printf("Failed to allocate memory\n");
        getchar();
        exit(1);
    }

    arrayList->count = 0;
    arrayList->size = 10;
    arrayList->data = malloc(sizeof(int) * arrayList->size);

    return arrayList;
}

void insertFirst(ArrayList *arrayList, int data)
{
    if (arrayList->count == arrayList->size)
    {
        int newSize = arrayList->size * 2;
        arrayList->data = realloc(arrayList->data, sizeof(int) * newSize);

        if (arrayList->data == NULL)
        {
            printf("Failed to allocate memory\n");
            exit(1);
        }

        arrayList->size = newSize;
    }

    for (int i = arrayList->count - 1; i >= 0; i--)
    {
        arrayList->data[i + 1] = arrayList->data[i];
    }

    arrayList->data[0] = data;
    arrayList->count += 1;
}

void insertAt(ArrayList *arrayList, int data, int index)
{
    if (index < 0 || index > arrayList->count)
    {
        printf("Invalid position\n");
        getchar();
        return;
    }

    if (arrayList->count == arrayList->size)
    {
        int newSize = arrayList->size * 2;
        arrayList->data = realloc(arrayList->data, sizeof(int) * newSize);

        if (arrayList->data == NULL)
        {
            printf("Failed to allocate memory\n");
            exit(1);
        }

        arrayList->size = newSize;
    }

    for (int i = arrayList->count - 1; i >= index; i--)
    {
        arrayList->data[i + 1] = arrayList->data[i];
    }

    arrayList->data[index] = data;
    arrayList->count += 1;
}

void insertLast(ArrayList *arrayList, int data)
{
    if (arrayList->count == arrayList->size)
    {
        int newSize = arrayList->size * 2;
        arrayList->data = realloc(arrayList->data, sizeof(int) * newSize);

        if (arrayList->data == NULL)
        {
            printf("Failed to allocate memory\n");
            exit(1);
        }

        arrayList->size = newSize;
    }

    arrayList->data[arrayList->count] = data;
    arrayList->count += 1;
}

void getAllElements(const ArrayList *arrayList)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    for (int i = 0; i < arrayList->count; i++)
    {
        printf("%d ", arrayList->data[i]);
    }
    getchar();
}

int get(const ArrayList *arrayList, int index)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    if (index < 0 || index > arrayList->count == 0)
    {
        printf("Invalid position\n");
        getchar();
        exit(1);
    }

    return arrayList->data[index];
}

int getFirst(const ArrayList *arrayList)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    return arrayList->data[0];
}

int getLast(const ArrayList *arrayList)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    return arrayList->data[arrayList->count - 1];
}

void deleteLast(ArrayList *arrayList)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    arrayList->count--;

    printf("Element removed successfully\n");
    getchar();
}

void deleteAt(ArrayList *arrayList, int index)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    if (index < 0 || index > arrayList->count)
    {
        printf("Invalid position\n");
        getchar();
        exit(1);
    }

    for (int i = index; i < arrayList->count - 1; i++)
    {
        arrayList->data[i] = arrayList->data[i + 1];
    }

    arrayList->count--;

    printf("Element removed successfully\n");
    getchar();
}

void deleteFirst(ArrayList *arrayList)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        printf("ArrayList is empty\n");
        getchar();
        exit(1);
    }

    for (int i = 0; i < arrayList->count; i++)
    {
        arrayList->data[i] = arrayList->data[i + 1];
    }

    arrayList->count--;

    printf("Element removed successfully\n");
    getchar();
}

int size(const ArrayList *arrayList)
{
    if (isEmpty(arrayList) == 1)
        return -1;

    return arrayList->count;
}

int isEmpty(const ArrayList *arrayList)
{
    if (arrayList->data == NULL || arrayList->count == 0)
    {
        return 1;
    }

    return 0;
}

int contains(const ArrayList *arrayList, int data)
{
    if (isEmpty(arrayList) == 1)
        return -1;

    for (int i = 0; i < arrayList->count; i++)
    {
        if (arrayList->data[i] == data)
        {
            return 1;
        }
    }

    return 0;
}

int indexOf(const ArrayList *arrayList, int data)
{
    if (isEmpty(arrayList) == 1)
        return -2;

    for (int i = 0; i < arrayList->count; i++)
    {
        if (arrayList->data[i] == data)
        {
            return i;
        }
    }

    return -1;
}

void clear(ArrayList *arrayList)
{
    free(arrayList->data);
    arrayList->data = malloc(sizeof(int) * arrayList->size);
    arrayList->count = 0;
}

void ensureCapacity(ArrayList *arrayList, int minCapacity)
{
    if (minCapacity > arrayList->size)
    {
        int *newData = realloc(arrayList->data, sizeof(int) * minCapacity);
        if (newData != NULL)
        {
            arrayList->data = newData;
            arrayList->size = minCapacity;
        }
        else
        {
            printf("Failed to allocate memory\n");
            getchar();
            exit(1);
        }
    }
}

void trimToSize(ArrayList *arrayList)
{
    int *newData = realloc(arrayList->data, sizeof(int) * arrayList->count);
    if (newData != NULL)
    {
        arrayList->data = newData;
    }
    else
    {
        printf("Failed to allocate memory\n");
        getchar();
        exit(1);
    }
}

ArrayList *clone(const ArrayList *arrayList)
{
    ArrayList *newArrayList = malloc(sizeof(ArrayList));
    if (newArrayList == NULL)
    {
        printf("Failed to allocate memory\n");
        getchar();
        return NULL;
    }

    newArrayList->data = malloc(sizeof(int) * arrayList->size);
    if (newArrayList->data == NULL)
    {
        printf("Failed to allocate memory\n");
        free(newArrayList);
        getchar();
        return NULL;
    }

    for (int i = 0; i < arrayList->count; i++)
    {
        newArrayList->data[i] = arrayList->data[i];
    }

    newArrayList->count = arrayList->count;
    newArrayList->size = arrayList->size;

    return newArrayList;
}