#include <iostream>
#include <string>

using namespace std;

string solve(int n, string a) {
    string result = "";
    int num_neg = 0;
    for (int i = 1; i < n; i++) {
        if (num_neg < i) {
            result += "-";
            num_neg++;
        } else {
            result += "+";
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        string a;
        cin >> n;
        cin >> a;
        string result = solve(n, a);
        cout << result << endl;
    }
    return 0;
}
