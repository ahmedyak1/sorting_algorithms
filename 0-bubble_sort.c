#include "sort.h"
/**
 * bubble_sort - sort array elem  min to max 
 * @array: array
 * @size: size array 
 */
void
bubble_sort (int *array, size_t size)
{

  size_t a = 0;
  size_t k = 0;
  size_t m = 0;

  if (size < 2)
    return;
  for (a = 0; a < size; a++)
    for (k = 0; k < size; k++)
      {
	if (array[k] > array[k + 1] && array[k + 1])
	  {

	    m = array[k];

	    array[k] = array[k + 1];
	    array[k + 1] = m;
	    print_array (array, size);
	  }
      }
}
