#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Password {

friend istream& operator >>(istream& ins, Password& p);
friend ostream& operator <<(ostream& outs, const Password& p);

private:
    char pass[100];


public:
    Password();
    ~Password();
    string CheckPassword();
    void set_pass(char&);
    const char* get_pass();
    int get_passLength();
    bool isCommon(string);
    char* convertToAscii();


};