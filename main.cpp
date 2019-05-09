#include <iostream>
#include <fstream>

using namespace std;

#define DEBUG false

	
int add_numbers(int &x, int y){
	return x+=y;
}
int main(){
	
	int num1 = 5;
	int num2 = 300;
	int *ptr = &num2;
	
	cout << "Value of num2 is " << num2 << endl;
	cout << "value of ptr is " << ptr << endl;
	num2 = 999;
	cout << "Value of num2 is " << num2 << endl;
	cout << "value of ptr is " << ptr << endl;
	ptr = &num1;
	cout << "Value of num2 is " << num2 << endl;
	cout << "value of ptr is " << ptr << endl;
	num2 = 555;
	cout << "Value of num2 is " << num2 << endl;
	cout << "Value of *ptr is " << *ptr	<< endl;
	cout << "value of ptr is " << ptr << endl;
	// add_numbers(num1, 1);
	// cout << "Adding 5 to 300: " << num1 << endl;
	// add_numbers(num1, num2);
	// cout << "Adding 5 to 300: " << num1 << endl;
	// add_numbers(num1, num2);
	// cout << "Adding 5 to 300: " << num1 << endl;
	return 0;
}