#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int count = 0;
    do {
        puts("Enter card name (X to exit):");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0]) {
	    case 'K':
	    case 'Q':
	    case 'J':
		val = 10;
		break;
	    case 'A':
		val = 11;
		break;
	    case 'X':
		continue;
	    default:
		val = atoi(card_name);
		if ((val < 2) || (val > 10)) {
		    printf("This is not a valid card name. Try again.\n\n");
		    continue;
		}
	}
	if ((val >= 3) && (val <= 6))
	    count++;
	if (val == 10)
	    count--;
	printf("Current count is %i\n\n", count);
	} while(card_name[0] != 'X');
    puts("Good bye!");
    return 0;
}
