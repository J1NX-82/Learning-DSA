#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input number of requests
    
    int requests[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &requests[i]);  // Input each request
    }

    int server1_memory = 0;  // Initialize memory count for server 1

    for (int i = 0; i < n; i++) {
        if (requests[i] > 0) {
            server1_memory += requests[i];  // Allocate memory
        } else if (requests[i] < 0 && server1_memory >= -requests[i]) {
            server1_memory += requests[i];  // Deallocate memory
        }
    }

    printf("%d\n", server1_memory);  // Output total memory allocated/deallocated by server 1

    return 0;
}
