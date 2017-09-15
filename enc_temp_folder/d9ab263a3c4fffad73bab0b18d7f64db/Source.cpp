#include <iostream>
#include <cstring>

using namespace std;

class String {
	char* str;
public:
	String() {}

	String(char* newStr){
		str = new char[strlen(newStr)+1];
		memcpy(str, newStr, strlen(newStr) + 1);
	}

	String(const String& old) {
		str = new char[strlen(old.str) + 1];
		memcpy(str, old.str, strlen(old.str) + 1);
	}

	char& operator[](int index) {
		return str[index];
	}

	String& operator+(String& rightStr) {
		char *temp = str;
		str = new char[strlen(temp) + rightStr.size() + 1];
		int i,j=0;
		for (i=0; i < strlen(temp); i++)
			str[i] = temp[i];
		for (j=0; j< rightStr.size(); j++)
			str[i++] = (rightStr.str)[j];
		str[i] = '\0';
		delete[] temp;
		cout<<sizeof(str) << endl;
		return *this;
	}

	int size() {
		return strlen(str);
	}

	friend ostream& operator<< (ostream &out, const String &st){
		out << st.str;
		return out;
	}

	~String(){
		delete str;
	}

};


int main() {

	String newStr = "hello";
	String newStr2 = "Jitin";
	
	//String newStr3 = (newStr + newStr2);
	//String newStr2 = newStr;
	//String newStr3;
	//newStr3 = newStr;
	cout << (newStr + newStr2);
	cin.get();
	return 0;
}