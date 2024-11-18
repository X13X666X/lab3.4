#include <iostream>;
#include <cmath>;

using namespace std;

int main() {
    double x, y, R1, R2;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    double distanceSquared = x * x + y * y;

    bool A = (distanceSquared >= pow(R1, 2) && distanceSquared <= pow(R2, 2) && x > 0 && y > 0);
    bool B = (distanceSquared >= pow(R1, 2) && distanceSquared <= pow(R2, 2) && x < 0 && y < 0);

    if ((distanceSquared >= R1 * R1 && distanceSquared <= R2 * R2) &&
        ((x > 0 && y > 0) || (x < 0 && y < 0))) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}
