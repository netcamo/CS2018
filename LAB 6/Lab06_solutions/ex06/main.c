#include <stdio.h>

int main() {
    int x;  // the value
    int b;  // the base
    int digits[32]; // the digits in base (assume max 32)
    int n_digits = 0;
    int isPalindrome = 1;
    int x1;

    printf("Input the number and the base: ");
    scanf("%d%d", &x, &b);

    /* convert x in base b and store the digits in digits, could be reversed order*/
    x1 = x;
    while (x1 != 0){
        digits[n_digits] = x1 % b;
        x1 = x1 / b;
        n_digits ++ ;
    }

    /* print the digits to check */
    printf("%d is base %d is: ", x, b);
    for (int i=n_digits-1; i>=0; i--){
        if (digits[i] < 10){
            printf("%c", '0' + digits[i]);
        } else {
            printf("%c", 'A' + digits[i] - 10); /* TOTHINK what happens base is more than 36? A->10 Z->35 */
        }
    }
    printf("\n");

    /* check if it is palindrome */
    for (int i=0; i < n_digits/2 && isPalindrome; i ++){
        if (digits[i] != digits[n_digits-1-i]){
            isPalindrome = 0;
        }
    }

    if (isPalindrome) {
        printf("%d in base %d is palindrome\n", x, b);
    } else {
        printf("%d in base %d is NOT palindrome\n", x, b);
    }

    return 0;
}