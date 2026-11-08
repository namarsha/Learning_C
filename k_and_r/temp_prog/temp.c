#include <stdio.h>


int main() {


		printf("%20s_________%20s\n", "TempInFahrenheit", "TempInCelsius");
	for(int fahr = 0; fahr < 300; fahr += 20){
		float celsius = (fahr - 32) * (5.0/9.0); 
		printf("%20d_________%20f\n", fahr, celsius);
		
	}

}

