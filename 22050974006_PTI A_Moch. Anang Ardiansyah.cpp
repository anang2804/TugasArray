#include<iostream>                 //Moch. Anang Ardiansyah / PTI A 2022 / 006//
using namespace std;

int main(){
	
	int k;             
	int u;            
	int jumlah;      
	char munculkan; 
	double total;    
	
	
	cout<<"========================================================"<<endl;
	cout<<"                 Mengitung Nilai Akhir"<<endl;
	cout<<"========================================================"<<endl;
	
	
	cout<< " masukan jumlah siswa : ";
	cin>>jumlah;
	
	string  nama[2][5];  
	double nilai[3][5]; 
	cout << endl;
	
	for (int k = 0; k < jumlah ; k++)
	{
		cout << "---Data Mahasiswa " << k + 1 << "---" << endl;
		cout<< "masukkan namamuu     = ";
		cin>> nama[0][k];
		cout<< "NIM mu berapa        = ";
		cin>> nama[1][k];
		cout<< "Nilai tugasmu berapa = ";
		cin>> nilai[0][k];
		cout<< "Nilai UTSmu berapa   = ";
		cin>> nilai[1][k];
		cout<< "Nilai UASmu berapa   = ";
		cin>> nilai[2][k];
		cout<<endl;
	}
	
	cout<< "Semua data telah dimasukan, apakah inginn memunculkan? (y/n) :";
	cin>> munculkan;
	
	if (munculkan == 'y'){
		//Codingan untuk menampilkan hasil yang diinputkan user
		cout<< "nama" << "              " << "NIM" << "                 " << "TUGAS" << "       " << "UTS" << "        " << "UAS" << "       " << "NA"<< "       "<<endl;
		cout<< "================================================================================="<<endl;
		for (u= 0; u < jumlah; u++){
			total = ((3*nilai[0][u])+(3*nilai[1][u])+(4*nilai[2][u]))/10;
			cout <<nama[0][u]<<"            " << nama[1][u]<<"              " << nilai[0][u]<< "     " << nilai[1][u]<< "     " << nilai[2][u]<< "     " <<total<< "     "<<endl;
		}
	}
	else {
		cout<< " THANKYOU :) "<< endl;
	}
	return 0;
}
