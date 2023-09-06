#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "Dar un valor para a: ";
	cin >> a;
	cout << "Dar un valor para b: ";
	cin >> b;
	cout << "Dar un valor para c: ";
	cin >> c;

	if((c % a == 0) && (c % b ==0)){
		cout << "Si son factores de c"<< "\n";
	}
	else {
		cout << "No son factores de c"<< endl;
	}

	return 0;
}