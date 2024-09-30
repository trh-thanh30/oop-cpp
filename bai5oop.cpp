// Bai 5
// Tran Huu Thanh - 23174800016
#include <iostream>
#include <vector>
using namespace std;

class Arr
{
private:
    vector<double> arr;
    int n;

public:
    void NhapN()
    {
        cout << "Nhap n: ";
        cin >> this->n;
        this->arr.resize(n);
    }
    void NhapArr()
    {
        for (int i = 0; i < this->n; i++)
        {
            cout << "Nhap phan tu thu " << i + 1 << ": ";

            cin >> this->arr[i];
        }
    }

    // Xuat ra cac so vua nhap
    void XuatArr()
    {
        for (int i = 0; i < this->n; i++)
        {
            cout << this->arr[i] << ", ";
        }
        cout << endl;
    }
    // Xuat ra mang nguoc lai
    void XuatArrNguoc()
    {
        for (int i = this->n - 1; i >= 0; i--)
        {
            cout << this->arr[i] << ", ";
        }
        cout << endl;
    }
    // Tim vi tri so dang nam trong o trong mang
    void TimViTriSo()
    {
        double so;
        cout << "So can tim la: ";
        cin >> so;
        for (int i = 0; i < this->n; i++)
        {
            if (this->arr[i] == so)
            {
                cout << "Vi tri cua so " << so << " trong mang la: " << i << endl;
            }
        }
    }

    // Sap xep mang tang dan
    void SapXepTangDan()
    {
        for (int i = 0; i < this->n; i++)
        {
            for (int j = i + 1; j < this->n; j++)
            {
                if (this->arr[i] > this->arr[j])
                {
                    double temp = this->arr[i];
                    this->arr[i] = this->arr[j];
                    this->arr[j] = temp;
                }
            }
            cout << this->arr[i] << ", ";
        }
    }
};
int main()
{
    Arr arr;
    arr.NhapN();
    arr.NhapArr();
    arr.XuatArr();
    arr.XuatArrNguoc();
    arr.TimViTriSo();
    arr.SapXepTangDan();
    return 0;
}
