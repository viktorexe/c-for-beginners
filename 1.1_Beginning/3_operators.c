# include <stdio.h>

int main() {
    int a = 12;
    int b = 12;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    printf("The sum of a and b is %d\n", c);
    printf("The difference of a and b is %d\n", d);
    printf("The product of a and b is %d\n", e);
    printf("The quotient of a and b is %d\n", f);

    int x = 10;
    float y = 2.5;
    float result = x + y;
    // Yes we can add int and float in c (this is called type promotion) before doing the calculation, result is in float
    printf("The sum of x and y is %f\n", result);
    return 0;
}
