/*#include <stdio.h>
#include <string.h>

int main(){
  char min[100];
  int i=0;
  printf("Digite uma frase: ");
  fgets(min, sizeof(min), stdin);
  min[strcspn(min, "\n")] = '\0';
  while (i<strlen(min)){
    if (i == 0 || min[i-1] == ' ' && min[i] >= 'a' && min[i] <= 'z')
      min[i] = min[i] - 32;
    i++;
  }
  printf("%s\n", min);
}*/