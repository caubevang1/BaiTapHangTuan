#include <iostream>
#include <string.h>
using namespace std;

class String {
public:
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        n = other.n;
        str = new char[n + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    void print() {
        cout << str << endl;
    }

    String append(const char* s)  {
        int len = strlen(s);
        char* newStr = new char[n + len + 1];
        strcpy(newStr, str);
        strcat(newStr, s);

        String newString(newStr);
        delete[] newStr;
        return newString;
    }
private:
    int n;
    char* str;

};

int main() {
    String greeting("Hi");
    String otherGreeting = greeting.append(" there");
    otherGreeting.print();  
    return 0;
}
