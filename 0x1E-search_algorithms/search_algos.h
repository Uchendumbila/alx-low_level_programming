#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: The Integer
 * @index: The Index of the node in the list
 * @next: The Pointer to the next node
 *
 * Description: The singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: The Integer
 * @index: The Index of the node in the list
 * @next: The Pointer to the next node
 * @express: The Pointer to the next node in the express lane
 *
 * Description: THe singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int advanced_binary(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
