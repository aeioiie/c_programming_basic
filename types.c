#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The size of some fundamental types.\n\n");
    printf("char: %31u byte \n", sizeof(char));
    printf("short: %31u bytes \n", sizeof(short));
    printf("int: %31u bytes \n", sizeof(int));
    printf("long: %31u bytes \n", sizeof(long));
    printf("unsigned: %31u bytes \n", sizeof(unsigned));
    printf("float: %31u bytes \n", sizeof(float));
    printf("double: %31u bytes \n", sizeof(double));
    printf("long double: %31u bytes \n", sizeof(long double));

    return 0;
}