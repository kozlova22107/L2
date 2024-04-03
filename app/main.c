#include <stdio.h>

#include "myfunc.h"

#define _CRT_SECURE_NO_WARNINGS

int main()
{
    printf("Hello World!\n");
    float a, b, c, root1, root2;
    int numItems;
    printf("a, b & c:\n");
    numItems = scanf("%f %f %f", &a, &b, &c);
    if (numItems != 3) {
        printf("Error: Invalid input\n");
        return 1;
    }

    int roots = quEx(a, b, c, &root1, &root2);

    if (roots == 2)
        printf("roots is: %.2f & %.2f\n", root1, root2);
    else if (roots == 1)
        printf("root is: %.2f\n", root1);
    else
        printf("no rat roots\n");

    return myfunc(2);
}
