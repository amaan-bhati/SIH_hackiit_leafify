#include <stdio.h>
#include <limits.h>

int findMinimumIndex(int arr[], int n) {
    int prefixSum = 0;
    int suffixSum = 0;
    int minIndex = -1;
    int minValue = INT_MAX;

    // Calculate the suffix sum
    for (int i = 0; i < n; i++) {
        suffixSum += arr[i];
    }

    // Calculate prefixSum(i) + suffixSum(i) for each index i
    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        suffixSum -= arr[i];
        int currentSum = prefixSum + suffixSum;

        // Update minimum value and its index
        if (currentSum < minValue) {
            minValue = currentSum;
            minIndex = i;
        }
    }

    return minIndex + 1; // Adding 1 to convert 0-based index to 1-based index
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int result = findMinimumIndex(arr, N);
        printf("%d\n", result);
    }

    return 0;
}
