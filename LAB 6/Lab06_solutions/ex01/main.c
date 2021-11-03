#include <stdio.h>

#define N 5

int main() {
    int v[N];
    int isPalindrome = 1;

    for (int i=0; i<N; i++){
        scanf("%d", &v[i]);
    }


    for (int i=0; i<N/2 && isPalindrome; i++){
        if (v[i] != v[N-1-i])
            isPalindrome=0;
    }

    if (isPalindrome){
        printf("The array is palindrome\n");
    } else {
        printf("The array is NOT palindrome\n");
    }

    return 0;
}