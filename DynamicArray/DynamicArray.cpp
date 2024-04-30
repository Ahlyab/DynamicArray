#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<int> s1;
    stack<int> s2;

    s1.push(5);
    s1.push(2);
    s1.push(9);
    s1.push(16);
    s1.push(18);
    s1.push(7);

    int max = INT_MIN;

    while (!s1.empty()) {
        int top = s1.top();

        if (top > max) {
            max = top;
        }

        s2.push(top);
        s1.pop();
    }

    while (!s2.empty()) {
        int top = s2.top();
        s1.push(top);
        s2.pop();
    }

    cout << "Max number : " << max << endl;
    
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }

}

/*
Stack
STL
Files
Streams
*/