#include <stdio.h>

int main()
{
  long array[100], *maximum, size, c;

  printf("Enter the number of elements in array\n");
  scanf("%ld", &size);

  printf("Enter %ld integers\n", size);

  for ( c = 0 ; c < size ; c++ )
    scanf("%ld", &array[c]);

  maximum  = array;
  *maximum = *array;

  for (c = 1; c < size; c++)
  {
    if (*(array+c) > *maximum)
    {
       *maximum = *(array+c);

    }
  }

  printf("the largest element in the array is %ld.\n", *maximum);
  return 0;
}
