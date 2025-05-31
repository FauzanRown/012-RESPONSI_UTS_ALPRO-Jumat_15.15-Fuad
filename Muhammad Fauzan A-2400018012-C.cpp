#include<iostream>
using namespace std;

string password;
string username;
string passwordSaved = "2400018012"; // Ini pasword yang digunakan nya
string userSaved = "fauzan"; // Ini pasword yang digunakan nya
string daftarbarang[100] = {"kopi", "teh", "Mainan", "Baju", "Celana"};
int hargabarang[100] = {5000, 4000, 30000, 95000, 120000};
int hargabarangsaya[100];
string barangsaya[100];
int pilih;
int saldo = 0;
int isisaldo = 0;
int pilihbarang;
bool islogin = true;
char kembali;
char belilagi;
int counter = 0;
int jumlahbeli;
int indexbarangsaya = 0;
int totalbayar;
int jumlahbarangsaya = 0;
int harusdibayar;
string diskon;



void tampilkanbarang(){
	cout << "Barang Yang Tersedia Saat Ini : " << endl;
	for (int i = 0 ; i < 5 ; i++){
		cout << i + 1 << " | " << daftarbarang[i] << " Rp. "<< hargabarang[i] << endl;
	}
}

void topupsaldo(){
	cout << "Masukan Jumlah Saldo Yang Akan dibeli : ";
	cin >> isisaldo;
	saldo += isisaldo;
	cout << " Pengisian saldo sebesar Rp. " << isisaldo << " berhasil " << endl;;
}

void keranjangSaya(){
	if (jumlahbarangsaya == 0){
		cout << "Keranjang Anda Masih Kosong" << endl;
	} else {
		for (int i = 0 ; i < jumlahbarangsaya ; i++){
			cout << i + 1 << " | " << daftarbarang[i] << endl;
		} 
	}
}

void strukpembayaran(){
	
	if (jumlahbarangsaya == 0){
		cout << "Keranjang Anda Masih Kosong" << endl;
	} else {
		cout << "====================================" << endl;
		cout << "Barang Belanjaan Anda : " << endl;
		keranjangSaya();
		if (totalbayar >= 100000){
			harusdibayar = totalbayar * 10 / 100;
			diskon = "Anda Mendapakan Diskon 10%";
		} else {
			harusdibayar = totalbayar;
			diskon = " - ";
		}
		cout << "Diskon : " << diskon << endl;	
		cout << "Harga Total : " << harusdibayar  << endl;
	}
}


void login(){
	
	while(islogin){
		cout << "Masukan Username : " ;
		getline(cin, username);
		cout << "Masukan Password : " ;
		getline(cin, password);
		
		if (password == "2400018012" && username == "fauzan" ){
			islogin = false;
		} else {
			cout << "Username dan Password tidak sesuai, Silahkan Coba Lagi" << endl;
		}
	}
}

int main(){
	
	do {
		
		cout << "== Selamat Datang Di E-Commerence Bukalapak ==" << endl;
		cout << "Login Terlebih Dahulu Untuk Melanjutkan" << endl << endl;
		login();
		
		cout << endl;
		cout << "=========================================" << endl;
		cout << "SALDO ANDA SAAT INI : Rp. " << saldo << endl ;
		cout << "KERANJANG ANDA : " << endl;
		keranjangSaya();
		cout << "=========================================" << endl;
		cout << "Halo, " << username << " Selamat Datang Di Bukalapak" << endl << endl;
		cout << "1. Belanja Barang" << endl;
		cout << "2. TopUp Saldo " << endl;
		cout << "3. Bayar" << endl;
		cout << "4. Hapus Barang" << endl;
		
		cout << "Mau Pilih Fitur apa? ";
		cin >> pilih;
		
		switch(pilih){
			case 1 :
				
				do {
						tampilkanbarang();
						cout << "Mau Beli apa Hari ini ? (Masukan Nomor Barang)";
						cin >> pilihbarang;
					
						switch(pilihbarang){
						
							case 1 :
								cout << "Anda Membeli Kopi" << endl;
								cout << "Masukan Jumlah Pembelian : ";
								cin >> jumlahbeli;	
								totalbayar += jumlahbeli * 5000;
								barangsaya[indexbarangsaya] = daftarbarang[0];
								hargabarangsaya[indexbarangsaya] = hargabarang[0];
								indexbarangsaya++;
								jumlahbarangsaya++;
								cout << "Mau Beli Barang Lagi ? (y/n)";
								cin >> belilagi;
								break;
							
							case 2 :
								cout << "Anda Membeli Teh" << endl;
								cout << "Masukan Jumlah Pembelian : ";
								cin >> jumlahbeli;	
								totalbayar += jumlahbeli * 4000;
								barangsaya[indexbarangsaya] = daftarbarang[1];
								hargabarangsaya[indexbarangsaya] = hargabarang[1];
								indexbarangsaya++;
								jumlahbarangsaya++;
								cout << "Mau Beli Barang Lagi ? (y/n)";
								cin >> belilagi;
								break;
								
							case 3 :
								cout << "Anda Membeli Mainan" << endl;
								cout << "Masukan Jumlah Pembelian : ";
								cin >> jumlahbeli;	
								totalbayar += jumlahbeli * 30000;
								barangsaya[indexbarangsaya] = daftarbarang[2];
								hargabarangsaya[indexbarangsaya] = hargabarang[2];
								indexbarangsaya++;
								jumlahbarangsaya++;
								cout << "Mau Beli Barang Lagi ? (y/n)";
								cin >> belilagi;
								break;
								
							case 4 :
								cout << "Anda Membeli Baju" << endl;
								cout << "Masukan Jumlah Pembelian : ";
								cin >> jumlahbeli;	
								totalbayar += jumlahbeli * 95000;
								barangsaya[indexbarangsaya] = daftarbarang[3];
								hargabarangsaya[indexbarangsaya] = hargabarang[3];
								indexbarangsaya++;
								jumlahbarangsaya++;
								cout << "Mau Beli Barang Lagi ? (y/n)";
								cin >> belilagi;
								break;
								
							case 5 :
								cout << "Anda Membeli Celana" << endl;
								cout << "Masukan Jumlah Pembelian : ";
								cin >> jumlahbeli;	
								totalbayar += jumlahbeli * 120000;
								barangsaya[indexbarangsaya] = daftarbarang[4];
								hargabarangsaya[indexbarangsaya] = hargabarang[4];
								indexbarangsaya++;
								jumlahbarangsaya++;
								cout << "Mau Beli Barang Lagi ? (y/n)";
								cin >> belilagi;
								break;
						}
						
					} while (belilagi == 'y' || belilagi == 'Y');
				break;
			
			case 2 :
				topupsaldo();
				break;
				
			case 3 : 
				strukpembayaran();
				break;
			
			case 4 :
				cout << "Maaf, System Sedang dalam Pemeliharaan, Cobalagi Beberapa Saat !" << endl;
				break;
				
				
			default :
				cout << "Pilihan Anda Tidak Sesuai";
				break ;
		} 
		
			cout << "Kembali Ke Dashboard ? (y/n) ";
			cin >> kembali;
			
		system("cls");
		
	} while (kembali == 'y' || kembali == 'y');
	
		
}
