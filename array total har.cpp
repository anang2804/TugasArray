#include<iostream>
using namespace std;

int main(){
    int jml_item;
    cout<<"isikan jumlah item = ";
    cin>>jml_item;
    int harga[jml_item];
    int total;
     for(int b = 0; b < jml_item; b++){
     	cout<<"item ke-"<<b<<" = ";
	    cin>>harga[b];
	}
	cout<<"==============================="<<endl;
	cout<<"jumlah item = "<<jml_item<<endl;
     for(int a = 0; a < jml_item; a++){
     	cout<<"item ke-"<<a<<" = Rp "<<harga[a]<<endl;
        total += harga[a];
    }
    cout<<"==============================="<<endl;
    cout<<"total harga = Rp. "<<total<<endl;
}
