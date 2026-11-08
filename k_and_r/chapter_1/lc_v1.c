#include <stdio.h>

/* Line counter from K and R p. 19 */

int main() {

	long nl;

	nl = 0;

	char c;

	while((c = getchar()) != EOF) {

		if (c == '\n')
			nl = nl + 1;

	}

	printf("%ld", nl);



}
