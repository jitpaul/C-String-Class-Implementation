#ifndef INCLUDED_MYSTRING_H
#define INCLUDED_MYSTRING_H
#endif

#include <iostream>
#include <cstring>

namespace mystr{

/*MyString Class*/
class MyString {

public:

	/* Default Constructor */
	MyString();

    static const size_t MAX_SIZE = 1024;

	/* Parameterized Constructor */
	MyString(const char*);

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

    /* Overload the istream operator as a friend function.*/
	friend std::istream& operator>> (std::istream &, MyString &);

	/* Destructor*/
	~MyString();

private:
        char* str;
};

};