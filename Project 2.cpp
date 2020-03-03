#include <iostream>
using namespace std;

int main(){
	
	int usia = 20 ;
	float berat = 56.67;
	char jenis = 'L';
	string nama = "andiyoga";
	bool hasil = true ;
	
	cout << " masukkan usia ";
	cin >> usia ;
	cout << "usia saya" << usia << " tahun " << endl;
	
	cout << " berat badan saya ";
	cin >> berat ;
	cout << "berat badan saya" << berat << endl;
	
	cout << " jenis kelamin ";
	cin >> jenis ;
	cout << "jenis kelamin saya" << jenis << endl ;
	
	cout << " nama saya ";
	cin >> nama ;
	cout << "nama saya " << nama << endl ;
	
	cout << "pertanyaan diatas adalah" ;
	cin >> hasil ;
	cout << " hasil " << true ;
	
	
	return 0; 
}
