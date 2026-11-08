#include <stdio.h>

/* charater counter v1. K and R, p. 18 */


int main() {



	printf("This program counts characters.\n Type as many characters as you wish into stdin, and then press Ctrl+d to end the program and print the final count.");

	long nc = 0;
	int c;

	while ((c = getchar()) != EOF){
		
		if (c != '\n'){
			nc = nc+1;
		}
	}

		printf("%ld\n", nc);

}
