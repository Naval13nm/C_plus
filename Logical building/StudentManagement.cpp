#include <iostream>
#include <string>

using namespace std;

int main() {

	int topper = 0;
	int topperStudent = 0;

	int topperSame = 0;
	int topperStudentSame = 0;

	int n;
	cout << "No of Students :" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		cout << " Student :" << i << endl;

		int subject1;
		int subject2;
		int subject3;
		int subject4;
		int subject5;

		cout << "enter marks of subject1 :" << endl;
		cin >> subject1;

		cout << "enter marks of subject2 :" << endl;
		cin >> subject2;

		cout << "enter marks of subject3 :" << endl;
		cin >> subject3;

		cout << "enter marks of subject4 :" << endl;
		cin >> subject4;

		cout << "enter marks of subject5 :" << endl;
		cin >> subject5;

		int total = ((subject1 + subject2 + subject3 + subject4 + subject5) * 100) / 500;

		if (total < 33 || subject1 < 33 || subject2 < 33 || subject3 < 33 || subject4 < 33 || subject5 < 33) {
			cout << "F better luck next time" << endl;
		}
		else if (total >= 80) {
			cout << "A++" << endl;
		}
		else if (total >= 50 && total < 80) {
			cout << "B++" << endl;
		}
		else if (total >= 33 && total < 50) {
			cout << "C++" << endl;
		}

		if (topper < total) {
			topper = total;
			topperStudent = i;
			topperSame = 0;
			topperStudentSame = 0;
		}
		else if (topper == total) {
			topperSame = total;
			topperStudentSame = topperStudent;
			topperStudent = i;
		}
	}

	cout << "topper Student :" << topperStudent << endl;
	cout << "topper Marks :" << topper << endl;

	if (topperSame != 0 && topperStudentSame != 0) {
		cout << "Both are topper Students :" << topperStudent << "," << topperStudentSame << endl;
		cout << "topper Marks :" << topper << endl;
	}

	return 0;
}




//    int student ;
//     cout << "Enter Number of Student = " ;
//     cin >> student ;
//     string name ;
//     int math, science, hindi, english, social ;
//     int total;
//     float percent ;
//     int topper = 0 ;
//     string topperName ;
    
//     for( int i = 0 ; i < student ; i++){
        
//         cout << "Enter Student Name = " ;
//         cin >> name ;
//         cout << "Enter Mathematics Marks = " ;
//         cin >> math ;
//         cout << "Enter Science Marks = " ;
//         cin >> science ;
//         cout << "Enter Hindi Marks = " ;
//         cin >> hindi ;
//         cout << "Enter English Marks = " ;
//         cin >> english ;
//         cout << "Enter Social Science Marks = " ;
//         cin >> social ;
//         total = math + science + hindi + english + social ;
//         cout << "Student Total Marks = " << total << endl  ;
//         percent = (total*100)/500;
//         cout << "Student Percentage = " << percent << endl ;
//         if( percent > topper){
//             topper = percent ;
//             topperName = name ; 
//         }
//     }
//     cout << "Topper = " << topperName << endl ;
//     cout << "Percentage = " << topper ;