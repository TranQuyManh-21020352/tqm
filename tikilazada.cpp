#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
/*
  struct Sinhvie
  {
      string hoten;
      string mssv;
      float diem;
  };

void nhapthongtin(struct Sinhvien &sv)
{
    fflush(stdin);//xóa bộ đệm
    cout<<"Nhap ho ten sinh vien: "<<endl;
    getline(cin,sv.hoten);
    cout<<"Nhap ma so sinh vien: "<<endl;
    getline(cin,sv.mssv);
    fflush(stdin);
    cout<<"tuoi: ";
    cin>>sv.diem;


}
void xuatthongtin(struct Sinhvien &sv)
{
    //xóa bộ đệm
    cout<<"Ho ten sinh vien: "<<sv.hoten<<endl;
    cout<<"Ma so sinh vien: "<<sv.mssv<<endl;
   cout<<sv.diem<<" tuoi"<<endl;
}
int main()
{
struct Sinhvien x;
struct Sinhvien y;
struct Sinhvien z;

// khai báo ra một thằng sịn viên x
cout<<"Nhap thong tin sinh vien"<<endl;
nhapthongtin(x);
y=x;
z=y;
cout<<"Xuat thong tin sinh vien"<<endl;
xuatthongtin(z);
}
*/
struct toado
{
float x;
float y;
};
typedef struct toado TOADO;
void nhap_toa_do(TOADO &td)
{
    cout<<"Nhap vao diem x: ";
    cin>>td.x;
    cout<<"Nhap vao diem y: ";
    cin>>td.y;

}
void xuat_toa_do(TOADO &td)
{
    cout<<"("<<td.x<<","<<td.y<<")"<<endl;

}
float tinh_do_dai(TOADO A,TOADO B)
{

    return sqrt( pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
struct tamgiac
{
    TOADO A;
    TOADO B;
    TOADO C;
};
typedef struct tamgiac TAMGIAC;
void nhap_tam_giac(TAMGIAC &tg)
{
    nhap_toa_do(tg.A);
    nhap_toa_do(tg.B);
    nhap_toa_do(tg.C);

}
void xuat_tam_giac(TAMGIAC &tg)
{
    cout<<"toa do diem A: ";
    xuat_toa_do(tg.A);
    cout<<"toa do diem B: ";
    xuat_toa_do(tg.B);
    cout<<"toa do diem C: ";
    xuat_toa_do(tg.C);
}
int main()
{
    TAMGIAC tg;
    nhap_tam_giac(tg);
    xuat_tam_giac(tg);
    cout<<"Do dai canh AB: "<< tinh_do_dai(tg.A,tg.B)<<endl;
    cout<<"Do dai canh BC: "<<tinh_do_dai(tg.B,tg.C)<<endl;
    cout<<"Do dai canh AC: "<<tinh_do_dai(tg.A,tg.C)<<endl;

}
