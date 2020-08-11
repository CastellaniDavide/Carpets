/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

int R, C, K;
int i, j, value;

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(3 == scanf("%d %d %d", &R, &C, &K));
    for(i=0; i<R; i++)
        for(i=0; i<C; i++) {
            assert(1 == scanf("%d", &value));
            // insert your code here
        }

    // change the following lines with actual answers
    for(i=1; i<=K; i++)
        printf("%d %d %d %d\n", 42, 42, 42, 42);
    return 0;
}
