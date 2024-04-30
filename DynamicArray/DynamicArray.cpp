#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main()
{
    vector<int> arr = { 1,1,2,3,3,4,5,5,6,7,8,7,7,6,5,55,4,4,3,23,213,2,3,4,1,3,5,6,7,8,9,5,4,3,2,1,1,1,1 };
    set<int> s;

    for (int n : arr) {
        s.insert(n);
    }

    arr.clear();

    for (int n : s) {
        arr.push_back(n);
    }

    for (int n : arr) {
        cout << n << " ";
    }

}

/*
Stack
STL
Files
Streams
*/