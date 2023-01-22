#include "Password.h"
#include "Encrypt.h"
#include <iostream>


int main() {
    Password p;

    string option;
    string encryption1;
    string decryption1;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "Please pick one of the following options:"
            "1.encrypt"
            "2.decrypt \n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cin >>  option;

    if (option == "encrypt")


        cout << encryption1 << " " << endl;
    }

    if (option == "decrypt")
    {
        cout << "What do you want to decrypt \n";
        cin.ignore();
        cin.clear();

        getline (cin, decryption1);
        Encrypt ( decryption1);
        cout << decryption1 << " " << endl;
    }
    return 0;




    return 0;
}
