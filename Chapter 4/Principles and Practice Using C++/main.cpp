/*
	
*/
#include <iostream>
#include <array>
#include <string>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
void bleep() {

	string word;
	string disliked = "yesman";
	vector<string> vec = { "one","two","three" };

	while (word != "q")
	{  
		cout << "enter a word :" << endl;
		cin >> word;
		for (string s : vec) {
			if (s == word)
				cout << "beep";
		}
		if (word == "q")
			continue;
		vec.push_back(word);
	}
}

void exo_2() {

	vector<double> temper = { 1,3,4,5,6,7,2 };
	sort(temper.begin(),temper.end());
	int size = temper.size();
	double median{ 0 };

	if (size % 2 == 0 )
		 median=(temper[(size / 2 )-1] + temper[(size / 2)]) / 2 ;
	else
		 median = temper[size / 2];
	cout << "The median  is :" << median;
}

void exo_3() {

	vector <double> distances;
	double value = 0;
	double sum_distances = 0;
	double biggest_distance = 0;
	double smallest_distance = 0;
	double mean_distance = 0;
	cout << "Enter the distances  :" << endl;
	//we quit the loop when the use enter 0 or negative value
	while (cin>>value) {
		if (value <= 0) {
			break;
		}
		distances.push_back(value);
	}
	if (distances.size() == 0)
		cout << "no distances" << endl;

	for (double i : distances) {
		sum_distances += i;
		if (i < smallest_distance)
			smallest_distance = i;
		if (biggest_distance < i)
			biggest_distance = i;
	}
	cout << "The biggest distance is :" << biggest_distance << endl;
	cout << "The smallest distance is: " << smallest_distance << endl;
	cout << "the distance total is :" << sum_distances << endl;
	cout << "the median distance is :" << sum_distances / distances.size() << endl;
}

void exo_4() {

	cout << "******************* Guessing Game ***************************" << endl;
	cout << "Guess a number betwwen 1 and 100 ;) " << endl;
	string answer = "";
	int guess_max = 100;
	int guess_min = 1;

	while (guess_min != guess_max) {
		cout << "Is the number you are thinking of less than (yes/no) "	<< (guess_max + guess_min + 1) / 2 <<endl;
		cin >> answer;
		if (answer == "yes")
			guess_max = (guess_max + guess_min) / 2;
		else if (answer == "no")
			guess_min = (guess_max + guess_min + 1) / 2;
		else {
			cout << "Pleanse enter yes/no\n";
		}
	}
	cout << "The number is " << guess_min << endl;
}

void exo_5() {

	double first_value = 0;
	double second_value = 0;
	double resu = 0;
	char operation = 0;

	cout << "Eneter two number and a character (+,*,-,/)\n" << endl;
	cin >> first_value >> second_value >> operation;

	switch (operation)
	{
	case '+':
		resu = first_value + second_value;
		break;
	case '*':
		resu = first_value * second_value;
		break;
	case '-':
		resu = first_value - second_value;
		break;
	case'/':
		resu = first_value - second_value;
		break;
	default:
		cout << "bad input !!" << endl;
		break;
	}
	cout << "the result is :" << resu << endl;
}


void exo_6() {

	vector <string> vec_string = { "zero", "one","two","three","four","five","six","seven","eight","nine" };
	vector <int> vec_digit = { 0,1,2,3,4,5,6,7,7,8,9 };
	int digit = 0;
	string word = "";

	cout << "Please enter a single string number ;)" << endl;
	cin >> word;
	int pointer = 0;
	for (string s : vec_string) {
		pointer += 1;
		if (word == s)
			cout << "the converted digit is : " << vec_digit[pointer - 1] << endl;
	}
}

 int exo_6_modify(string word) {

	vector <string> vec_string = { "zero", "one","two","three","four","five","six","seven","eight","nine" };
	vector <int> vec_digit = { 0,1,2,3,4,5,6,7,7,8,9 };
	int pointer = 0;

	if (isdigit(word[0])) {
			int res = word[0] - 48;
			return vec_digit[res];
	     }
	else 
		for (string s : vec_string) {
			pointer += 1;
			if (word == s)
				return vec_digit[pointer - 1];
	}
}

void exo_7() {

	string first = "";
	string second ="";
	int  resu = 0;
	char operation = 0;

	cout << "Eneter two number and a character (+,*,-,/)\n" << endl;
	cin >> first >> second>> operation;
	int first_value=exo_6_modify(first);
	int second_value = exo_6_modify(second);

	switch (operation)
	{
	case '+':
		resu = first_value + second_value;
		break;
	case '*':
		resu = first_value * second_value;
		break;
	case '-':
		resu = first_value - second_value;
		break;
	case'/':
		resu = first_value - second_value;
		break;
	default:
		cout << "bad input !!" << endl;
		break;
	}
	cout << "the result is :" << resu << endl;
}

