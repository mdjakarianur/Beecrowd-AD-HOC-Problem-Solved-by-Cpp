#include <iostream>
using namespace std;

int josephus(int n, int k);

int main() {
    int tcase, n, k;
    while (cin >> tcase) {
        for (int i = 1; i <= tcase; i++) {
            cin >> n >> k;
            int result = josephus(n, k);
            cout << "Case " << i << ": " << result << endl;
        }
    }
    return 0;
}

int josephus(int n, int k) {
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}
