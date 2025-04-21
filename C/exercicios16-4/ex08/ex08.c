#include <stdio.h>
int main(){
    int met;
    printf("Medida (em metros): ");
    scanf("%i", &met);
    printf("A sua medida em centimetros: %icm", met*100);
}