void exo_8() {

	double reward = 1;
	double rice_gain = 0 ;

	for (int i = 0; i <= 63; i++) {
		if (rice_gain >= 1000000000) {
			cout << "square -->  " << i << "  The reward  --> " << reward << "  The sum the rice grain is -->" << rice_gain << endl;
		}
		if (rice_gain >= 1000000) {
			cout << "square -->  " << i << "  The reward  --> " << reward << "  The sum the rice grain is -->" << rice_gain << endl;
		}
		if (rice_gain >= 1000) {
			cout << "square -->  " << i << "  The reward  --> " << reward << "  The sum the rice grain is -->" << rice_gain << endl;
		}
		rice_gain += reward;
		reward = reward * 2;
	}
}

void exo_9() {
	cout <<"**************** Paper,Rock,Scisors Game ************" << endl;
	vector <string> random_picker = { "rock","scisors","paper" };
	char s = 0;
	bool win = false;

	while (win != true) {
		int random = (rand() % 3);
		cout << "Enter r(Rock) , p (Paper) , s (Scisors) :)" << endl;
		cin >> s;
		switch (s)
		{
		case 'r':
			if (random_picker[random] == "rock") { 
				cout << "the computer played " << random_picker[random] << endl;
				cout << "The computer choose rock too! Play again " << endl;
				break;
			}
			if (random_picker[random] == "paper") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "The computer won :/" << endl;
				win = true;
				break;
			}
			if (random_picker[random] == "scisors") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "You won :)" << endl;
				win = true;
				break;
			}
		case 'p':
			if (random_picker[random] == "paper") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "The computer choose paper too! Play again " << endl;
				break;
			}
			if (random_picker[random] == "scisors") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "The computer won :/" << endl;
				win = true;
				break;
			}
			if (random_picker[random] == "rock") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "You won :)" << endl;
				win = true;
				break;
			}
		case 's':
			if (random_picker[random] == "scisors") {
				cout << "The computer choose scisors too! Play again " << endl;
				break;
			}
			if (random_picker[random] == "rock") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "The computer won :/" << endl;
				win = true;
				break;
			}
			if (random_picker[random] == "paper") {
				cout << "the computer played " << random_picker[random] << endl;
				cout << "You won :)" << endl;
				win = true;
				break;
			}
		default:
			cout << "bad input :/ " << endl;
		}
	}
}

void exo_11(){

	vector <int> primes;
	
	for (int i = 2; i <= 100; i++) {
		bool flag = false;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			primes.push_back(i);
		}
		
	}
	cout << "prime numbers are :" << endl;
	for (int i : primes) {
		cout << i << endl;
	}
}
void exo_12() {

	int max = 0;
	cout << "enter max (1 to max ) :" << endl;
	cin >> max;
	vector <int> primes;
	for (int i = 2; i <= max; i++) {
		bool flag = false;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			primes.push_back(i);
		}
	}
	cout << "******" << endl;
	for (int i : primes) {
		cout << i << endl;
	}
}

// Sieves of Eratosthenes
void exo_13() {

	vector <bool> primes(100, true);
	for (int i = 2 ; i < 100; i++) {
		int k = 1;
		if (primes[i] == true) {
			for (int j = pow(i, 2); j < 100; j += i ) {
				primes[j] = false;
				k += 1;
			}
		}
	}
	for (int i = 2; i < 100 ; i++) {
		if (primes[i]== true) {
			cout << i << endl;
		}
	}
}

void exo_15(int n) {

	vector <bool> primes(100, true);
	for (int i = 2; i < 100; i++) {
		int k = 1;
		if (primes[i] == true) {
			for (int j = pow(i, 2); j < 100; j += i ) {
				primes[j] = false;
				k += 1;
			}
		}
	}
	int count = 0;
	for (int i = 2; i < 100 ; i++) {
		if (count == n) {
			break;
		}
		if (primes[i] == true) {
			cout << i << endl;
			count += 1;
		}
	}
}

// mode in sequence 
void exo_16() {

	vector <int> vec = { 1,2,3,4,5,6,1,3,2,3,3,1,1,1,1,2};
	int mode = 0;
	int max_mode = 0;
	for (int i = 0; i < vec.size(); i++) {
		int count = 0;
		//int max_mode = 0;
		for (int j = 0; j <= i; j++) {
			if (vec[i] == vec[j]) {
				count += 1;
			}
		}
		if (max_mode < count) {
			max_mode = count;
			mode = vec[i];
		}
		cout << "max mode --> " << max_mode<< "  count --> " << count <<endl;
	}
	cout << "Sequence Mode is " << mode <<  "  "<<endl;
}

