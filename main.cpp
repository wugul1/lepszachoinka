#include <iostream>
using namespace std;
string drzewo(const string& chars, int n)
{
	int g = 0, s = 0, p = n;
	string wynik;
	for (int i = n; i > 0; --i) 
	{
		for (int j = 0; j < i-1; ++j)
			wynik += " ";
		
		for (int d = 0; d <= g; d++)
		{
			if (s == chars.size())
				s = 0;
			wynik += chars[s++];
			wynik += " ";
		}
		wynik = wynik.substr(0, wynik.size()-1);
		g++;
		wynik += "\n";
	}
	for (int i = 1; i <= p / 3; i++)
	{
		wynik.append(p - 1, ' '); wynik += "|\n";
	}
	wynik = wynik.substr(0, wynik.size() - 1);
	return wynik;
}

int main()
{

	string g = drzewo("kiedy stream pumayt", 10);
	cout << g;
	return 0;
}
