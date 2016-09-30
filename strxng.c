#include <stdio.h>

int xstrlen( char * car) {
  int i = 0;
  while (car[i]) {
    i++;
  }
  return i;
}

char * xstrcpy( char *dst, char *src ) {
  int i = 0;
  while (src[i]) {
    dst[i] = src[i];
    i++;
  }
  dst[i] = 0;
  // why can't i return dst[]?
  return dst;
}

char * xstrcat( char *head, char *tail ) {
  int i = xstrlen(head);
  printf("i: %d\n",i);
  int j = 0;
  while (tail[j]) {
    printf("head[%d] = %s\n",i,head[i]);
    head[i] = tail[j];
    i++;
    j++;
  }
  return head;
}

int main() {
  char c[] = "papaya";
  printf("string: %s\n",c);
  printf("length: %d\n", xstrlen(c));
  char e[] = "mangosteen";
  xstrcpy(c,e);
  printf("copied c: %s\n", c);
  char f[] = "lychee";
  xstrcat(c,f);
  printf("concat lychee: %s\n",c);
  return 0;
}
