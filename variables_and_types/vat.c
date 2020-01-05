#include <stdio.h>

int main()
{
    // calculate with some integers
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;
    a = b - c + d * e;
    // Print a
    printf("%d\n", a);

    // add some floats
    int x = 3;
    float y = 4.5;
    double z = 5.25;
    float sum = x + y + z;
    printf("The sum of x, y, and z is %f\n", sum);
}