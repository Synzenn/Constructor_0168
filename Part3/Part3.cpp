#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
public:
	mahasiswa() {
		nim = 0;
		nama = "";
	};
	mahasiswa(int iNim) {
		nim = iNim;
	};
	mahasiswa(string);
	mahasiswa(int iNim, string iNama);
	void cetak();
};

mahasiswa::mahasiswa(string iNama) {
	nim = 0;
	nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
	nim = iNim;
	nama = iNama;
}

void mahasiswa::cetak() {
	cout << endl << "Nim =" << nim << endl;
	cout << " Nama = " << nama << endl;
}

int main() {
	mahasiswa daoa;
	mahasiswa kenichi(6969);
	mahasiswa keisuke("tronk");
	mahasiswa rinsuke(199, "ahsan");

	daoa.cetak();
	kenichi.cetak();
	keisuke.cetak();
	rinsuke.cetak();

	system("pause");

	return 0;


}