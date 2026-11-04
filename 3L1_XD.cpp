#include <iostream>
#include <string>
using namespace std;
int main() {
    int rectangulo = 0, rect1 = 0, rect2 = 0, area = 0, suma = 0, cuadrado = 0;
    string areas = "";
    cin >> rectangulo;
    for (int i = 0; i < rectangulo; i++) {
        cin >> rect1;
        cin >> rect2;
        area = rect1 * rect2;
        suma += area;
        areas += to_string(area) + " ";
        if (rect1 == rect2) {
            cuadrado++;
        }
    }
    cout << areas << endl;
    cout << suma << " " << cuadrado;
    return 0;
}