#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int x;
	char arrays [50], arrays1 [50], arrays2 [50];
	string name, name1;
	
		cout << "name inout as a char. array ";
		cin >> arrays; cin.ignore(80, '\n');
		cout << arrays;

		cout << "\n\n Name input as a string";
		cin >> name;  cin.ignore(80, '\n');
		cout << name;

		cout << "\n\n name input as a char array with cin.get with three parts";
		cin.get(arrays, 50, '\n'); cin.ignore(80, '\n');
		cout << arrays;

		cout << "\n\n name input as a string using getline function";
		getline(cin, name); cin.ignore(80, '\n');
		cout << name1;

		cout << "\n\n name input as a char array using getline method";
		cin.getline(arrays, 50); cin.ignore(80, '\n');
		cout << arrays;
	
	cin.get();
	return 0;



}