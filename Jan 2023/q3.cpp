#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

int main() {
    string fileName;
    cout<<"Enter the name of the C++ program file:";
    cout<<endl;
    cin>>fileName;
    ifstream file(fileName); // Open the file

    if (!file) {
        cout << "Error opening file" << endl;
        return 1;
    }

    string fileContent, line;
    while (getline(file, line)) {
        fileContent += line + "\n";
    }

    // Regular expressions to match integer, float, char and string literals
    regex intRegex("(\\+|-)?[0-9]+");
    regex floatRegex("(\\+|-)?[0-9]*\\.[0-9]+");
    regex charRegex("char");
    regex stringRegex("string");

    int intCount = 0, floatCount = 0, charCount = 0, stringCount = 0;
    sregex_iterator it(fileContent.begin(), fileContent.end(), intRegex);
    for (; it != sregex_iterator(); ++it) {
        intCount++;
    }
    it = sregex_iterator(fileContent.begin(), fileContent.end(), floatRegex);
    for (; it != sregex_iterator(); ++it) {
        floatCount++;
    }
    it = sregex_iterator(fileContent.begin(), fileContent.end(), charRegex);
    for (; it != sregex_iterator(); ++it) {
        charCount++;
    }
    it = sregex_iterator(fileContent.begin(), fileContent.end(), stringRegex);
    for (; it != sregex_iterator(); ++it) {
        stringCount++;
    }

    cout << "Number of integers: " << intCount << endl;
    cout << "Number of floats: " << floatCount << endl;
    cout << "Number of characters: " << charCount << endl;
    cout << "Number of strings: " << stringCount << endl;

    return 0;

}
