#include<iostream>
#include<string>

using namespace std;

struct dathuc{
int bac;
double heso[100];
void print()
{
    for(int i = 0; i<= bac;i++ )
    {
        if(heso[i] == 0)
        {
            continue;
        }
        if(i == 0){
        cout<<heso[i]<<"x^"<<bac-i<<" ";
        }
        else if(i > 0 && i < bac)
        {
            if(heso[i] > 0)
            {
                cout<<"+ "<<heso[i]<<"x^"<<bac-i<<" ";
            }
            else
            {
                cout<<"- "<<(-heso[i])<<"x^"<<bac-i<<" ";
            }

        }
        else if(i == bac)
        {
            if(heso[i] > 0)
            {
                cout<<"+ "<<heso[i];
            }
            else
            {
                cout<<"- "<<(-heso[i]);
            }
        }
    }

}
};

void nhap(dathuc &dt)
{
    cout<<"Bac cua da thuc la: ";
    cin>>dt.bac;
    for(int i = 0; i <= dt.bac; i++)
    {
        cout<<"Nhap he so bac "<<dt.bac - i<<" la: ";
        cin>>dt.heso[i];
    }
}
void tong_2_dathuc(dathuc &A, dathuc &B,dathuc &C)
{
     if(A.bac > B.bac)
    {
        C.bac= A.bac;
        int k = A.bac - B.bac;
        for(int i = 0; i<k;i++)
        {
            C.heso[i] = A.heso[i];
        }
        for(int i = k;i<= A.bac;i++)
        {
            C.heso[i] = A.heso[i] + B.heso[i-k];
        }

    }
     if(A.bac <= B.bac)
    {
        C.bac = B.bac;
        int k = B.bac - A.bac;
        for(int i = 0; i<k;i++)
        {
            C.heso[i] = B.heso[i];
        }
        for(int i = k;i<= B.bac;i++)
        {
            C.heso[i] = A.heso[i-k] + B.heso[i];
        }

    }
}
void hieu_2_dathuc(dathuc &A, dathuc &B,dathuc &C)
{
     if(A.bac > B.bac)
    {
        C.bac= A.bac;
        int k = A.bac - B.bac;
        for(int i = 0; i<k;i++)
        {
            C.heso[i] = A.heso[i];
        }
        for(int i = k;i<= A.bac;i++)
        {
            C.heso[i] = A.heso[i] - B.heso[i-k];
        }

    }
     if(A.bac <= B.bac)
    {
        C.bac = B.bac;
        int k = B.bac - A.bac;
        for(int i = 0; i<k;i++)
        {
            C.heso[i] = -(B.heso[i]);
        }
        for(int i = k;i<= B.bac;i++)
        {
            C.heso[i] = A.heso[i-k] - B.heso[i];
        }

    }
}
void tich_2_dathuc(dathuc &A, dathuc &B,dathuc &C)
{
    for(int i = 0; i <= C.bac; i++)
    {
        for(int j = 0; j <= A.bac; j++)
        {
            for(int k = 0; k <= B.bac; k++)
            {
                if(j + k == i)
                {
                    C.heso[i] = C.heso[i] + A.heso[j] * B.heso[k];
                }
            }
        }
    }
}

int main()
{
   dathuc A,B;
   nhap(A);
   cout<<endl;
   nhap(B);
   dathuc C;
   tong_2_dathuc(A,B,C);
   cout<<"tong cua 2 da thuc la: ";
    C.print();
    cout<<endl;
    cout<<"hieu cua 2 da thuc la: ";
    hieu_2_dathuc(A,B,C);
    C.print();
    dathuc D;
    D.bac = A.bac + B.bac;
    for(int i = 0; i <= D.bac;i++)
    {
        D.heso[i] = 0;
    }
    tich_2_dathuc(A,B,D);
    cout<<endl;
    cout<<"tich 2 da thuc la: "<<endl;
    D.print();
    return 0;
}
