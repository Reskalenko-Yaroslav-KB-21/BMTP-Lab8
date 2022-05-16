#include <iostream>
#include <cmath>
#include <math.h>
#include "moduleReskalenko.h"

using namespace std;

void Autor(){
    cout << "Reskalenko Yaroslav©" << endl;
}

void logic(int a, int b){
    if ((a)<=(b-32))
    {
        cout << "1" << endl;
    }
    else cout << "0" << endl;
}

float convert(int x, int y, int z)
{
    cout << "„исло x в дес€тков≥й систем≥ численн€ дор≥внюЇ " << x << endl;
    cout << "„ислo x в ш≥стнадц€тков≥й систем≥ численн€ дор≥внюЇ " << hex << x << endl;
    cout << "„исло y в дес€тков≥й систем≥ численн€ дор≥внюЇ " << y << endl;
    cout << "„ислo y в ш≥стнадц€тков≥й систем≥ численн€ дор≥внюЇ " << hex << y << endl;
    cout << "„исло z в дес€тков≥й систем≥ численн€ дор≥внюЇ " << z << endl;
    cout << "„ислo z в ш≥стнадц€тков≥й систем≥ численн€ дор≥внюЇ " << hex << z << endl;
    float S = s_calculation(x, y, z);

    return S;
}

int main()
{
    system("chcp 1251 && cls");
    Autor();
    int a, b;
    int x, y, z;
    cout << "¬вед≥ть а : ";
    cin >> a;
    cout << "¬вед≥ть b : ";
    cin >> b;
    cout << "¬вед≥ть x : ";
    cin >> x;
    cout << "¬вед≥ть y : ";
    cin >> y;
    cout << "¬вед≥ть z : ";
    cin >> z;
    logic(a, b);
    cout << convert(x, y, z) << endl;
    system("pause");
    return 0;
}
