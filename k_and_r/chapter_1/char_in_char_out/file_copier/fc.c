 #include <stdio.h>

int main(){

	/* copy input to output; 1st version (from KandR p. 16 */

	int c;

	c = getchar();

	while(c != EOF){

		putchar(c);
		c = getchar();

}
}
