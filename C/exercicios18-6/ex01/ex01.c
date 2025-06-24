#include <stdio.h>

int somax(int);

int main(){
    int x;
    printf("N: ");
    scanf("%d", &x);
    printf("Soma de 1 a %d = %d", x, somax(x));
}

int somax(int n){
    int soma=0;
    for (int i=1; i<=n; i++){
        soma += i;
    }
    return soma;
}