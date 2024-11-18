#include <iostream>
using namespace std;
int main()
{
	int socan, sochi, nam;
	cout << "nhap so can: "; cin >> socan;
	cout << "nhap so chi: "; cin >> sochi;
	string can	[] = { "canh", "tan", "nham","quy", "giap", "at", "binh", "dinh", "mau", "ky"};
	string chi	[] = { "than", "dau", "tuat","hoi", "ty", "suu", "dan", "mao", "thin", "ti", "ngo", "mui"};
	for (int nam = 2000; nam <= 2024; nam++)
	{
		socan = nam % 10;
		sochi = nam % 12;
		cout << can[socan] << "\t";
		cout << chi[sochi] << "\n";
	}
	return 0;
	

}