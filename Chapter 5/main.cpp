#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


//The function takes a temperature and convert it according to user's choice.
//exercices 2 ,3,4,5,6
double exo_2_3_4( double c ) {

	int choice = 0;
	cout << "enter a number to choose what do you want to convert : \n 1. Celsius to Kelvin \n 2. Kelvin to Celsius  \n 3. Celsius to Fahrenhiet \n 4. Fahrenhiet to Celsius ";
	cin >> choice;
	
	cout << "Enter the temperature :";
	cin >> c;

	double result = 0 ;
	switch (choice)
	{   // celsius to kalvin 
		case 1 :
			if (c < -273.15) {

					std::cerr << "there is no temerature above -273.15 :)" << std::endl;
					return 0;
				}
			result = c + 273.15;
			break;
		//kalvin to celsius
		case 2 :
			result = c - 273.15;
			break;
		//celsius to fahrenheit
		case 3 :
			result = c * 1.8 + 32;
			break;
		//fahrenheit to celsius
		case 4 :
			result = (c - 32) / 1.8;
	}
	return result;
}

//Quaratic equations
void exo_7(double a ,double b ,double c) {

	double delta = pow(b, 2) - 4 * a * c;

	if (delta < 0) {
		cerr << "the delta is 0 , you can only calculate the the roots using imaginary numbers" << endl;
		exit;
	}
	
	double x1 = (-b - sqrt(delta)) / (2 * a);
	double x2 = (-b + sqrt(delta)) / (2 * a);

	cout << "x1 : " << x1 << endl;
	cout << "x2 : " << x2 << endl;
}
//The function takes input  into a vector and return the sum of first N numbers 
//exo 8 and 9 
void exo_8() {

	int number_sum = 0;
	int input = 0;
	int sum = 0;
	vector <int> tab;
	cout << "enter the number of values you want to sum :" << endl;
	cin >> number_sum;
	if (!cin)
		throw "you input must be an int ";
	cout << "please enter the integers , enter any key to quit !" << '\n';

	while (cin >> input) {
		tab.push_back(input);
	}
	
	if (number_sum > tab.size()) {
		cout << "sorry ,you cant sum more numbers than there are in the array" << endl;
	}

	for (int i = 0; i < number_sum; i++) {
		if (tab[i] < 0 and sum + tab[i] > sum) throw "the sum cannot be represented by an int ";
		if (tab[i] > 0 and sum + tab[i] < sum) throw "the sum cannot be represented by an int ";
		sum += tab[i];
	}

	cout << "the sum  of the first "<<number_sum<<" is :" << sum << endl;
}

//Use double instead of int , also make a vector of doubles containing the N-1 differences 
//between adjacent values and write out that vector of differences
void exo_10() {

	vector<double> tab;
	vector<double> diff;
	double input;
	int number_n = 0;

	cout << "enter the number of values of N :" << endl;
	cin >> number_n;
	if (number_n < 2)
		throw "to calculate the adjacent differences the must be above 2 !";
	cout << "Enter the intigers ,type any other key to quit !" << endl;
	while (cin >> input) {
		tab.push_back(input);
	}

	for (int i = 0; i < number_n - 1; i++) {
		diff.push_back(tab[i + 1] - tab[i]);
	}

	for (double i : tab) {
		cout << i << " ";
	}

	cout << "The adjacent differences : \n";
	for (double i : diff) {
		cout << i << " ";
	}
}
int main() {

	/*double c = 0;
	double k = exo_2_3_4(c);
	std::cout << k << '\n';*/

	//exo_7

	/*double a = 0, b =0, c = 0;
	cin >> a >> b >> c;
	exo_7(a,b,c);*/

	//exo_8()

	/*try {
		exo_8();
	}

	catch (exception& e) {

		cerr << "Error " << e.what() << endl;
	}*/

	//exo_10

	try {
		exo_10();
	}
	catch (exception & e) {
		cerr << "Error" << e.what() << endl;
	}


}