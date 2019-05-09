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
	
	cout << "Adding 5 to 300: " << add_numbers(num1,num2) << endl;
	cout << "Adding 5 to 300: " << add_numbers(num1,num2) << endl;
	cout << "Adding 5 to 300: " << add_numbers(num1,num2) << endl;
	return 0;
}