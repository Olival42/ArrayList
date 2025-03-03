#ifndef ArrayList_H
#define ArrayList_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    int *data;
    int count;
    int size;
} ArrayList;

/**
 * @brief Create an arraylist.
 * 
 * @return Pointer to the newly created ArrayList.
 */
ArrayList *create();

/**
 * @brief Insert at the beginning of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @param data The value to insert.
 */
void insertFirst(ArrayList *arrayList, int data);

/**
 * @brief Insert at the specified index of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @param data The value to insert.
 * @param index The position to insert the value at.
 */
void insertAt(ArrayList *arrayList, int data, int index);

/**
 * @brief Insert at the end of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @param data The value to insert.
 */
void insertLast(ArrayList *arrayList, int data);

/**
 * @brief Print all the elements in the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 */
void getAllElements(const ArrayList *arrayList);

/**
 * @brief Return the object at the specified index in the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @param index The position of the element to retrieve.
 * @return The value at the specified index.
 */
int get(const ArrayList *arrayList, int index);

/**
 * @brief Return the object at the beginning of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @return The first value in the ArrayList.
 */
int getFirst(const ArrayList *arrayList);

/**
 * @brief Return the object at the end of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @return The last value in the ArrayList.
 */
int getLast(const ArrayList *arrayList);

/**
 * @brief Delete the object at the end of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 */
void deleteLast(ArrayList *arrayList);

/**
 * @brief Delete the object at the beginning of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 */
void deleteFirst(ArrayList *arrayList);

/**
 * @brief Delete the object at the specified index of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @param index The position of the element to delete.
 */
void deleteAt(ArrayList *arrayList, int index);

/**
 * @brief Return the size of the arraylist.
 * 
 * @param arrayList Pointer to the ArrayList.
 * @return The number of elements in the ArrayList.
 */
int size(const ArrayList *arrayList);

#endif