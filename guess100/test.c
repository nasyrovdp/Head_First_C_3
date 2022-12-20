#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = random() % (100 + 1 - 1) + 1;
    printf("%i\n", r);
    return 0;
}
