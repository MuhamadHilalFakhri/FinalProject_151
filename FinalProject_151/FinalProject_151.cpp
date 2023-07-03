#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x,y;
public:
	bidangDatar() { 
		x = 0;
		y = 0;
	}
	virtual void input() {} 
	virtual float Luas(int a) { return 0; } 
	virtual float Keliling(int a) { return 0; } 
	virtual void cekUkuran() { return ; }
	void setX(int a) { 
		this->x = a;
	}
	int getX() {
		
		return x;
	}
};



class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}
	float Luas(int a) {
		return 3.14 * a * a;
	}
	float Keliling(int a) {
		return 2 * 3.14 * a;
	}
	void cekUkuran() {
		if (Keliling(getX()) >= 40)
			cout << "Ukurannya besar" << endl;
		else
			cout << " Kecil "<<endl;
	}
};
class PersegiPanjang :public bidangDatar {
public:
	void input() {
		int p;
		int l;
		cout << "Masukkan Panjang : ";
		cin >> p;
		setX(p);
		cout << "Masukkan lebar : ";
		cin >> l;
		setX(l);
	}

	float Luas(int a) {
		return 6 * a;
	} 

	float Keliling(int a) {
		return 6 + a + 6 + a;
	}
};


int main() {
	char pilihan;

	do {
		Lingkaran* l;
		PersegiPanjang* pp;


		l = new Lingkaran;
		l->input();
		cout << "Luas lingkaran : " << l->Luas(l->getX()) << endl;
		cout << "Keliling lingkaran : " << l->Keliling(l->getX()) << endl;
		l->cekUkuran();


		pp = new PersegiPanjang;
		pp->input();
		cout << "Luas Persegi Panjang : " << pp->Luas(pp->getX()) << endl;
		cout << "Keliling Persegi Panjang : " << pp->Keliling(pp->getX()) << endl;
		cout << "Ukuran persegi panjang adalah sedang" << endl;
	
		cout << "Apakah anda ingin mengulang program (Y/N) : ";
		cin >> pilihan;
	} while (pilihan == 'Y' || pilihan == 'y');
	return 0;
};