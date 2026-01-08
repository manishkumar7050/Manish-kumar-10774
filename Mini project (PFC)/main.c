#include <stdio.h>

int main() {
    int balance = 5000;
    int withdraw;

    printf("Enter amount to withdraw: ");
    scanf("%d", &withdraw);

    if (withdraw > 0) { 
        if (withdraw <= balance) {
            balance = balance - withdraw;
            printf("Withdrawal successful!\n");
            printf("Updated Balance: %d\n", balance);
        } else {
            printf("Insufficient balance!\n");
        }
    } else {
        printf("Invalid withdrawal amount!\n");
    }

    return 0;
}
