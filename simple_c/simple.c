#include <stdio.h>

int main(){

	int someint;
	int anotherint;
	printf("Please enter a number in hexadecimal");
	scanf("%x", &anotherint);
	printf("The hex number you entered is %x and that correponds to the integer %d", anotherint, anotherint);
	printf("Please enter an integer.\n");
	scanf("%d", &someint);
	printf("Your number is %d", someint);
	printf("\n\nEnd of program");
	return 0;
}

