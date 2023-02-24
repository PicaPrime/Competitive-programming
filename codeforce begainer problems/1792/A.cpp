#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        int arr[n];
        int ones = 0;
        int result = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                ones++;
            }
        }

        if (ones != 0 && ones != 1) {
            result = floor(ones / 2);
            if (ones % 2 == 1) {
                result += 1;
            }
        }

        result = n - result;
        cout << result << endl;
        t--;
    }

    return 0;
}
