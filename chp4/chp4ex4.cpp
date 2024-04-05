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
	int MAX = 10;

	for (double i = 1; i < MAX; i += 0.1) {
		cout << i << setw(6);
	}

	cout << endl << setw(0);



	for (double i = 1; i < MAX; i += 0.1) {
		cout << i * i << setw(6);
	}

	cout << endl;







	return 0;
}