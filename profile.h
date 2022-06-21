#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Profile {
private:
	string name;
	int age;
	string city;
	string country;
	string pronouns;
	vector<string> hobbies;

public:
	Profile(string newName, int newAge, string newCity, string newCountry, string newPronouns = "they/them")
		: name(newName), age(newAge), city(newCity), country(newCountry), pronouns(newPronouns) {}

	string getName() {
		return name;
	}

	int getAge() {
		return age;
	}

	string getCity() {
		return city;
	}

	string getCountry() {
		return country;
	}

	string getPronouns() {
		return pronouns;
	}

	void addHobby(string newHobby) {
		hobbies.push_back(newHobby);
	}

	void viewProfile() {
		cout << "Name: " << getName();
		cout << "\nAge: " << to_string(getAge());
		cout << "\nPronouns: " + getPronouns();
		cout << "\nCity and Country: " + getCity() + ", " + getCountry();
		cout << "\nHobbies:\n";
		for (int i = 0; i < hobbies.size(); i++) {
			cout << "- " << hobbies.at(i) << "\n";
		}
	}
};