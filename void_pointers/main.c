#include <stdio.h>


void * hello_world() {

	int * x;
	printf("Hello World\n");
	return &x;	
}


int main(){
	int y = 5;

	int * x;
	x = &y;
	int* result = x;
	printf("I've just initialized an integer with a pointer\n The value of result is: %ls \n And the address is: %p \n", result, &result);
	result = hello_world();
	printf("The result points to a value: %p \n", result);

}

