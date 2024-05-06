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

	

}