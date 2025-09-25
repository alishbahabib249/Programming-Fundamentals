#include <stdio.h>

// program 5: Medical Dosage Calculator

int main(void) 
{
      float weight, dosage;
      
    printf("Enter the patient's weight: ");
    scanf("%f", &weight);

    dosage = weight * 0.8;

    printf("The dosage(mg) for the patient is: %.2f\n", dosage);
    return 0;
}
