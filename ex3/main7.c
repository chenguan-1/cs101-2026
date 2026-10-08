#include <stdio.h>
int main() {
    int i = 1699; 
    if (i <= 1500) {
        printf("70元\n");
    } 
    else {
        int extra_dist = i - 1500;
        int periods = extra_dist / 100;
        if (extra_dist % 100 != 0) {
            periods++;
        }
        int total_fee = 70 + (periods * 10);
        printf("%d元\n", total_fee);
    }
    return 0;
}
