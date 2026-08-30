 #include <stdio.h>

int main() {
    int result1, result2, result3;

    result1 = 10 + 5 * 2;
    result2 = (10 + 5) * 2;
    result3 = 20 / 5 + 3 * 2;

    printf("10 + 5 * 2 = %d\n", result1);
    printf("(10 + 5) * 2 = %d\n", result2);
    printf("20 / 5 + 3 * 2 = %d\n", result3);

    return 0;
}