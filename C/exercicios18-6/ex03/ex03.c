#include <stdio.h>

int eletra(char);
int evogal(char);
int econsoante(char);

int main(){
    char c;
    printf("Digite uma letra: ");
    scanf("%c", &c);
    printf("%d\n", eletra(c));
    printf("%d\n", evogal(c));
    printf("%d", econsoante(c));
}

int eletra(char c){
    if ((c<90 && c>65) || (c<122 && c>97))
        return 1;
    else
        return 0;
}

int evogal(char c){
    if ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') && eletra(c) == 1)
        return 1;
    else
        return 0;
}

int econsoante(char c){
    if (evogal(c) == 0 && eletra(c) == 1)
        return 1;
    else 
        return 0;
}