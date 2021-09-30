#include "../../std_lib_facilities.h"

int main()
{
	// Introduction to the letter
	cout << "Enter the name of the person you want to write to:\n";

	string first_name;
	cin >> first_name;	
	
	cout << "Dear " << first_name << ",\n";
	cout << "\t Thank you for your last letter. It was great to hear from you again. How are you doing? I'm fine but I miss you.\n";

	cout << "Enter a friend's name:\n";

	// Entering a different friend's name and gender
	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	cout << "Enter the friend's gender (m for male or f for female)\n";

	char friend_sex = 0;
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	else if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	cout << "Enter the age of the person you are writing to: \n";

	// Entering the age of the first friend, different text based on age entered.
	int age;
	cin >> age;

	if (0 >= age or age >= 110)
		simple_error("you're kidding!");

	cout << "I hear you just had a birthday and you are " << age << " years old. ";

	if (age < 12)
		cout << "Next year you will be " << age + 1 << ".\n";

	else if (age == 17)
		cout << "Next year you will be able to vote.\n";

	else if (age > 70)
		cout << "I hope you are enjoying retirement.\n";
	
	// Signature
	cout << "Yours sincerely, \n \n \n";

	string my_name;
	cin >> my_name;

	return 0;
}