#include <stdio.h>

int main(void){
	int temperatura = 25;
	float farenheit = (temperatura * 9.0/5.0)+32;
	printf("Temperature: %d degrees\n", temperatura);
	printf("Farenheit: %.1f degrees\n", farenheit); 
	return 0;
	
}
	
