#include <stdio.h>

void swap(int *andi, int *budi) {
    int temp = *andi;
    *andi = *budi;
    *budi = temp;
}
int main (void) {
    int andi, budi;

    //test case 1
    scanf("%d %d", &andi, &budi);
    printf("Before swap: Andi = %d, Budi = %d\n", andi, budi);
    swap(&andi, &budi);
    printf("After swap: Andi = %d, Budi = %d\n", andi, budi);
    printf("\n");

    //test case 2
    scanf("%d %d", &andi, &budi);
    printf("Before swap: Andi = %d, Budi = %d\n", andi, budi);
    swap(&andi, &budi);
    printf("After swap: Andi = %d, Budi = %d\n", andi, budi);
    printf("\n");
    
    //test case 3
    scanf("%d %d", &andi, &budi);
    printf("Before swap: Andi = %d, Budi = %d\n", andi, budi);
    swap(&andi, &budi);
    printf("After swap: Andi = %d, Budi = %d\n", andi, budi);
    return 0;
}