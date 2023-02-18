#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string fileName;
    cout<<"Enter the name of the C program file "<<endl;
    cin>>fileName;
    ifstream file(fileName);

    if (!file) {
        cout << "Error opening file" << endl;
        return 1;
    }

    int newlineCount = 0;
    char c;
    bool flag=false;
    char prev;
    while (file.get(c)) {
        if (c == '\n') {
            cout<<c;
            newlineCount++;
        }
    }

    cout << "Number of newlines in " << fileName << " " << newlineCount << endl;

    file.close();

    return 0;
}