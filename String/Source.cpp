#include <iostream>
#include <cstring>

using namespace std;

/*String Class*/
class String {
	char* str;

 public:

	/* Default Constructor */
	String() {}



	/* Parameterized Constructor */
	String(char* newStr){
		str = new char[int(strlen(newStr))+1];
		memcpy(str, newStr, int(strlen(newStr)) + 1);
	}



	/* Custom Copy Constructor */
	String(const String& old) {
		str = new char[int(strlen(old.str)) + 1];
		memcpy(str, old.str, int(strlen(old.str)) + 1);
	}



	/* Custom Assignment Operator */
	String& operator= (const String& rightStr) {
		delete[] str;
		str = new char[int(strlen(rightStr.str))+1];
		memcpy(str, rightStr.str, int(strlen(rightStr.str)) + 1);
		return *this;
	}



	/* Overload the random access operator*/
	char& operator[](int index) {
		return str[index];
	}


	/* Overload the '+' operator for concatenation of strings*/
	String& operator+(const String& rightStr) {
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
	int size() {
		return strlen(str);
	}


	/* Overload the ostream operator as a friend function.*/
	friend ostream& operator<< (ostream &out, const String &st){
		out << st.str;
		return out;
	}


	/* Overload the istream operator as a friend function.*/
	//friend istream& operator>>(istream &in, String &st) {
		//char* temp = new char[0];
		//in >> temp;
		//return in;
	//}



	/* Destructor*/
	~String(){
		delete[] str;
	}

};


/* Main Function*/
int main() {

	String a = "Hello";
	String b;
	b = "how";
	cin.get();
	return 0;
}