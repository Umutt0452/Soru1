#include <stdio.h>

int main() {
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 }; 
    int n = sizeof(arr) / sizeof(int); 
    int freq[n]; 

    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d →%d\n", i, freq[i]);
        }
    }
    return 0;
}
