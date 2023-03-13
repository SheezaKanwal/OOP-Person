#include"Person.h"

Person::Person()
{
	firstName = new char;
	lastName = new char;
	age = {};
}
Person::Person(char* fn, char* ln, int a)
{
	int size;
	for (size = 0; fn[size] != '\0'; size++);

	firstName = new char[size + 1] {};
	for (int i = 0; i < size; i++)
		firstName[i] = fn[i];

	for (size = 0; ln[size] != '\0'; size++);
	lastName = new char[size + 1] {};
	for (int i = 0; i < size; i++ 
		lastName[i] = ln[i];

	age = a;
}
char* Person::getFirstName()
{
	int size = 0;
	for (size = 0; firstName[size] != '\0'; size++);
	char* temp = new char[size + 1] {};

	for (int i = 0; i < size; i++)
		temp[i] = firstName[i];

	return temp;
}
char* Person::getLastName()
{
	int size = 0;
	for (size = 0; lastName[size] != '\0'; size++);
	char* temp = new char[size + 1] {};

	for (int i = 0; i < size; i++)
		temp[i] = lastName[i];

	return temp;
}
int Person::getAge()
{
	return age;
}