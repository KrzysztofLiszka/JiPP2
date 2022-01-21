#include <iostream>
#include "../include/templates.h"

using namespace std;

int main() {
    cout << "Minimalna wartosc z 3, 10: " << minValue(3, 10) << endl;
    cout << "Minimalna wartosc z 3.1, 10.2: " << minValue(3.1, 10.2) << endl;
    cout << "Minimalna wartosc z c i d: " << minValue('c', 'd') << endl;

    cout << "Maksymalna wartosc z 3, 10: " << maxValue(3, 10) << endl;
    cout << "Maksymalna wartosc z 3.1, 10.2: " << maxValue(3.1, 10.2) << endl;
    cout << "Maksymalna wartosc z c i d: " << maxValue('c', 'd') << endl;
    return 0;
}
