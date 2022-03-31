#include <iostream>
using namespace std;

int main() {
	string barang[50];
	int jumlah[50], harga[50], hasil[50];
	int pil, total, bayar, kembali;
	
	cout<<"= MINIMARKET ="<<endl<<endl;
	
	int a = 1;
	while(true) {
		cout<<"Silahkan Pilih"<<endl;
		cout<<"1. Masukkan Data"<<endl;
		cout<<"2. Akhir Program"<<endl;
		cout<<"Pilih : ";
		cin>>pil;
		cout<<"==========================="<<endl;
		
		if(pil == 1) {
			cout<<"Nama Barang   : ";
			cin>>barang[a];
			cout<<"Jumlah Barang : ";
			cin>>jumlah[a];
			cout<<"Harga Barang  : ";
			cin>>harga[a];
			cout<<endl;
			hasil[a] = jumlah[a] * harga[a];
			a++;
		} else if(pil == 2){
			cout<<"Uang Pembayaran : ";
			cin>>bayar;
			cout<<"======================="<<endl<<endl;
			
			cout<<"Nama\t Jumlah\t Harga"<<endl;
			cout<<"======================="<<endl;
			for(int x = 1; x < a; x++) {
				cout<<barang[x]<<" \t "<<jumlah[x]<<" \t "<<harga[x]<<endl;
				total = total + hasil[x];
			}
			kembali = bayar - total;
			cout<<"======================="<<endl;
			cout<<"Pembayaran \t "<<bayar<<endl;
			cout<<"Total \t\t "<<total<<endl;
			cout<<"======================="<<endl;
			cout<<"Kembalian \t "<<kembali<<endl;
			
			return 0;
		}
	}
	return 0;
}
