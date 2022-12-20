#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("This is a simple exercise. You give me a number and I do certain math to it.");
    puts("If the number is even I devide it in 2 and if the number is odd I multiply it by 3 and add 1.");
    puts("And I do the same with the resulting number until I get to the cycle 4-2-1.");
    printf("When I get to 1 I'll tell you how many steps it took.\n\n");
    puts("So now you give me a number:");
    char number_char[6];
    int number;
    int count = 0;
    scanf("%5s", number_char);
    number = atoi(number_char);
    printf("\nYou have given me %i. Let's roll!\n\n", number);
    printf("%i >> ", number);
    while (number != 2) {
        if (number % 2) {
            number = (number * 3) + 1;
        } else {
            number = number / 2;
        }
        count++;
        printf("%i >> ", number);
    }
    printf("1\n");
    count++;
    printf("\nIt has taken me %i steps to get to 1.\n\n", count);
    return 0;
}
