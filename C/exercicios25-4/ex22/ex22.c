#include <stdio.h>
int main(){
    int n;
    printf("Insira um numero: ");
    scanf("%i", &n);
    if(n > 10){
        printf("E MAIOR QUE 10!\n");
    }
    else{
        printf("NÃO E MAIOR QUE 10!\n");
    }
}