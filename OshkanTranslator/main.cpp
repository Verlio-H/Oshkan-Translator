
#include <iostream>
#include "oshkan2english.h"
using namespace std;

string getword(string helo);

long reader = 0;
long readertemp = 0;

int main() {
    string i;
    reader = 0;
    string input;
    cout << "input: ";
    getline(cin,input); //gathering input
    input += " ";
    readertemp = input.length() - 1;
    while (reader < input.length() - 1) { //loop to gather the translations
        i = oshkanenglish(getword(input));
    }
    i = i.substr(1, i.length() - 1);
    cout << "result: " << i <<endl; //result is printed
    getline(cin,i);
    if (i != "exit") {
        reader = 0;
        readertemp = 0;
        reset();
        main();
    }
    return 1;
}

string getword(string helo) { //function to gather word
    string result;
    while (reader < helo.length()) {
        if (helo.at(reader) != ' ') {
            result = result + helo.at(reader);
        } else {
            readertemp = reader;
            reader = helo.length() - 1;
        }
        reader++;
    }
    reader = readertemp;
    reader++;
    return result;
}

