#include "MyString.h"


	/* Default Constructor */
	 MyString::MyString() {}



	/* Parameterized Constructor */
	MyString::MyString(char* newStr){
		str = new char[int(strlen(newStr))+1];
		memcpy(str, newStr, int(strlen(newStr)) + 1);
	}



	/* Custom Copy Constructor */
	MyString::MyString(const MyString& old) {
		str = new char[int(strlen(old.str)) + 1];
		memcpy(str, old.str, int(strlen(old.str)) + 1);
	}



	/* Custom Assignment Operator */
	MyString&  MyString::operator= (const MyString& rightStr) {
		delete[] str;
		str = new char[int(strlen(rightStr.str))+1];
		memcpy(str, rightStr.str, int(strlen(rightStr.str)) + 1);
		return *this;
	}



	/* Overload the random access operator*/
	char&  MyString::operator[](int index) {
		return str[index];
	}


	/* Overload the '+' operator for concatenation of strings*/
	MyString&  MyString::operator+(const MyString& rightStr) {
		char *temp = str;
		str = new char[int(strlen(temp)) + int(strlen(rightStr.str)) + 1];
		int i,j=0;
		for (i=0; i < int(strlen(temp)); i++)
			str[i] = temp[i];
		for (j=0; j< int(strlen(rightStr.str)); j++)
			str[i++] = (rightStr.str)[j];
		str[i] = '\0';
		delete[] temp;
		return *this;
	}


	/* Returns the size of the string*/
	int  MyString::size() {
		return strlen(str);
	}


	/* Overload the ostream operator as a friend function.*/
	std::ostream&  operator<< (std::ostream &out, const MyString &st){
		out << st.str;
		return out;
	}


	/* Destructor*/
	MyString::~MyString(){
		delete[] str;
	}
