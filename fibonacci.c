#include <stdio.h>
int fibonacci(int n);

// fn = fn-1 + fn-2
// f0 = 0
// f1 = 1


int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}