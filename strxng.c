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
  // printf("lastIndex(head): %d\n",i);
  int j = 0;
  while (tail[j]) {
    // printf("head[%d] = %c\n",i,head[i]);
    // printf("tail[%d] = %c\n",j,tail[j]);
    head[i] = tail[j];
    // printf("new! head[%d] = %c\n",i,head[i]);
    i++;
    j++;
  }
  head[i] = 0;
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
  printf("c concat 'lychee': %s\n",c);
  return 0;
}
