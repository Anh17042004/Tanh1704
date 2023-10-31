#include<bits/stdc++.h>
#include<fstream>
using namespace std;

void nhap(int *a, int n)
{
    for(int i = 0; i<n; i++)
    {
        cin>>*(a+i);
    }
}
void xuat(int *a, int n)
{   
    for(int i = 0; i<n; i++)
    {
        cout<<*(a+i)<<" ";
    }
}
void sx(int *a, int n)
{   int tg = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(*(a+i)>*(a+j))
            {
                tg = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tg;
            }
        }
    }
    xuat(a,n);
}
void chen(int *a, int &n, int x)
{
    for(int i = 0; i<n; i++)
    {
        if(*(a+i) %2 == 0)
        {
            for(int j = n-1; j>=i; j--)
            {
                *(a+j+1) = *(a+j);
            }
            *(a+i) = x;
            n++;
            break;
        }
    }
    xuat(a,n);
}
void dichuyen(int *a, int n)
{
	int *b = new int[n];
	int k = 0;
	for(int i = 0; i<n; i++)
	{
		if(*(a+i) % 2 != 0)
		{
			*(b+k) = *(a+i);
			k++;
		}
	}
	for(int i = 0; i<n; i++)
	{
		if(*(a+i)%2 == 0)
		{
			*(b+k) = *(a+i);
			k++;
		}
	}
	xuat(b, k);
	delete[] b;
}
int main()
{
    int n;
    cout<<"\nNhap so luong phan tu mang: ";     
    cin>>n;
    int *a = new int[n];
    nhap(a, n);
    xuat(a,n);
    cout<<"\nMang a sau khi sap xep la: ";
    sx(a,n);
    int x;
    cout<<"\nNhap so nguyen x: ";
    cin>>x;
    cout<<"\nMang sau khi chen: ";
    chen(a,n,x);
    cout<<"\nMang sau khi di chuyen phan tu chan: ";
    dichuyen(a, n);
    delete[] a;

}
