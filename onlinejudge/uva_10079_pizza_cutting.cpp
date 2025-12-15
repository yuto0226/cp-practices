#include <iostream>

using namespace std;

int main() {
    long long num;
    while (cin >> num) {
        if (num < 0) break;
        cout << num * (num + 1) / 2 + 1 << endl;
    }
    return 0;
}
