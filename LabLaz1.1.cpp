#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int N;
    cout << "Введіть розмір масиву N: ";
    cin >> N;

    int A[N]; 
    int B[N]; 
    int newSize = 0; 

    
    cout << "Початковий масив:\n";
    for (int i = 0; i < N; ++i) {
        A[i] = rand() % 21 - 10; 
        cout << A[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < N; ++i) {
        if (A[i] >= 0) {
            B[newSize] = A[i];
            newSize++;
        }
    }

    
    cout << "Масив після вилучення від’ємних елементів:\n";
    for (int i = 0; i < newSize; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
