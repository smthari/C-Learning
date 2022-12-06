#include <stdio.h>
#include <string.h>

int main() 
{
  char s1[35] = "HELLO ";
  char s2[35] = "THERE";
  
  printf("LENGTH OF STRING : %d \n\n", strlen(s1));
  
  printf("BEFORE concatenate   : %s %s \n", s1,s2); 
  strcat(s1,s2);
  printf("AFTER concatenate    : %s %s \n\n", s1,s2);
  
  printf("BEFORE COPYING       : %s %s \n", s1,s2); 
  strcpy(s1, s2); 
  printf("AFTER COPYING        : %s %s \n\n", s1,s2);
  
  printf("RESULT OF STRING COMPARE : %d \n\n", strcmp(s1, s2));
}