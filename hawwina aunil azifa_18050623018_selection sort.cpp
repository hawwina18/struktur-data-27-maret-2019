// HAWWINA AUNIL AZIFA
// NIM 18050623018
// D3 MANAJEMEN INFORMATIKA 2018
// STRUKTUR DATA 27 MARET 2019
#include <iostream>

using namespace std;
int main()
{
    int a,b,temp,arr[100];

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"---------SORTING SELECTION SORT---------"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout<<"masukkan jumlah angka yang ingin diurutkan : ";
    cin>>b;
    for(int j=0;j<b;j++)
        {
            cout<<"masukan angka ke- " <<j+1<<" : ";
            cin >> arr[j];
        }

    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b-1;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(a=0;a<b;a++)
    {
        cout<<endl<<endl;
        cout<<"hasil pengurutan data :\n ";
        while (a<b)
        {
            cout<<arr[a]<<", ";
            a++;
        }
    }
    return 0;
}
