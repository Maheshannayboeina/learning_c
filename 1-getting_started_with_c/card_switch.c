/* 
 * This is the rewritten first.c code but using switch
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("Enter the card name: ");
	scanf("%2s",card_name);

	int val=0;

	switch(card_name[0])
	{
	case 'K' || 'J' || 'Q':
		val=10;
		break;
	case 'A':
		val=11;
		break;
	default:
		val=atoi(card_name);

	}

	printf("Card value is %i",val);
	return 0;

}