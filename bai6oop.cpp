// Bai 6
// Tran Huu Thanh - 23174800016
#include <iostream>
#include <limits>
using namespace std;

void NhapMaTran(int mat[][100], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "Nhap phan tu [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void InMaTran(int mat[][100], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void TinhTongMaTran(int mat1[][100], int mat2[][100], int m, int n)
{
    int sum[100][100];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "Tong cua hai ma tran:\n";
    InMaTran(sum, m, n);
}

void TinhTichMaTran(int mat1[][100], int mat2[][100], int m, int n)
{
    int product[100][100];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            product[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    cout << "Tich cua hai ma tran:\n";
    InMaTran(product, m, n);
}

void TimMaxMin(int mat[][100], int m, int n, int &max, int &min)
{
    max = numeric_limits<int>::min();
    min = numeric_limits<int>::max();
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mat[i][j] > max)
                max = mat[i][j];
            if (mat[i][j] < min)
                min = mat[i][j];
        }
    }
}

int main()
{
    int m, n;
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    int mat1[100][100], mat2[100][100];

    cout << "Nhap ma tran 1:\n";
    NhapMaTran(mat1, m, n);

    cout << "Nhap ma tran 2:\n";
    NhapMaTran(mat2, m, n);

    cout << "\nMa tran 1:\n";
    InMaTran(mat1, m, n);

    cout << "\nMa tran 2:\n";
    InMaTran(mat2, m, n);

    TinhTongMaTran(mat1, mat2, m, n);
    TinhTichMaTran(mat1, mat2, m, n);

    int max1, min1, max2, min2;
    TimMaxMin(mat1, m, n, max1, min1);
    TimMaxMin(mat2, m, n, max2, min2);

    cout << "Phan tu lon nhat trong ma tran 1: " << max1 << endl;
    cout << "Phan tu be nhat trong ma tran 1: " << min1 << endl;
    cout << "Phan tu lon nhat trong ma tran 2: " << max2 << endl;
    cout << "Phan tu be nhat trong ma tran 2: " << min2 << endl;

    return 0;
}
