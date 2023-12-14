#include <stdio.h>

int main() {
    printf("Please enter '1' and '0': ");
    
    int a[100], i;

    for(i = 0; i < 100; i++) {
        scanf("%d", &a[i]);
    }

    printf("Searching for '101'...\n");

    
    for(i = 0; i < 98; i++) {
        if(a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1) {
            printf("'101' found at index %d.\n", i);
        }
    }

    return 0;
}
