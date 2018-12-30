#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"**********PROGRAM MENENTUKAN BILANGAN YANG HABIS DIBAGI 5 & 3**********\n";
    cout<<"=======================================================================\n";
    cout<<"\nMasukkan Nilainya  : ";
    cin>>a;
    cout<<"===========================\n";
    if(a%3==0 && a%5==0)
        cout<<"Adalah Bilangan yang Habis Dibagi 5 dari 3 : ";
    else
        cout<<"Adalah Bilangan yang Bukan Habis Dibagi 5 dan 3 : ";
    return 0;

}
