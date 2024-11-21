#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits> 
using namespace std;

int main() {
    srand(time(0)); 

    int N, T;
    cout << "Введіть розмір масиву N: ";
    cin >> N;
    cout << "Введіть значення T: ";
    cin >> T;

    int A[N];
    int* pA = A; 
    int maxNegative = INT_MIN; 
    int maxIndex = -1;         


    cout << "Масив A:\n";
    for (int i = 0; i < N; ++i) {
        *(pA + i) = rand() % 21 - 10; 
        cout << *(pA + i) << " ";
    }
    cout << endl;

    
    int* pT = nullptr; 
    for (int i = 0; i < N; ++i) {
        if (*(pA + i) == T) {
            pT = pA + i; 
            break;
        }
    }

    if (pT == nullptr) {
        cout << "Елемент, рівний T, не знайдено.\n";
        return 0;
    }

    
    for (int* pCurrent = pA; pCurrent < pT; ++pCurrent) {
        if (*pCurrent < 0 && *pCurrent > maxNegative) {
            maxNegative = *pCurrent;
            maxIndex = pCurrent - pA; 
        }
    }

    
    if (maxIndex != -1) {
        cout << "Номер першого максимального від'ємного елемента: " << maxIndex << endl;
        cout << "Максимальне від'ємне значення: " << maxNegative << endl;
    } else {
        cout << "Від’ємні елементи до T не знайдено.\n";
    }

    return 0;
}

