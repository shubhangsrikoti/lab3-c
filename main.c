// Author: Shubhang Srikoti svs6959@psu.edu
// Collaborator: Geng Niu gjn5124@psu.edu
// Collaborator: Max Skeen mls6984@psu.edu
// Collaborator: Ananya Ashwinikumar ava6290@psu.edu
// Section: 4
// Breakout Room: 7
#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return n + sum_n(n - 1);
  }
}

void print_n(const char *s, int n) {
  if(n == 0) {
    return;
  }
  else {
    printf("%s\n", s);
    print_n(s, n - 1);
  }
}

int main(void) {
  int n;
  char *integer = readline("Enter an int: ");
  n = atoi(integer);
  printf("sum is %d.\n", sum_n(n));
  char *string = readline("Enter a string: ");
  print_n(string, n);
}