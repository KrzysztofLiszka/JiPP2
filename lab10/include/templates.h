#include <iostream>

using namespace std;

template<typename T>
T minValue(T a, T b) {
    if(a>b) return b;
    else return a;
}

template<typename T>
T maxValue(T a, T b) {
    if(a>b) return a;
    else return b;
}

template<typename T>
T printArray(T *arr, int k) {
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    cout << endl;
}
template<typename T>
T printMatrix(T **arr, int w, int k) {
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}