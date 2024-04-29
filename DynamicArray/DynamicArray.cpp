#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<char> chars;

    string str = "Hello,World!";

    for (char c : str) {
        chars.push(c);
    }

    string reverse = "";

    while (!chars.empty()) {
        reverse += chars.top();
        chars.pop();
    }

    cout << "Str : " << str << endl;
    cout << "Reversed : " << reverse << endl;
}

/*
Stack
STL
Files
Streams
*/