// Author: Evelyn Moore eim5178@psu.edu
// Collaborator: Bailey Dillow bfd5210@psu.edu
// Collaborator: Kenleigh Leonard kml6565@psu.edu
// Collaborator:Junyang Guan jmg7510@psu.edu
// Section: 4
// Breakout: 3

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n==0){
    return 0;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n){
  if (n==0){
  }
  else {
    printf("%s\n", s);
    print_n(s,n-1);
  }
}
int main(void) {
  int n = atof(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(n));
  const char *s = readline("Enter a string: ");
  print_n(s,n);
  return 0;
}