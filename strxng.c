#include <stdio.h>

int xstrlen( char * car) {
  printf("%s\n",car);
  return 0;
}

int main() {
  char c[] = "smthng";
  printf("%d\n", xstrlen(c));
  return 0;
}
