#include <stdio.h>
int main() {
float temperature;
printf("Enter a temperature : ");
scanf("%f" , &temperature);
printf("Votre temperature en C est = %f" , (temperature - 32) /1.8);

}
