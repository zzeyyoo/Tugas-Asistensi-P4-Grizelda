#include <stdio.h>

typedef struct {
    float x;
} Kotak;

void cekBenturan(Kotak *a, Kotak *b) {
    if(a->x == b->x) {
        printf("Benturan di X=%.1f!\n", a->x);
    } else {
        printf("Aman\n");
    }
}

int main() {
    Kotak obj1, obj2;
    
    printf("Posisi obj1: ");
    scanf("%f", &obj1.x);
    
    printf("Posisi obj2: ");
    scanf("%f", &obj2.x);
    
    cekBenturan(&obj1, &obj2);
    
    return 0;
}
