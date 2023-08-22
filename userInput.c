#include <iostream>

int main() {
  int age;
  double number;
  char alphabet;
  
  printf("Enter input values here: ");
   scanf("%lf %c", &number, &alphabet);
   printf("\nNumber is: %lf", number);
   printf("\nLetter is: %c", alphabet);
 /* 
  printf("\nEnter number here: ");
   scanf("%lf", &number); //Memory addr
  printf("\nNumber is: %lf", number);
  
  printf("\nEnter letter here: ");
   scanf("%c", &alphabet); //Memory addr
  printf("\nLetter is: %c", alphabet);
*/
    return 0;
}
