#include <stdio.h>
#include <limits.h>

int unsiged_char_max()
{
    // TODO: write your code here
    return UCHAR_MAX;
}

int signed_char_min()
{
    // TODO: write your code here
    return SCHAR_MIN;
}

int signed_char_max()
{
    // TODO: write your code here
    return SCHAR_MAX;
}

int unsigned_int_max()
{
    // TODO: write your code here
    return UINT_MAX;
}

int signed_int_min()
{
    // TODO: write your code here
    return INT_MIN;
}

int signed_int_max()
{
    // TODO: write your code here
    return INT_MAX;
}

int unsigned_short_max()
{
    // TODO: write your code here
    return USHRT_MAX;
}

int signed_short_min()
{
    // TODO: write your code here
    return SHRT_MIN;
}

int signed_short_max()
{
    // TODO: write your code here
    return SHRT_MAX;
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    printf("#################### CHAR #####################\n");
    printf("Number of bits in char: %d\n", CHAR_BIT);
    printf("unsigned char max: %d\n", unsiged_char_max());
    printf("signed char min: %d\n", signed_char_min());
    printf("signed char max: %d\n", signed_char_max());
    printf("\n");

    printf("##################### INT #####################\n");
    printf("unsigned int max: %u\n", unsigned_int_max());
    printf("signed int min: %d\n", signed_int_min());
    printf("signed int max: %d\n", signed_int_max());
    printf("\n");

    printf("################## SHORT INT ##################\n");
    printf("unsigned short int max: %u\n", unsigned_short_max());
    printf("signed short int min: %d\n", signed_short_min());
    printf("signed short int max: %d\n", signed_short_max());
    printf("\n");
    return 0;
}
#endif