#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define BUFFER_SIZE 100

int main(){

	char some_input[BUFFER_SIZE]; 
	scanf("%s", some_input);

	int input_int = atoi(some_input);

	if (input_int < 10){
		printf("That's a pathetically small number.");
	}
	else if (input_int >= 10 && input_int <= 100) {
		printf("decent...");
		}
	else if (input_int > 100) {
		printf("okay, now we're talking.");
		}	

}

