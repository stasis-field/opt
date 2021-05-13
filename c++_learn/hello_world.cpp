#include <iostream>
#include <string>
#include <sstream>

using namespace std;  


int x;
int y;

string myString ("This is my first string");
string inputString ("");

int add(int num1, int num2){
		int result;
		result = num1 + num2;
		return result;
}


	//main() is where program execution begins.
	int main() {
		cout << "Hello World\n"; // Prints hello world.

		cout << "Size of char : " << sizeof(char) << endl;
		cout << "Size of int : " << sizeof(int) << endl;
		cout << "Size of short int : " << sizeof(short int) << endl;
		cout << "Size of long int : " << sizeof(long int) << endl;
		cout << "Size of float : " << sizeof(float) << endl;
		cout << "Size of double : " << sizeof(double) << endl;
		cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

		cout << endl << myString << endl << endl;

		x = 17;
		y = 35+1;
		cout << add(x, y) << endl << endl;

		cout << "Enter your string:\n>";
		cin >> inputString;
		cin.ignore(1000, '\n');
		cout << "Your string is: " << inputString << endl;

		cout << "That didn't work. You need to use getline(cin, <varname>) instead" << endl;

		cout << "Try it here:\n>";
		getline(cin, inputString);

		cout << "Your string is: " << inputString << endl;



		

		return 0;
	}

