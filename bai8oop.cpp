#include <iostream>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction addFractions(Fraction a, Fraction b)
{
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return result;
}

int main()
{
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;

    Fraction sum = {0, 1};
    for (int i = 0; i < n; i++)
    {
        Fraction temp;
        cout << "Nhap phan so thu " << i + 1 << " (tu so va mau so): ";
        cin >> temp.numerator >> temp.denominator;

        sum = addFractions(sum, temp);
    }

    cout << "Tong cac phan so: " << sum.numerator << "/" << sum.denominator << endl;

    return 0;
}
