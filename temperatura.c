#include <stdio.h>

int main(void){
	int temperatura = 25;

	float farenheit = (temperatura * 9.0/5.0)+32;
	printf("Temperature: %d degrees\n", temperatura);
	printf("Farenheit: %.1f degrees\n", farenheit); 

	
	if (temperatura<20){
		printf("Temperature: %d degrees\nLow temperature\n", temperatura);
	}else{
		printf("Temperature: %d degrees\nHigh temperature\n", temperatura);

	return 0;
	
}
	
