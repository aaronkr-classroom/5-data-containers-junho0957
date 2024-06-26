//chp3ex0.cpp
//중간고사 ,기말고사, 그리고 과제 점수 몇개를받고 
//마지막 평균 결과 점수를 계산하기.
#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include<stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using namespace std;

int main()
{
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	// 학생 이름과 모든 점수를 읽어 저장하고 
	// 가장 긴 이름을 찾음
	while (read(cin, record)) {
		maxlen = max(maxlen, record.name.size());

		students.push_back(record);
	}

	
	//학생 정보를 알파벳순으로 정
	
	sort(students.begin(), students.end(), compare);

	for (vector<Student_info>::size_type i = 0; i != students.size(); i++) {
		//이름과 오른쪽 공백을 포함하여 maxlen + 1개의 문자를 출력
		cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');


		try {
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << "Your final grade is: " << setprecision(3)
				<< final_grade << setprecision(prec) << endl;
		}
		catch (domain_error e) {
			cout << e.what();

		}
	}//for 끝
	return 0;
}//main 끝