#include "Password.h"
#include <iostream>
#include <fstream>
#include<list>
#include<string>
using namespace std;

//check if the password is part of the 100 000 most used passwords
//this will prevent a dictionary force method to work on your password
bool isCommon(string password) {
    string line;
    ifstream file("Most_Common_Passwords.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            if (line.find(password) != string::npos) { // npos is all char until the end of the string
                return true;
            }
        }
    }
    return false;
}

//check if birth year is used, it is an easy to guess number patern for hackers
bool isBirthYear(string password) {
    string beginning = password.substr(0,4); //the first 4 char
    string ending = password.substr(password.size() - 4); //the last 4 char

    int beginDigits = 0;
    int endDigits = 0;
    for (int i = 0; i<4; i++){
        if (isdigit(beginning.at(i))){ //if i is a digit
            beginDigits += 1;
        }
        if (isdigit(ending.at(i))){ //if i is a digit
            endDigits += 1;
        }
    }
    //see if either the beginning or the end are years
    string start;
    if(beginDigits == 4){
        start = beginning.substr(0,2);
        if(start.compare("20")){
            return true;
        }
        else if(start.compare("19")){
            return true;
        }
    }
    if(endDigits == 4){
        start = beginning.substr(0,2);
        if(start.compare("20")){
            return true;
        }
        else if(start.compare("19")){
            return true;
        }
    }
    return false; //if it makes it this far its false
}



/*
 * things i could need to do,
 * add functions to the h file ... not sure how
 * add a way to decrypt ... need incrypt
 * call all methods in one big method ... need to wait
 *
 */

//------ end of jack -----


Password::Password()
{
    for(int i=0; i<100; i++)
    {
        pass[i] = NULL;
    }
}

Password::~Password()
{

}

std::ostream& operator<<(std::ostream& outs, const Password& p){
    outs<<"Password: "<< p.pass<<endl;
    return outs;
}

std::istream& operator>>(std::istream& ins, Password& p){
    ins >> p.pass;
    return ins;
}

string Password:: CheckPassword(){  //check if password is repeating 3 digits in a row

    char *array = new char[100];
    for (int i = 0; i < 100; i++) {
        if(pass[i]!=NULL) {
            array[i] = pass[i];
            if (array[i]==array[i+1] && array[i+1]==array[i+2])
            {
                cout<<"repeating password";
            }
        }
    }
            for (int j=0; j<4; j++)
    if (pass[i])





}

void Password::set_pass(char &p)
{
    *pass= p;
}

const char* Password::get_pass()
{
    return pass;
}

//char* Password::convertToAscii()
//{
//    for(int i=0; i<100; i++) {
//        if(pass[i] != NULL) {
//            pass[i] = int(pass[i]);
//        }
//    }
//    return pass;
//}

