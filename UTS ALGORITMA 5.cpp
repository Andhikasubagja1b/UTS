#include <iostream>
using namespace std;


double tinggi,berat,imt;

int main()
{
    cout << "Calculator IMT"<<endl;
    cout << "Masukkan berat badan Anda (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan Anda (meter): ";
    cin >>tinggi;

    imt = berat / (tinggi*tinggi);

    if (imt<18.4){
        cout<<"Berat badan kurang"<<endl;
    }else if(imt>=18.5 && imt<24.9){
        cout<<"Berat badan ideal"<<endl;
    }else if(imt>=25 && imt<29.9){
        cout<<"Berat badan lebih"<<endl;
    }else if(imt>=30 && imt<39.9){
        cout<<"Gemuk"<<endl;
    }else if(imt>=40){
        cout<<"Sangat Gemuk"<<endl;
    }else{
        cout<<"Obesitas"<<endl;
    }
    return 0;
}
