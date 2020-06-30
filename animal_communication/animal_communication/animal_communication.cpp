// animal_communication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Animal is a base class.
class Animal
{
public:
	//Constructor
	Animal()
	{
		cout << "animal constructor executing.\n";
	}
	//Destructor
	virtual ~Animal()
	{
		cout << "Animal destructor executing.\n";
	}
	void communicate() {

		cout << "Speak." << endl;

	}
};

//The Dog class is derived from Animal
class Dog : public Animal
{
public:
	//Constructor
	Dog() : Animal()
	{
		cout << "Dog Constructor executing.\n";
	}
	//Destructor
	~Dog()
	{
		cout << "Dog Destructor executing.\n";
	}
	void communicate() {

		cout << "Woof!" << endl;

	}
};

class Cat : public Animal
{
public:
	//Constructor
	Cat() : Animal()
	{
		cout << "Cat Constructor executing.\n";
	}
	//Destructor
	~Cat()
	{
		cout << "Cat Destructor executing.\n";
	}
	void communicate() {

		cout << "Meow!" << endl;

	}
};

//*********************************************
//Main funciton								  *
//*********************************************

int main()
{
	Animal genericAnimal;

	genericAnimal.communicate();

	Dog ralph;

	ralph.communicate();

	Cat fluffy;

	fluffy.communicate();

	return 0;
	//Create a Dog object, referenced by an Animal pointer.
	Animal *myAnimal = new Dog;
	Animal *myAnimal2 = new Cat;

	//Delete the dog object.
	delete myAnimal;
	delete myAnimal2;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
