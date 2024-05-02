#include <iostream>
#include <vector>
#include <set>
using namespace std;

class divideZeroException : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Denominator is ZERO";
    }
};

int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5 };
    int a = 0, b = 0;
    try
    {
        if (b == 0)
        {
            throw divideZeroException();
        }
        else
        {
            cout << a / b << endl;
        }
    }
    catch (const exception& e)
    {
        cerr << e.what() << '\n';
        // cout << "Idr araha ho" << endl;
    }
}

/*
Stack
STL
Files
Streams
*/