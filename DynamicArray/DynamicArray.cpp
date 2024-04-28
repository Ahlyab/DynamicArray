#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> nums = { 0,9,8,7,6,5,4,3,2,1 };

    for (auto i = nums.begin(); i != nums.end(); ++i) {
        for (auto j = i+1; j != nums.end(); ++j) {
            if (*i > *j) {
                int temp = *j;
                *j = *i;
                *i = temp;
            }

        }
    }

    for (int n : nums) {
        cout << n << " ";
    }
}

/*
Stack
STL
Files
Streams


*/