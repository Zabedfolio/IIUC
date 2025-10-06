#include <iostream>
using namespace std;

bool binarysearch(long long arr[], int n, long long x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return true;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long query;
    for (int i = 0; i < k; i++) {
        cin >> query;
        if (binarysearch(arr, n, query))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
