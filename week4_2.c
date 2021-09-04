
#include <stdio.h>
#include <math.h>

float c1(float a, float b) {
	float sum = (2*a) + b;
	return sum;
}
float c2(float a, float b) {
	float sum = pow(a, 5) + pow(a,4) + (2*pow(a,3)) + (3*pow(a,2)) + (4*a) + 3;
	return sum;
}

float c3(float a, float b) {
	float sum = 2 + (3*a);
	return sum;
}



int main() {
	float a, b;
	printf("Enter a and b : ");
	scanf("%f %f", &a, &b);
	printf("c = 2a + b -> c = %.2f\n", c1(a,b));
	printf("c = a^5 + a^4 + 2a^3 + 3a^2 + 4a +3 -> c = %.2f\n", c2(a,b));
	printf("c = 2 + 3a -> c = %.2f", c3(a,b));
}
