// Bai 10
// Tran Huu Thanh - 23174800016
#include <iostream>
#include <vector>
#include <string>
#include <vector>
using namespace std;

class HocSinh
{
private:
    string maSo, hoTen, queQuan;
    float tongDiem;
    int n;
    vector<HocSinh> dsHocSinh;

public:
    void nhapN()
    {
        cout << "Nhap so hoc sinh : ";
        cin >> n;
        dsHocSinh.resize(n);
    }
    void nhapThongTinHocSinh()
    {
        for (int i = 0; i < this->n; i++)
        {
            HocSinh hs;
            cout << "Nhap thong tin hoc sinh thu " << i + 1 << endl;
            cout << "Ma so hoc sinh : ";
            cin >> hs.maSo;
            cout << "Ho ten hoc sinh : ";
            cin >> hs.hoTen;
            cout << "Que quan hoc sinh : ";
            cin >> hs.queQuan;
            cout << "Tong diem hoc sinh : ";
            cin >> hs.tongDiem;
            dsHocSinh[i] = hs;
            cout << endl;
        }
    }
    void XuatHocSinh()
    {
        for (int i = 0; i < this->n; i++)
        {
            for (int j = i + 1; j < this->n; j++)
            {
                if (dsHocSinh[i].tongDiem < dsHocSinh[j].tongDiem)
                {
                    HocSinh temp = dsHocSinh[i];
                    dsHocSinh[i] = dsHocSinh[j];
                    dsHocSinh[j] = temp;
                }
            }

            cout << "Danh sach hoc sinh co tong diem cao nhat : " << endl;
            cout << "Thong tin hoc sinh thu " << i + 1 << endl;
            cout << "Ma so hoc sinh : " << dsHocSinh[i].maSo << endl;
            cout << "Ho ten hoc sinh : " << dsHocSinh[i].hoTen << endl;
            cout << "Que quan hoc sinh : " << dsHocSinh[i].queQuan << endl;
            cout << "Tong diem hoc sinh : " << dsHocSinh[i].tongDiem << endl;
            cout << endl;
        }
    };
    void XuatDanhCacSinhVienQue()
    {

        for (int i = 0; i < this->n; i++)
        {
            if (dsHocSinh[i].queQuan == "NamDinh")
            {
                cout << "Danh sach hoc sinh co que quan NamDinh : " << endl;
                cout << "Thong tin hoc sinh thu " << i + 1 << endl;
                cout << "Ma so hoc sinh : " << dsHocSinh[i].maSo << endl;
                cout << "Ho ten hoc sinh : " << dsHocSinh[i].hoTen << endl;
                cout << "Que quan hoc sinh : " << dsHocSinh[i].queQuan << endl;
                cout << "Tong diem hoc sinh : " << dsHocSinh[i].tongDiem << endl;
                cout << endl;
            }
        }
    }
};
int main()
{
    HocSinh *hs = new HocSinh;
    hs->nhapN();
    hs->nhapThongTinHocSinh();
    hs->XuatHocSinh();
    hs->XuatDanhCacSinhVienQue();
    return 0;
}
