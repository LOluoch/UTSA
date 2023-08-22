/*
int - 4 bytes | %d for printing
double - 8 bytes | %lf for printing
float - 4 bytes | %f for printing
char - 1 byte | %c for printing
*/
#include <stdio.h>

int main() {

  int age = 10;
  printf("%d", age);
  
  double number = 12.45;
  printf("\n%.2lf", number);
  
  float number1 = 10.9f;
  printf("\n%.1f", number1);  
  
  double number2 = 5.5e6;
  printf("\n%lf", number2); //double with exponential number
  
  char character = 'z';
  printf("\n%c", character);
  printf("\n%d", character); //Print numeric value of characters
  
  printf("\nint size = %zu", sizeof(age)); // Size in bytes
  printf("\ndouble size = %zu", sizeof(number));
  return 0;
}
