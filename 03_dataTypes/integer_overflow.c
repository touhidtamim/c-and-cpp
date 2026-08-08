/* PROBLEM: 
A 32-bit signed int score is at its maximum value (2,147,483,647). 
If a player gains 1 more point, what happens to the score and why?

SOLUTION: 
It overflows and becomes -2,147,483,648. Adding 1 flips the sign bit 
to 1 in binary (Two's Complement), causing the value to wrap around.
*/

#include <stdio.h>

int main() {
   
    int broken_score = 2147483647;
    broken_score = broken_score + 1;
    printf("Broken Score (int): %d\n", broken_score);

    long long fixed_score = 2147483647LL;
    fixed_score = fixed_score + 1;
    printf("Fixed Score (long long): %lld\n", fixed_score);

    return 0;
}