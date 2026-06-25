#include <stdio.h>

int main()
{
    int i = 2;

    while (1)
    {
        if (i > 20)
        {
            break;
        }

        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}