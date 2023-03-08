#include <iostream>
using namespace std;

int find_second_largest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int second_largest = find_second_largest(arr, n);
    cout << "The second-largest element in the array is " << second_largest << endl;
    return 0;
}
