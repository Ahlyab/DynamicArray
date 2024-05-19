#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() :name{""}, age{0} {}
    Person(string name, int age) : name{name}, age{age} {}

    void serialize(string filename)  {
        ofstream file(filename, ios::binary);

        if (!file.is_open()) {
            cout << "file does not exist";
            return;
        }

        file.write(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
        cout << "Serialization Successful" << endl;
    }

    Person deserialize(string filename) {
        Person obj;
        ifstream file(filename, ios::binary);

        if (!file.is_open()) {
            cout << "file does not exist";
            return obj;
        }
        
        file.read(reinterpret_cast<char*>(&obj), sizeof(obj));
        file.close();
        cout << "deserialization Successful" << endl;

        return obj;
    }
};


int main()
{
    Person person("meow meow", 10);
    person.serialize("meow.bin");
    Person afterDeserialize = person.deserialize("meow.bin");

    cout << afterDeserialize.name << " : " << afterDeserialize.age << endl;
}

/*
Stack
STL
Files
Streams
*/