#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
    string word;
    string text;
    cout << "Welcome to the word filterer.... still working on the name of the program :/\n";
    cout << "Enter a word you would like filtered out: \n";
    getline(cin, word);
    cout << "Now enter a sentence containing that word at least once:\n";
    getline(cin, text);



    bleep(word, text);

    
    cout << text << "\n";

    return 0;

}