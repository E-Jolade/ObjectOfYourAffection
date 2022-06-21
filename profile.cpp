*
6/20/2022 Emmanuel Jolade

Program was designed to practice using Classes. Program will make a class titled Profile and using said class, create an object 
that has its own unique variables like age, name, country, etc. Program will then display all of these private variables using getter methods.

*/



#include "profile.h"

int main(){
	string userName;
	int userAge;
	string userCity;
	string userCountry;
	string userPronouns;
	string buffer;
	int menu;
	bool running = true;
	string userHobby;
	string userHobby2;
	string userHobby3;
	string userHobby4;
	string userHobby5;
	int counter;

	cout << "Welcome to the Object Of Your Affection Profile Creator!\n";
	cout << "Please enter your first and last name:\n";

	getline(cin, userName);

	cout << "Next, please enter your age:\n";

	cin >> userAge;
	getline(cin, buffer);

	cout << "What city are you currently living in?\n";

	getline(cin, userCity);

	cout << "And what country is that city in?\n";

	getline(cin, userCountry);

	cout << "And last but not least, what pronouns do you use?\n";

	getline(cin, userPronouns);

	cout << "Great! Creating profile....\n";

	Profile user(userName, userAge, userCity, userCountry, userPronouns);
	
	cout << "One last thing, what's a hobby of yours?\n";

	getline(cin, userHobby);
	user.addHobby(userHobby);

	counter = 1;

	do {
		cout << "Thank you! Would you like to add another hobby or finalize your profile?\n";
		cout << "1.) Add another hobby\n";
		cout << "2.) Finalize profile\n";

		cin >> menu;
		getline(cin, buffer);

		if (menu == 1) {
			if (counter == 5) {
				cout << "Max number of hobbies reached. Finalizing profile...\n\n";
				running = false;
				break;
			}
			cout << "What's another hobby of yours?\n";
			if (counter == 1) {
				getline(cin, userHobby2);
				user.addHobby(userHobby2);
			}
			if (counter == 2) {
				getline(cin, userHobby3);
				user.addHobby(userHobby3);
			}
			if (counter == 3) {
				getline(cin, userHobby4);
				user.addHobby(userHobby4);
			}
			if (counter == 4) {
				getline(cin, userHobby5);
				user.addHobby(userHobby5);
			}
			counter++;
		}
		else if (menu == 2) {
			cout << "Finalizing profile...\n\n";
			running = false;
		}
		else {
			cout << "Invalid input, try again\n";
		}
	} while (running);

	user.viewProfile();
}

