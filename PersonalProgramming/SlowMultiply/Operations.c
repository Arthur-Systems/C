#include "Slow.h"

int add(int num1, int num2)
{
    int sum = num1;
    int i;
    i = 0;
    while (1)
    {
        sum += 1;
        i += 1;
        if (i >= num2)
        {
            break;
        }
    }

    return sum;
}

int multiply(int num1, int num2)
{
    int product = 0;
    int i;
    i = 0;
    while (1)
    {
        product = add(product, num1);
        i = add(i, 1);
        if (i >= num2)
        {
            break;
        }
    }

    return product;
}
