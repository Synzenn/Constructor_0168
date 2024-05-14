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


int main() {
	

}