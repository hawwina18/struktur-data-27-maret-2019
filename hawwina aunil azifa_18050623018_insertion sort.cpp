// HAWWINA AUNIL AZIFA
// NIM 18050623018
// D3 MANAJEMEN INFORMATIKA 2018
// STRUKTUR DATA 27 MARET 2019
#include<iostream>
using namespace std;
int main()
{
	int i,b,key, j,n,arr[100];

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"---------SORTING INSERTION SORT---------"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout<<"masukkan jumlah angka yang ingin diurutkan : ";
    cin>>n;
    for(int t=0;t<n;t++)
        {
            cout<<"masukan angka ke- " <<t+1<<" : ";
            cin >> arr[t];
        }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (i=0;i<n;i++)
        {
            cout<<endl<<endl;
            cout<<"hasil pengurutan data :\n ";
        while (i<n)
        {
            cout<<arr[i]<<", ";
            i++;
        }
        }
    return 0;
}
