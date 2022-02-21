#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	string s;
	int n;
	char c;
	
	do {
		cout << "\nEnter any string: ";
		getline(cin, s);
		cout << "Enter any number: ";
		cin >> n;
	
		for(int i=0; i<n; i++) {
			cout << s << endl;
		}
		
		cout << "Try another Y/N?: ";
		cin >> c;
		cin.ignore();
		
	} while(c == 'Y'| c == 'y');
	
	return 0;
}
