// Bai 7
// Tran Huu Thanh - 23174800016
#include <iostream>
#include <vector>
using namespace std;
class SoPhuc
{
private:
    int n = 2;
    vector<float> thuc, ao;

public:
    SoPhuc()
    {
        thuc.resize(n); // Thiết lập kích thước cho vector thuc
        ao.resize(n);   // Thiết lập kích thước cho vector ao
    }
    NhapHaiSoPhuc()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap phan thuc va ao cua so phuc thu " << i + 1 << ": ";
            cin >> thuc[i] >> ao[i];
        }
    }
    InHaiSoPhuc()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "So phuc thu " << i + 1 << ": " << this->thuc[i] << "+" << this->ao[i] << "i" << endl;
        }
    }
    SumSoPhuc()
    {
        float sumThuc, sumAo;
        for (int i = 0; i < n; i++)
        {
            sumThuc += this->thuc[i];
            sumAo += this->ao[i];
        }
        cout << "Sum so phuc la : " << sumThuc << "+" << sumAo << "i" << endl;
    }
    HieuSoPhuc()
    {
        float sumThuc, sumAo;
        for (int i = 0; i < n; i++)
        {
            sumThuc = this->thuc[0] - this->thuc[1];
            sumAo = this->ao[0] - this->ao[1];
        }
        cout << "Hieu so phuc la : " << sumThuc << "+" << sumAo << "i" << endl;
    }
};
int main()
{
    SoPhuc sp;
    sp.NhapHaiSoPhuc();
    sp.InHaiSoPhuc();
    sp.SumSoPhuc();
    sp.HieuSoPhuc();
    return 0;
}