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
 * @brief Create a new arraylist.
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

/**
 * @brief Check if the arraylist is empty.
 *
 * @param arrayList Pointer to the ArrayList.
 * @return 1 if the ArrayList is empty, 0 otherwise.
 */
int isEmpty(const ArrayList *arrayList);

/**
 * @brief Check if the arraylist contains a specific element.
 *
 * @param arrayList Pointer to the ArrayList.
 * @param data The value to search for.
 * @return 1 if the element is found, 0 otherwise.
 */
int contains(const ArrayList *arrayList, int data);

/**
 * @brief Get the index of the first occurrence of a specific element in the arraylist.
 *
 * @param arrayList Pointer to the ArrayList.
 * @param data The value to search for.
 * @return The index of the element if found, -1 otherwise.
 */
int indexOf(const ArrayList *arrayList, int data);

/**
 * @brief Removes all elements from the ArrayList and frees its data memory.
 *
 * @param arrayList Pointer to the ArrayList to be cleared.
 */
void clear(ArrayList *arrayList);

/**
 * @brief Ensures that the ArrayList has at least the specified minimum capacity.
 *        If the current capacity is less than minCapacity, the array is resized.
 *
 * @param arrayList Pointer to the ArrayList to check or resize.
 * @param minCapacity The minimum required capacity.
 */
void ensureCapacity(ArrayList *arrayList, int minCapacity);

/**
 * @brief Trims the capacity of the ArrayList to match the current number of elements (count).
 *        This reduces memory usage by freeing unused space.
 *
 * @param arrayList Pointer to the ArrayList to trim.
 */
void trimToSize(ArrayList *arrayList);

/**
 * @brief Reverses the order of the elements in the ArrayList.
 *
 * @param arrayList Pointer to the ArrayList to be reversed.
 */
void reverse(ArrayList *arrayList);

/**
 * @brief Sorts the elements of the ArrayList in ascending order.
 *
 * @param arrayList Pointer to the ArrayList to be sorted.
 */
void sort(ArrayList *arrayList);

/**
 * @brief Creates an exact copy of the given ArrayList, including its elements.
 *
 * @param arrayList Pointer to the ArrayList to be cloned.
 * @return Pointer to the new cloned ArrayList, or NULL if memory allocation fails.
 */
ArrayList *clone(const ArrayList *arrayList);

#endif