#include<iostream>
using namespace std;
#include<string>

class siswa;
class orang
{
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};

