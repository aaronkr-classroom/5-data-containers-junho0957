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
	int MAX = 100;

	for (int i = 1; i < MAX; i++) {
		cout << i << setw(7);
	}

	cout << endl << setw(0);



	for (int i = 1; i < MAX; i++) {
		cout << i * i << setw(7);
	}

	cout << endl;







	return 0;
}