// mode in sequence (Strings) 
void exo_17() {

	vector <string> vec = { "one","two","three","one","four","five","one","one","five","five","five", "five","on"};
	int max_mode = 0;
	string mode = "";
	string max_length = vec[0] ;
	string min_length = vec[0] ;

	for (int i = 0; i < vec.size(); i++) {
		int count = 1;
		for (int j = 0; j <= i; j++) {
			if (vec[i] == vec[j]) {
				count += 1;
			}
			if (max_mode < count) {
				max_mode = count;
				mode = vec[i];
			}
		}
		if (max_length.size() < vec[i].size()) {
			max_length = vec[i];
		}
		if (min_length.size() > vec[i].size()) {
			min_length = vec[i];
		}
	}
	cout << "Sequence Mode is " << mode << endl;
	cout << "max is " << max_length << endl;
	cout << "min is " << min_length << endl;
}

void exo_18(double a, double b, double c) {

	if (pow(b, 2) - (4 * a * c) < 0) {
		cout << "this need calculating i which is not supported here !" << endl;
	}
	else {
		double delta = sqrt(pow(b, 2) - (4 * a * c));
		double first_res = (-b + delta) / (2 * a);
		double second_res = (-b - delta) / (2 * a);
		cout << "result 1 :" << first_res << endl;
		cout << "result 2 :" << second_res << endl;
	}
}

int exo_19() {

	string name ;
	int number ;
	vector<string>names;
	vector<int>scores;

	while ( name != "NoName") {
		cout << "Enter the name : " << endl;
		cin >> name;
		cout << "Enter the number : " << endl;
		cin >> number;
		for (int i = 0; i < names.size(); i++) {
			if (name == names[i]) {
				cout << "the name exist " << endl;
				return 1;
			}
		}
		names.push_back(name);
		scores.push_back(number);
	}
	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << " --> " << scores[i] << endl;
	}
}

int exo_20() {

	cout << "first enter a set of name-and-value pairs, such as (Joe 17)" << endl;
	string name;
	int number;
	vector<string>names;
	vector<int>scores;

	while (name != "NoName") {
		cout << "Enter the name : " << endl;
		cin >> name;
		cout << "Enter the number : " << endl;
		cin >> number;
		for (int i = 0; i < names.size(); i++) {
			if (name == names[i]) {
				cout << "the name exist " << endl;
				return 1;
			}
		}
		names.push_back(name);
		scores.push_back(number);
	}
	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << " --> " << scores[i] << endl;
	}
	cout << "***" << endl;

	string name_value;
	cout << "enter a name, the program will output the corresponding score" << endl;
	cin >> name_value;

	for (int i = 0; i < names.size(); i++) {
		if (name_value == names[i]) {
			cout << "the score is :" <<  scores[i] << endl;
			break;
		}
		else
		{
			cout << "name not found" << endl;
		}
	}
}

int exo_21() {


	cout << "first enter a set of name-and-value pairs, such as (Joe 17)" << endl;
	string name;
	int number;
	vector<string>names;
	vector<int>scores;

	while (name != "NoName") {
		cout << "Enter the name : " << endl;
		cin >> name;
		cout << "Enter the number : " << endl;
		cin >> number;
		for (int i = 0; i < names.size(); i++) {
			if (name == names[i]) {
				cout << "the name exist " << endl;
				return 1;
			}
		}
		names.push_back(name);
		scores.push_back(number);
	}
	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << " --> " << scores[i] << endl;
	}
	cout << "***" << endl;

	int score_value;
	cout << "enter a score, the program will output the corresponding name" << endl;
	cin >> score_value;

	bool found = false;
	int pointer = 0;
	for (int i = 0; i < scores.size(); i++) {
		if (score_value == scores[i]) {
			pointer = i;
			found = true;
			break;
		}
	}

	if (found) {
	cout << "the score is :" << names[pointer] << endl;
	}
	else {
		cout << "Not found" << endl;
	}
}
int main (){

	//bleep();
	//exo_2();
	//exo_3();
	//exo_4();
	//exo_5();
	//exo_6();
	//exo_7();
	//exo_8();//For more control over dispalying the sum the rice grains when it hits the treshold we can flags(true/false) 
	//exo_9();
	//exo_11();
	//exo_12();
	//exo_13();
	//exo_14(10);
	//exo_16();
	//exo_17();
	//exo_18(5, 2, 5);
	//exo_19();
	//exo_20();
//	exo_21();

	int data[2];


	for (int i = 0; i <4; i++) {

		cout << i << endl;
	}

}