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
 */
ArrayList *create();

/**
 * @brief Insert at the beginning of the arraylist
 */
void inserFirst(ArrayList *arrayList, int data);

/**
 * @brief Insert at the specified index of the arraylist
 */
void insertAt(ArrayList *arrayList, int data, int index);

/**
 * @brief Insert at the end of the arraylist
 */
void insertLast(ArrayList *arrayList, int data);

/**
 * @brief Return all the objects in the arraylist 
 */
void getAllElements(ArrayList arrayList);

/**
 * @brief Return the object at the specified index in the arraylist 
 */
int get(ArrayList arrayLists, int index);

/**
 * @brief Return the object at the beginning in the arraylist 
 */ 
int getFirst(ArrayList arrayList);

/** 
 * @brief Return the object at the end in the arraylist
 */ 
int getLast(ArrayList arrayList);

/**
 * @brief Delete the object at the end of the arraylist 
 */ 
void deleteLast(ArrayList *arrayList);

/**
 * @brief Delete the object at the beginning of the arraylist 
 */ 
void deleteFirst(ArrayList *arrayList);

/** 
 * @brief Delete the object at the specified index of the arraylist
 */ 
void deleteAt(ArrayList *arrayList, int index);

/** 
 * @brief Return size of the arraylist
 */ 
int size(ArrayList arrayList);

#endif