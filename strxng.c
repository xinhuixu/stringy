#include <stdio.h>
#include <string.h>

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

//TODO: N VERSION

int xstrcmp( char *s1, char *s2 ){
  int i = 0;
  while ( s1[i] || s2[i] ){
    if ( s1[i] < s2[i] ){
      return -1;
    } else if ( s1[i] > s2[i] ){
      return 1;
    } else {
      i++;
    }
  }
  return 0;
}

int main() {
  char c[] = "papaya";
  printf("c: %s\n",c);
  printf("xstrlen(c): %d\n", xstrlen(c));
  char e[] = "mangosteen";
  printf("e: %s\n",e);
  xstrcpy(c,e);
  printf("e copied to c: %s\n", c);
  char f[] = "lychee";
  xstrcat(c,f);
  printf("c concat 'lychee': %s\n",c);
  char g[] = "lyche";
  printf("f: %s, g: %s\n",f,g);
  printf("xcmpfg: %d\n", xstrcmp(f,g));
  return 0;
}
