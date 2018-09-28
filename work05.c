#include <stdio.h>
#include <string.h>

// strlen - Tania
int my_strlen(char *s){

  return 0;
}

// strcpy - Tania
char * my_strcpy(char *dest, char *source){

  return NULL;
}

// strncpy - Tania
char * my_strncpy(char *dest, char *source, int n){

  return NULL;
}

// strcat - Ivan
char * my_strcat(char *dest, char *source ){

  return NULL;
}

// strncat
char * my_strncat(char *dest, char *source, int n){
  return NULL;
}

// strcmp
int my_strcmp(char *s1, char *s2){
  return 0;
}

// strchr
char * my_strchr(char *s, char c){
  return NULL;
}

// strstr
char * my_strstr(char *s1, char *s2){
  return NULL;
}

// some helper stuff
void reset_strings(char *s1, char *s2, char*s3){
  printf("Resetting string values... \n");
  strcpy(s1, "Hello");
  strcpy(s2, "Wolrd");
  strcpy(s3, "Whatever");
}
void print_strings(char *s1, char *s2, char *s3){
  printf("Current string values: \n");
  printf("s1: [%s] \n", s1);
  printf("s2: [%s] \n", s2);
  printf("s3: [%s] \n", s2);
}

int main(){
  char s1[64]; char s2[64]; char s3[64];
  reset_strings(s1, s2, s3);
  print_strings(s1, s2, s3);

  


  return 0;
}
