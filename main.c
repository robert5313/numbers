#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val,rem;

    printf("Enter an integer:\n");
    scanf("%d", &val);
    rem = val % 2;
    if (rem == 0)
        printf("%d is an even integer\n", val);
    else
        printf("%d is an odd integer\n", val);
    return 0;
}
