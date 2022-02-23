#include <iostream>
#include<string>
#include<conio.h>

using namespace std;
struct sinhvien
    {
       string mssv;
       string hoten;
       double ktlt;
       double ctdl;

    };
    typedef struct sinhvien SV;
    void nhap_thong_tin_sinh_vien(SV &sv)
    {
        while(getchar() != '\n');
        do
        {
            cout<<"nhap ma so sinh vien: ";
            getline(cin,sv.mssv);

            if(sv.mssv.size()>20)
            {
                cout<<"vui long nhap lai"<<endl;
            }
        }
        while(sv.mssv.size()>20);
        do
        {
            cout<<"nhap ho ten sin vien: ";
            getline(cin,sv.hoten);
            if(sv.hoten.size()>30)
            {
                cout<<"vui long nhap lai"<<endl;
            }
        }

        while(sv.hoten.size()>30);
        cout<<"nhap diem kiem tra ly thuyet: ";
        cin>>sv.ktlt;
        cout<<"nhap diem cau truc du lieu va giai thuat: ";
        cin>>sv.ctdl;
    }
    void xuat_thong_tin_sinh_vien(SV &sv)
    {
        cout<<"| ma so sinh vien:";
        cout<<sv.mssv<<"               |"<<endl;
        cout<<"| ho ten sin vien: ";
        cout<<sv.hoten<<"           |"<<endl;
        cout<<"| diem kiem tra ly thuyet: ";
        cout<<sv.ktlt<<"             |"<<endl;
        cout<<"| diem cau truc du lieu va giai thuat: ";
        cout<<sv.ctdl<<" |"<<endl;
        cout<<"==========================================="<<endl;

    }
struct DANHSACH
{
    SV *ds_sv[100];
    int n;
};
typedef struct DANHSACH danhsach;
void xuat_danh_sach_sinh_vien(danhsach &ds)
{
    for(int i=0;i<ds.n;i++)
    {
        cout<<"\n\n\t\t thong tin sinh vien thu: "<<i+1<<endl;
        xuat_thong_tin_sinh_vien(*ds.ds_sv[i]);
    }
}
void menu(danhsach &ds)
{
    int luachon;
    while(true)
    {
        system("cls");//xóa màn hình
       cout<<"\n\n\t\t ======= QUAN LY SINH VIEN =======\n";
       cout <<"\n\t1.Them thong tin sinh vien";
       cout<<"\n\t2.Xuat thong tin sinh vien";
       cout <<"\n\t0.Ket thuc";
       cout<< "\n\n\t\t ============= END ===============";
       cout<<"\n Nhap lua chon: "<<endl;
       cin>>luachon;
       if(luachon == 1)
       {
           SV *x = new SV;
           nhap_thong_tin_sinh_vien(*x);
           ds.ds_sv[ds.n] = x;
           ds.n++;
       }
       else if(luachon==2)
       {
           cout<<"\n\n\t\t Danh sach sinh vien";
           xuat_danh_sach_sinh_vien(ds);
           system("pause");
       }
       else
       {
           break;
       }
    }
}

int main()
{
    danhsach ds;
    ds.n=0;
    menu(ds);
    for(int i=0;i<ds.n;i++)
    {
        delete ds.ds_sv[i];
    }
    return 0;
}

