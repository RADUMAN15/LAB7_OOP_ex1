#include <iostream>
#define ULL unsigned long long int

float operator"" _Kelvin(ULL temp) {
	
	return (float)temp - 273.15;
}
float operator"" _Fahrenheit(ULL temp) {
	
	return (float)(temp-32)/1.8;
}
int main() { 
	float a = 300_Kelvin;    
	float b = 120_Fahrenheit;    
	std::cout << "Temp in Kelvin: " << a << "\nTemp in Fahrenheit: " << b;
	return 0; 
}
