/*
6/20/2022 Emmanuel Jolade

Program was designed to practice using Classes. Program will make a class titled Profile and using said class, create an object 
that has its own unique variables like age, name, country, etc. Program will then display all of these private variables using getter methods.

*/



#include "profile.h"

int main(){

	Profile sam("Sam Darkkila", 30, "New York", "USA", "he/him");

	sam.addHobby("Gaming");
	sam.addHobby("Music");
	sam.addHobby("Programming");

	sam.viewProfile();
}

