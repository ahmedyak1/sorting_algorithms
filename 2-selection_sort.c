#include "sort.h"
/**
 * selection_sort - sorts  array of int in asc
 * 
 * 
 * @size: size of the array
 * @array: list with count
 */
void
selection_sort (int *array, size_t size)
{
  size_t k;
  size_t ind;
  int t = 0;
  int s = 0;
  int f = 0;

  if (array == NULL)
    return;
  for (k = 0; k < size; k++)
    {
      t = k;
      f = 0;
      for (ind = k + 1; ind < size; ind++)
	{
	  if (array[t] > array[ind])
	    {
	      t = ind;
	      f += 1;
	    }
	}
      s = array[k];
      array[k] = array[t];
      array[t] = s;
      if (f != 0)
	print_array (array, size);
    }
}
