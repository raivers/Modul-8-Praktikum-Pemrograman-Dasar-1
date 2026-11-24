#include <stdio.h>

int main(void) {
    int value;
    int *ptr = &value;

    //test case 1
    scanf("%d", &value);
    printf("Variable value = %d\n", value);
    printf("Variable address = %p\n", &value);
    printf("Value via pointer = %d\n", *(&value));
    *ptr = *ptr * 2;
    printf("Value after modification via pointer = %d\n", *ptr);
    printf("\n");

    //test case 2
     scanf("%d", &value);
    printf("Variable value = %d\n", value);
    printf("Variable address = %p\n", &value);
    printf("Value via pointer = %d\n", *(&value));
    *ptr = *ptr * 2;
    printf("Value after modification via pointer = %d\n", *ptr);
    printf("\n");

    //test case 3
     scanf("%d", &value);
    printf("Variable value = %d\n", value);
    printf("Variable address = %p\n", &value);
    printf("Value via pointer = %d\n", *(&value));
    *ptr = *ptr * 2;
    printf("Value after modification via pointer = %d\n", *ptr);
    return 0;
}