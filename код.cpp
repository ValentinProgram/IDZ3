#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double R, p, q;
    cout << "Введите радиус шара R: ";
    cin >> R;
    cout << "Введите диагонали ромба p и q: ";
    cin >> p >> q;

    double h = (p * q) / sqrt(p * p + q * q);

    if (2 * R <= h) {
        cout << "может пройти" << endl;
    }
    else {
        cout << "не может пройти" << endl;
    }

    return 0;
}