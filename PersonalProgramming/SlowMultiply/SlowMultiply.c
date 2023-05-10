#include "Slow.h"

int add(int, int);
int multiply(int, int);

int main()
{
    int num1 = 5;
    int num2 = 5;
    for (int i = 0; i <= num1; i++)
        for (int j = 0; j <= num2; j++)
        {
            printf(" %d  \n", multiply(i, j));
        }
}
