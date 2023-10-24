#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *
 * 
 * @list: pointe to sort list linked 
 */
void
insertion_sort_list (listint_t ** list)
{
  listint_t *cur;
  listint_t *next;
  listint_t *prev;


  if (list == NULL || *list == NULL || (*list)->next == NULL)
    return;

  cur = (*list)->next;
  while (cur)
    {
      next = cur->next;

      while (cur->prev && (cur->n < cur->prev->n))
	{

	  prev = cur->prev;

	  cur->prev = prev->prev;
	  if (cur->prev)
	    cur->prev->next = cur;
	  else
	    *list = cur;

	  prev->next = cur->next;
	  if (prev->next)
	    prev->next->prev = prev;

	  cur->next = prev;
	  prev->prev = cur;


	  print_list (*list);
	}
      cur = next;
    }
}

