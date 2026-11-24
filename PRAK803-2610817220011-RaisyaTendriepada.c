#include <stdio.h>
#include <string.h>

struct Participant {
    char name[50];
    int age;
    int score;
};

int main(void) {
    struct Participant p;

    //test case 1
    printf("Name: ");
    fgets(p.name, 50, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';
    printf("Age: ");
    scanf("%d", &p.age);
    printf("Score: ");
    scanf("%d", &p.score);
    getchar();

    printf("\nParticipant Data:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d years\n", p.age);
    printf("Score: %d\n", p.score);
    printf("\n");

    //test case 2
    printf("Name: ");
    fgets(p.name, 50, stdin);
    p.name[strcspn(p.name, "\n")] = '\0';
    printf("Age: ");
    scanf("%d", &p.age);
    printf("Score: ");
    scanf("%d", &p.score);
    getchar();
    
    printf("\nParticipant Data:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d years\n", p.age);
    printf("Score: %d\n", p.score);
    return 0;
}