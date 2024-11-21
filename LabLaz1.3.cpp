#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; // Кількість будинків
    double a, b; // Координати школи

    cout << "Введіть координати школи (a, b): ";
    cin >> a >> b;

    cout << "Введіть кількість будинків (n <= 100): ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Некоректне значення n. Програма завершується.\n";
        return 1;
    }

    double x[100], y[100]; // Координати будинків
    cout << "Введіть координати будинків (x, y):\n";
    for (int i = 0; i < n; ++i) {
        cout << "Будинок " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    double totalDistance = 0.0; // Загальна відстань
    for (int i = 0; i < n; ++i) {
        double distance = sqrt(pow(x[i] - a, 2) + pow(y[i] - b, 2));
        totalDistance += distance;
    }

    double averageDistance = totalDistance / n; // Середня відстань
    cout << "Середня відстань від будинків до школи: " << averageDistance << endl;

    return 0;
}
