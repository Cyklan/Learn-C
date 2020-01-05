#include <stdio.h>

int main()
{
    char vowels[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };

    // The following two statements do the same
    int a[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    // gcc will throw warning though
    int b[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    int val1 = a[1][2];
    int val2 = b[1][2];

    printf("The following values are the same: %d, %d\n", val1, val2);

    return 0;
}