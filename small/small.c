#include <stdio.h>

main()
{
    int array[100], *minimum, size, i;

    printf("Enter the number of elements in array\n");
    scanf("%d",&size);

    printf("Enter %d integers\n", size);

    for ( i = 0 ; i < size ; i++ )
        scanf("%d", &array[i]);

    minimum = array;
    *minimum = *array;

    for ( i = 0 ; i < size ; i++ )
    {
        if ( *(array+i) < *minimum )
        {
           *minimum = *(array+i);

        }
    }

    printf("Minimum element   value is %d.\n",*minimum);
    return 0;
}
