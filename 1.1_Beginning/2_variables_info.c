# include <stdio.h>

int main() {
    int a = 1;
    printf("%d\n", a);
    float b = 12.22;
    printf("%f\n", b);
    double c = 12.7287937193131211;
    printf("%lf\n", c);
    char d;
    d = 'a'; // Char variable stores only 1 letter
    printf("%c\n", d);
    return 0;
}

/* Bytes consumed by each datatype
 * int = 2 byte
 * float = 4 byte
 * double = 8 byte
 * char = 1 byte
 */