#include <stdio.h>

int mdc(int, int);

int main(){
    int n1, n2;
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("MDC entre %d e %d = %d", n1, n2, mdc(n1, n2));
}

int mdc(int n1, int n2){
    int a, b, resto;
    if (n1>n2){
        a = n1;
        b = n2;
    }
    else{
        b = n1;
        a = n2;
    }
    do{
        if (a%b != 0)
            resto = a%b;
        else
            break;
        a = b;
        b = resto;
    } while (1);
    return resto;
}