#include <iostream>
#include <forward_list>
using namespace std;


int main()
{
    forward_list<int> list;

    list.assign({0,9,8,7,6,5,4,3});

    forward_list<int>::iterator fast = list.begin();
    forward_list<int>::iterator slow = list.begin();

    /*auto fast = list.begin();
    auto slow = list.begin();*/

    while (next(fast) != list.end() && next(next(fast)) != list.end()) {
        slow = next(slow);
        fast = next(next(fast));
    }

    cout << "value : " <<  *slow << endl;
}

/*
Stack
STL
Files
Streams


*/