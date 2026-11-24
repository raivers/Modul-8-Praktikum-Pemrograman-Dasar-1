#include <stdio.h>

struct Wallet {
    char name[50];
    int balance;
};

void topUp(struct Wallet *w, int amount) {
    w->balance = w->balance + amount;
    printf("Top up of %d successful, balance = %d\n", amount, w->balance);
}

void pay(struct Wallet *w, int amount) {
    if (w->balance >= amount) {
        w->balance = w->balance - amount;
        printf("Payment of %d successful, balance = %d\n", amount, w->balance);
    } else {
        printf("Payment of %d failed, insufficient balance\n", amount);
    }
}

int main(void) {
    struct Wallet w;
    int n, i, amount;
    char type;

    //test case 1
    scanf("%s %d", w.name, &w.balance);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &type, &amount);
        if (type == 'T') {
            topUp(&w, amount);
        } else if (type == 'B') {
            pay(&w, amount);
        }
    }
    printf("Final balance %s = %d\n", w.name, w.balance);
    printf("\n");

    //test case 2
    scanf("%s %d", w.name, &w.balance);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &type, &amount);
        if (type == 'T') {
            topUp(&w, amount);
        } else if (type == 'B') {
            pay(&w, amount);
        }
    }
    printf("Final balance %s = %d\n", w.name, w.balance);
    printf("\n");

    //test case 3
    scanf("%s %d", w.name, &w.balance);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &type, &amount);
        if (type == 'T') {
            topUp(&w, amount);
        } else if (type == 'B') {
            pay(&w, amount);
        }
    }
    printf("Final balance %s = %d\n", w.name, w.balance);
    return 0;
}