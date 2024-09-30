// Tran Huu Thanh - 
#include <iostream>
#include <vector>
using namespace std;

class HangHoa
{
private:
    char maHang;
    string tenHang;
    int soLuong;
    float donGia, thanhTien;

public:
    void Input()
    {
        cout << "Ma hang: ";
        cin >> this->maHang;
        cout << "Ten hang: ";
        cin >> this->tenHang;
        cout << "So luong: ";
        cin >> this->soLuong;
        cout << "Don gia: ";
        cin >> this->donGia;
        this->thanhTien = this->soLuong * this->donGia;
        cout << "Thanh tien: " << this->thanhTien << endl;
    }

    void Output()
    {
        cout << "Ma hang: " << this->maHang << endl;
        cout << "Ten hang: " << this->tenHang << endl;
        cout << "So luong: " << this->soLuong << endl;
        cout << "Don gia: " << this->donGia << endl;
        cout << "Thanh tien: " << this->thanhTien << endl;
    }

    // Thêm hàm getter cho donGia
    float getDonGia()
    {
        return this->donGia;
    }
};

class DanhSachHangHoa
{
private:
    vector<HangHoa> hh;
    int n;

public:
    void NhapSoLuong()
    {
        cout << "So luong hang hoa: ";
        cin >> this->n;
        hh.resize(n); // Đặt kích thước của vector hh
    }

    void Nhap()
    {
        for (int i = 0; i < this->n; i++)
        {
            cout << "Nhap thong tin hang hoa thu " << i + 1 << endl;
            hh[i].Input(); // Lưu dữ liệu trực tiếp vào phần tử của vector
        }
    }

    void DonGiaLon()
    {
        cout << "Cac hang hoa co don gia lon hon 50 la: " << endl;
        for (int i = 0; i < this->n; i++)
        {
            if (this->hh[i].getDonGia() > 50) // Sử dụng hàm getter thay vì truy cập trực tiếp
            {
                this->hh[i].Output();
            }
        }
    }
};

int main()
{
    DanhSachHangHoa dshh;
    dshh.NhapSoLuong();
    dshh.Nhap();
    dshh.DonGiaLon();
    return 0;
}
