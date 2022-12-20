#include <stdio.h>

int main()
{
    int counth;
    int countv;
    for (counth = 1; counth <= 9; counth++) {
        for (countv = 1; countv <= 9; countv++) {
            printf(" . ");
        }
        printf("\n");
    }
    return 0;
}
