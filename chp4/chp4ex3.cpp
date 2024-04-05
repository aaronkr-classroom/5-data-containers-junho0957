#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::vector; using std::setw;
int main()
{
	int MAX = 1000;
	const int pad = log10(MAX * MAX) + 2;
	for (int i = 1; i < MAX; i++) {
		cout << i << setw(pad);
	}

	cout << endl << setw(0);



	for (int i = 1; i < MAX; i++) {
		cout << i * i << setw(pad);
	}

	cout << endl;







	return 0;
}