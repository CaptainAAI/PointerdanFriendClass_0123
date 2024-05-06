#include<iostream>
using namespace std;

class mahasiswa
{
	public:
	int nim;
	void showNim()
	{
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{
	mahasiswa mhs{ 1 }; //Obejct mhs
	mhs.showNim();	//Member acces operator

	mahasiswa& refMhs = mhs;	//Pointer reference refMhs
	refMhs.nim = 2;		//member Acces Operator
	mhs.showNim();

	

}