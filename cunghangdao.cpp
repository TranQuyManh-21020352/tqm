#include <iostream>
using namespace std;

int main()
{




    int ngaythu,ngay,thang;
    cin >>ngay >>thang;
    {if(thang==1)

           ngaythu = ngay+0;

    else if(thang==2)
        ngaythu= ngay+31;
         else if(thang==3)
        ngaythu= ngay+59;
         else if(thang==4)
        ngaythu= ngay+90;
         else if(thang==5)
        ngaythu= ngay+120;
         else if(thang==6)
        ngaythu= ngay+151;
         else if(thang==7)
        ngaythu= ngay+181;
         else if(thang==8)
        ngaythu= ngay+212;
         else if(thang==9)
        ngaythu= ngay+243;
         else if(thang==10)
        ngaythu= ngay+273;
         else if(thang==11)
        ngaythu= ngay+303;
         else if(thang==12)
        ngaythu= ngay+334;

    if( 1<= ngaythu <=19 || 356<=ngaythu<=365)
        cout <<"Ma Ket"<<endl;
        else if(20<= ngaythu <= 49)
        cout <<"Bao Binh"<<endl;
        else if(50<= ngaythu <=79 )
        cout <<"Song Ngu"<<endl;
        else if(80<= ngaythu <=109 )
        cout <<"Bach Duong"<<endl;
        else if(110<= ngaythu <=140 )
        cout <<"Kim Nguu"<<endl;
        else if(141<= ngaythu <=172 )
        cout <<"Song Tu"<<endl;
        else if(173<= ngaythu <=203 )
        cout <<"Cu Giai"<<endl;
        else if(204<= ngaythu <=234 )
        cout <<"Su Tu"<<endl;
        else if(235<= ngaythu <=265 )
        cout <<"Xu Nu"<<endl;
        else if(266<= ngaythu <=296 )
        cout <<"Thien Binh"<<endl;
        else if(297<= ngaythu <=325 )
        cout <<"ThienYet"<<endl;
        else if(326<= ngaythu <=355 )
        cout <<"Nhan Ma"<<endl;}

}

