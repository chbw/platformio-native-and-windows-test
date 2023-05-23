#include <stdio.h>

#define FOOOBAR "1sdf2"

/**
 * @brief Return the sum of the parameters
 * 
 * @param a summand a
 * @param b summand b
 * @return sum
 */
double sum(double a, double b){
  return a+b;
}

volatile double c;

int main(void){
  c = sum(4,5);
  printf("%s %f\n", FOOOBAR, c);
  return 0;
}
