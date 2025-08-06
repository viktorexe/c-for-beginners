# include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a); // To take input from the user
    switch (a) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break; // To break if this is the case, else everything is printed
        default:
            printf("Other number");
    }
    return 0;
}
