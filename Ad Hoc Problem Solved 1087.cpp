#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned short x1, y1, x2, y2;

    while (true) {
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break;

        if (x1 == x2 && y1 == y2)
            cout << "0" << endl;
        else if (abs(x2 - x1) == abs(y2 - y1))
            cout << "1" << endl;
        else if (x1 == x2 || y1 == y2)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }

    return 0;
}
