#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int input[N-1];
    for (int i = 0; i < N; i++) {
        scanf("%d", &input[i]);
    }
    
    int maxEven = 0;
    for (int i = 0; i < N; i++) {
        if ((input[i] % 2 == 0) &&
            (input[i] > maxEven)) {
            maxEven = input[i];
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j<N; j++) {
            if ((input[i] + input[j]) % 2 == 0) {
                if ((input[i] + input[j] > maxEven)) {
                    maxEven = (input[i] + input[j]);
                }
            }
        }
    }
    printf("%d", maxEven);
    return 0;
}