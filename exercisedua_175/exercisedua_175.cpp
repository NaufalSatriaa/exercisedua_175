#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \" " << nama << "\" ada\n";
	}
	~penerbit() {
		cout << "Penerbit \"" << nama << "\" ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << "\" ada\n";
	}
	~pengarang() {
		cout << "pengarang \"" << nama << "\" ada\n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class buku {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	buku(string pNama) :nama(pNama) {
		cout << "buku \"" << nama << "\" ada\n";
	}
	~buku() {
		cout << "buku \"" << nama << "\" ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "Daftar penerbit yang diikuti\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}