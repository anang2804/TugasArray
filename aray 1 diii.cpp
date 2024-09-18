#include<iostream>
using namespace std;

int main(){
	int jml_arr;
    cout<<"jumlah index : ";
    cin>>jml_arr;
    
    int angka[jml_arr];
    
    for(int a = 0; a < jml_arr; a++){
        cout<<"masukan nilai indek ke-"<<a<<" : ";
        cin>>angka[a];
    }
    cout<<"============================================"<<endl;
    cout<<"nilai yang tersimpan"<<endl;
    cout<<"============================================"<<endl;
    for(int b = 0; b < jml_arr; b++){
        cout<<"index ke-"<<b<<" : "<<angka[b]<<endl;
    }
}
