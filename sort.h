#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointe to the prev elem  list
 * @next: Pointe to the next elem  list
 */
typedef struct listint_s
{
  const int n;
  
  struct listint_s *prev;
  
  struct listint_s *next;
  
} listint_t;

void bubble_sort (int *array, size_t size);
void insertion_sort_list (listint_t ** list);
void selection_sort (int *array, size_t size);
void quick_sort (int *array, size_t size);
void print_array (const int *array, size_t size);
void print_list (const listint_t * list);



#endif

