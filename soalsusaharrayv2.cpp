#include <iostream>
using namespace std;

int min_operations_to_permutation(int arr[], int n) {
    int count = 0;
    int i = 1;
    while (i <= n) {
        if (arr[i-1] != i) {
            int j = i;
            while (j < n && arr[j] != i) {
                j++;
            }
            for (int k = i-1; k < j; k++) {
                for (int l = k+1; l <= j; l++) {
                    if (arr[k] > arr[l]) {
                        swap(arr[k], arr[l]);
                    }
                }
            }
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    int arr[] = {3, 4, 1, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = min_operations_to_permutation(arr, n);
    cout << "Minimum number of operations: " << count << endl;
    return 0;
}
