#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    // write into file
    /*ofstream myFile("table.txt");

    for (int i = 1; i <= 10; ++i) {
        myFile << "2 X " << i << " = " << 2 * i << endl;
    }

    myFile.close();*/

    // read from file

    ifstream file("table.txt");

    string data;

    while (file >> data) {
        cout << data << endl;
    }

    file.close();
}

/*
Stack
STL
Files
Streams
*/