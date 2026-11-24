#include <stdio.h>

struct Participant {
    char name[50];
    int age;
    int score;
};

int main(void) {
    struct Participant p[10];
    int n, i, highest;
    
    //test case 1
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", p[i].name, &p[i].age, &p[i].score);
    }
    highest = 0;
    for (i = 1; i < n; i++) {
        if (p[i].score > p[highest].score) {
            highest = i;
        }
    }
    printf("The participant with the highest score is %s with a score of %d\n",
        p[highest].name, p[highest].score);
    printf("\n");

    //test case 2
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", p[i].name, &p[i].age, &p[i].score);
    }
    highest = 0;
    for (i = 1; i < n; i++) {
        if (p[i].score > p[highest].score) {
            highest = i;
        }
    }
    printf("The participant with the highest score is %s with a score of %d\n",
        p[highest].name, p[highest].score);
    printf("\n");

    //test case 3
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", p[i].name, &p[i].age, &p[i].score);
    }
    highest = 0;
    for (i = 1; i < n; i++) {
        if (p[i].score > p[highest].score) {
            highest = i;
        }
    }
    printf("The participant with the highest score is %s with a score of %d\n",
        p[highest].name, p[highest].score);
    return 0;
}