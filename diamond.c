#include <stdio.h>

void PrintSpacesBefore(int i, int n)
{
	int j;
	for (j = 1; j < n + 1 - i; j++)
		printf(" ");
	printf("*\n");
}
void PrintSpacesAfter(int i, int n)
{
	int j, k;
	for (j = 1; j < n + 1 - i; j++)
		printf(" ");
	printf("*");
	for (k = 0; k < 2*i-3; k++)
		printf(" ");
	printf("*\n");
}
int main()
{
	int h, n, i;
	printf("Enter the diamond`s height (possitive odd):\n");
	scanf("%d", &h);
	while (h < 0 || h % 2 == 0) {
		printf("The diamond`s height is not valid, please try again.\n");
		scanf("%d", &h);
	}
	n = h / 2;
	for (i = 1; i < n + 1; i++) {
		if (i == 1) 
			PrintSpacesBefore(i, n);
		if (i > 1) 
			PrintSpacesAfter(i, n);
	}
	for (i = n-1; i >= 1; i--) {
		if (i > 1) 
			PrintSpacesAfter(i, n);
		if (i == 1) 
			PrintSpacesBefore(i, n);
	}	
	return 0;
}

