#include <stdio.h>
#include <math.h>


/* Assume sin(v1) < sin(v2) and monotone between v1, v2
 *
 * This function is NOT complete,
 *
 * TO THINK:
 * 1. what if last iteration ans+e > v2
 * 2. what if k < sin(v1) or k > sin(v2)
 * */

double invsin(double v1, double v2, double k, double e){
    for (double ans = v1; ans < v2; ans += e){
        if (sin(ans) < k && sin(ans+e)>k) {
            return ans;
        }
    }

    return -1;
}

int main() {
    double z1, z2, k, e;
    printf("Input z1, z2, k and e (double): ");
    scanf("%lf%lf%lf%lf", &z1, &z2, &k, &e);

    /* The program only works when the point 1 and 2 do not happen with the value user enters */
    printf("result is %lf\n", invsin(z1, z2, k, e));
    return 0;
}