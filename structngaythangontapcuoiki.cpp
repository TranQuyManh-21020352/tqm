#include<iostream>
#include<cmath>

using namespace std;

struct diem
{
    double x,y;
};
void nhapdiem(diem &dt)
{
    cin>>dt.x>>dt.y;
}
void xuatdiem(diem &dt)
{
    cout<<"("<<dt.x<<","<<dt.y<<")"<<endl;;
}
double khoangcach2canh(diem v1,diem v2)
{
    return sqrt(pow(v1.x - v2.x,2) + pow(v1.y - v2.y,2));
}

struct tamgiac{
  diem A;
  diem B;
  diem C;
};
void nhaptamgiac(tamgiac &tg)
{
    cout<<"nhap toa do diem A: ";
    nhapdiem(tg.A);
     cout<<"nhap toa do diem B: ";
    nhapdiem(tg.B);
     cout<<"nhap toa do diem C: ";
    nhapdiem(tg.C);

}
void xuattamgiac(tamgiac &tg)
{
    cout<<"xuat toa do diem A: ";
    xuatdiem(tg.A);
     cout<<"xuat toa do diem B: ";
    xuatdiem(tg.B);
    cout<<"xuat toa do diem C: ";
    xuatdiem(tg.C);

}
double dientich(tamgiac &td)
{
    double m = khoangcach2canh(td.A,td.B);
    double n = khoangcach2canh(td.A,td.B);
    double p = khoangcach2canh(td.B,td.C);
    double nuachuvi = (m + n + p) * 0.5;
    return sqrt(nuachuvi * (nuachuvi - m) * (nuachuvi - n) * (nuachuvi - p));
}
int main()
{
    tamgiac a;
    nhaptamgiac(a);
    xuattamgiac(a);
    cout<<"canh AB dai: "<<khoangcach2canh(a.A,a.B)<<endl;
    cout<<"canh BC dai: "<<khoangcach2canh(a.B,a.C)<<endl;
    cout<<"canh AC dai: "<<khoangcach2canh(a.A,a.C)<<endl;
    double m = khoangcach2canh(a.A,a.B);
    double n = khoangcach2canh(a.A,a.B);
    double p = khoangcach2canh(a.B,a.C);
    if(m + n > p && n + p > m && m + p >n)
    {
     cout<<dientich(a);
    }
}
