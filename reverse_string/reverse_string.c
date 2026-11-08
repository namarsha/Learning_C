#include <stdio.h>


int main(){

	char name[] = "Cat";

	int num_of_chars = sizeof(name) / sizeof(name[0]);
        
        for (int i = num_of_chars; i >= 0; i--){

		printf("%c", name[i]);


	}
}
