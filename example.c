#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;

    int result1 = ++a * (b-- - (a - b));
    int result2 = a * b++ - a * b;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("result1: %d\n", result1);    
    printf("result2: %d\n", result2);

    return 0;
}