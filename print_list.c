#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints integer list 
 *
 * @list: The list out print
 */
void
print_list (const listint_t * list)
{
  int k;

  k = 0;
  while (list)
    {
      if (k > 0)
	printf (", ");

      printf ("%d", list->n);
      ++k;
      list = list->next;
    }
  printf ("\n");
}
