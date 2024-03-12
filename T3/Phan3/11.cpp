#include <bits/stdc++.h>

using namespace std;
//a
struct String{
    int n;
    char *str;
//b
    String(const char* c){
        n = strlen(c);
        str = new char[n + 1];
        strcpy(str, c);

    }
    //c
    ~String(){
        delete[] str;
    }
	//d
    void print(){
        cout << str << endl;
    }
    //e
    void append(const char* s){
        int t = strlen(s);
        char* c = new char[n + t + 1];
        strcpy(c, str);
        strcpy(c + n, s);
        delete[] str;
        strcpy(str, c);
        n += t;
    }
};

int main() {
	String greeting("Hi");
	greeting.append(" there");
    greeting.print();
}

