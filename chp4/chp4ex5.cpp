#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


istream& read(istream& in, vector<string>& words) {
	if (in)
	{
		cout << "Input words: \n" << endl;
		string s;
		while (in >> s)
		{
			if (s == "finish")
			{
				break;
			}
			words.push_back(s);
		}
		in.clear();
	}
	return in;
}


int main()
{

	vector<string>words;

	read(cin, words);

	
	sort(words.begin(), words.end());

	cout << "단어의 수: " << words.size() << endl;

	string temp = words[0];
	int count = 1;

	for (vector<string>::size_type i = 1; i < words.size(); i++) {


		if (temp == words[i])
		{
			count++;
			continue;
		}

		cout << temp << ":" << count << "번" << endl;
		temp = words[i];
		count = 1;
	}
	cout << temp << ":" << count << "번" << endl;
 

	return 0;
}