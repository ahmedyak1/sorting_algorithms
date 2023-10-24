#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints integert array
 *
 * @array: The array out print
 * @size: count of elem in array
 */
void
print_array (const int *array, size_t size)
{
  size_t k;

  k = 0;

  while (array && k < size)
    {
      if (k > 0)
	printf (", ");
      printf ("%d", array[k]);
      ++k;
    }
  printf ("\n");
}

