#include <stdio.h>

int triang(int, int, int);

int main(){
    int l1, l2, l3;
    printf("Lado 1: ");
    scanf("%d", &l1);
    printf("Lado 2: ");
    scanf("%d", &l2);
    printf("Lado 3: ");
    scanf("%d", &l3);
    printf("Resultado: %d", triang(l1, l2, l3));
}

int triang(int l1, int l2, int l3){
    int forma;
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        if (l1 != l2 && l2!=l3 && l1 != l3){
            forma = 3;
            return forma;
        }
            
        if (l1 == l2 && l2 == l3){
            forma = 1;
            return forma;
        }

        if ((l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2) || (l2 == l3 && l2 != l1)){
            forma = 2;
            return forma;
        }
        return -1;
    }
    else{
        forma = 0;
        return forma;
    }
}