
#include <stdio.h>

/*int main()
{
    int num, count=0;

    // Input number from user 
    printf("Enter any number: ");
    scanf("%d", &num);

    while(!(num & 1))
    {
        count++;
        num >>= 1;
    }

    printf("Total number of trailing zeros = %d.", count);

    return 0;
}*/
#include <limits.h> // Used for INT_MAX

int main()
{
    int num, count;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    count = 0;
    while(!(num & (~INT_MAX)))
    {
        count++;
        num <<= 1;
    }

    printf("Total number of leading zeros = %d", count);

    return 0;
}
