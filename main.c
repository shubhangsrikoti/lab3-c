// Author: Shubhang Srikoti svs6959@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 4
// Breakout Room: 7

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n) {
  if (n >= 1)
    return n + sum_n(n - 1);
  else
    return 0;
}

int print_n(const char *s, int n) {
  if (n >= 1) {
    printf("%s\n", s);
    return print_n(s, n - 1);
  }

int main(void) {

  int num = atoi(readline("Enter an int: "));
  printf("sum is %i\n", sum_n(num)))

  char *string = readline("Enter a string: ");
  print_n(string, num);

  return 0;

}
