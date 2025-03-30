#include <stdio.h> #include <math.h>

#define PI 3.14159265358979323846

int main() { // Given data int m1 = 3; double lambda1 = 530e-9; double theta1 = 65.0;

int m2 = 2;
double lambda2 = 700e-9;

double d = (m1 * lambda1) / sin(theta1 * PI / 180.0);

double theta2 = asin(m2 * lambda2 / d) * 180.0 / PI;

printf("The second-order bright spot for red light is at angle: %.6f degrees.\n", theta2);

return 0;

}
