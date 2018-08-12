#pragma once
#include <iostream>

/*MyString Class*/
class MyString {

public:

	/* Default Constructor */
	MyString();

	/* Parameterized Constructor */
	MyString(char*);

	/* Custom Copy Constructor */
	MyString(const MyString&);

	/* Custom Assignment Operator */
	MyString& operator= (const MyString&);

	/* Overload the random access operator*/
	char& operator[](int) const;

	/* Overload the '+' operator for concatenation of strings*/
	MyString& operator+(const MyString&);

	/* Returns the size of the string*/
	int size() const;

	/* Overload the ostream operator as a friend function.*/
	friend std::ostream& operator<< (std::ostream &, const MyString &);

	/* Destructor*/
	~MyString();

private:
        char* str;
        enum {MAX_SIZE = 1024};
        

};
