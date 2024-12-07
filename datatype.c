#include<stdio.h>
#include<limits.h>

int main()
{
    // Printing sizes of data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of short int: %lu bytes\n", sizeof(short int));

    // Range of signed integer
    int signed_min = INT_MIN;
    int signed_max = INT_MAX;
    printf("\nRange of signed integer: %d to %d\n", signed_min, signed_max);

    // Range of unsigned integer
    unsigned int unsigned_min = 0;
    unsigned int unsigned_max = UINT_MAX;
    printf("Range of unsigned integer: %u to %u\n", unsigned_min, unsigned_max);

    // Range of short int
    short int short_min = SHRT_MIN;
    short int short_max = SHRT_MAX;
    printf("\nRange of short int: %d to %d\n", short_min, short_max);

    // Range of unsigned short int
    short unsigned int ushort_min = 0;
    short unsigned int ushort_max = USHRT_MAX;
    printf("Range of unsigned short int: %u to %u\n", ushort_min, ushort_max);

    return 0;
}
/*%d------------->to print integer(signed)
%u--------------->to print unsingned integer
%ld-------------->to print long integer(singned long integer)
%lu-------------->to print long nsinged integer
%lld------------->long long integr
%llu------------->long long integer(unsigned)
*/