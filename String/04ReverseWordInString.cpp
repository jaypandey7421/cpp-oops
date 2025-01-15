#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    vector<string> words;
    stringstream ss(s);
    string word;

    // Extract words from the stringstream and store them in a vector
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Join the words with a single space
    string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    string input = "  Hello   World  this is   C++   ";
    cout << "Reversed Words: \"" << reverseWords(input) << "\"" << endl;

    return 0;
}
