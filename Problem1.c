#include <stdio.h>

int main() { float lemda, m; printf("Please insert the Wavelength (\u03bb) : "); scanf("%f", &lemda); printf("Please insert the Order of diffraction (m) : "); scanf("%f", &m);

float slit_widths[3];
int slit_indices[3] = {1, 2, 3};

for (int i = 0; i < 3; i++)
{
    printf("Please insert the first Slit width a%d : ", i + 1);
    scanf("%f", &slit_widths[i]);
}

// Sorting the slit widths and keeping track of indices
for (int i = 0; i < 2; i++) {
    for (int j = i + 1; j < 3; j++) {
        if (slit_widths[i] > slit_widths[j]) {
            float temp = slit_widths[i];
            slit_widths[i] = slit_widths[j];
            slit_widths[j] = temp;
            
            int temp_index = slit_indices[i];
            slit_indices[i] = slit_indices[j];
            slit_indices[j] = temp_index;
        }
    }
}

if (lemda < 380 || lemda > 750)
    printf("Out of range. Please enter a valid Number.\n");
else
{
    float minA = slit_widths[0];
    if (minA < ((m * lemda) / 1000))
        printf("Minimum slit difference is invalid. Please enter a valid Number.\n");
    else
        printf("The slit that will bend the light most is for slit %d\n which value is %.2f micrometer\n", slit_indices[0], minA);
}

return 0;

}
