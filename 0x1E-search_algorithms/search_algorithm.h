#ifndef _SORTING_ALGORITHM_H_
#define _SORTING_ALGORITHM_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @index: Index of the node
 */

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct listskip_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @index: Index of the node
 * @next: Pointer to the next element of the list
 * @exp: Pointer to the next node in the exp lane
 */

typedef struct listskip_s
{
    int n;
    size_t index;
    struct listskip_s *next;
    struct listskip_s *exp;
} listskip_t;

int linear_search(int *array, size_t size, int value);

#endif