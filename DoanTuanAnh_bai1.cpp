#include<bits/stdc++.h>
using namespace std;

void nhap(float &x, int &n)
{
    cout<<"\nNhap so thuc x: ";
    cin>>x;
    do
    {	
		cout<<"\nNhap so nguyen n: ";
        cin>>n;
    }while(n<=0);
}
double fx(float x, int n)
{   
	double tong = 2020*x;
    if(n>=3)
	{
        for(int i = 1; i<=n; i++)
            tong += pow(2,i);
        return tong;
	}
    else 
        return pow(x,n)*sin(x);
}

double Sx(float x, int n)
{
    double tong = 0;
    for(int i = 1; i<=n; i++)
        tong += fx(x, i);
    return tong;
}
main()
{
    float x;
    int n;
    nhap(x, n);
   	cout<<"\nGia tri cua ham S(x,n) = "<<setprecision(4)<<fixed<<Sx(x,n);
}
