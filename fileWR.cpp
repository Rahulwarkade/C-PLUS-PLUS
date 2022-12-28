#include <fstream>
#include <iostream>
using namespace std;
int main() {
	cout << "enter your name " << endl;
	string name;
	ofstream Rout("sample.txt");
	// getline(Rout,name);
	cin >> name;
	Rout << name + " your are awesome";
	Rout.close();
	ifstream Rin("sample.txt");
	getline(Rin, name);
	Rin >> name;
	cout << "This is your name " << name << endl;
	Rin.close();
}
