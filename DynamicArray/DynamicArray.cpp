#include <iostream>
using namespace std;

// Todo: overload [] operator, add find method that returns the index if it finds the element in the array otherwise return -1
class DynamicArray {
private:
    int* arr;
    int size;
    int length;
    int index;
public:
    DynamicArray() {
        size = 5;
        arr = new int[size];
        length = 0;
        index = 0;
    }

    int getLength() const {
        return length;
    }

    int getCapacity() const {
        return size;
    }

    void insert(int value) {
        // if array is already filled
        if (length == size) {
            size *= 2;
            int* ptr = new int[size];

            // copying values
            for (int i = 0; i < length; ++i) {
                ptr[i] = arr[i];
            }

            delete[] arr;
            arr = ptr;
        }

        arr[index] = value;
        ++index;
        ++length;
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void print() {
        for (int i = 0; i < length; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getAt(int i) {
        if (i < length && i >= 0) {
            return arr[i];
        }
        return INT_MIN;
    }

    bool search(int target) {
        for (int i = 0; i < length; ++i) {
            if (arr[i] == target) {
                return true;
            }
        }
        return false;
    }

    void sort() {
        for (int i = 0; i < length; ++i) {
            for (int j = i+1; j < length; ++j) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};
int main()
{
    DynamicArray arr;
    cout << "Size : " << arr.getLength() << "\nCapacity : " << arr.getCapacity() << endl;

    for (int i = 10; i > 0; --i) {
        arr.insert(i);
    }

    arr.print();
    cout << "Size : " << arr.getLength() << "\nCapacity : " << arr.getCapacity() << endl;

    arr.insert(6);

    arr.print();
    cout << "Size : " << arr.getLength() << "\nCapacity : " << arr.getCapacity() << endl;

    cout << arr.getAt(8) << endl; // 5

    cout << fixed << boolalpha << arr.search(5) << endl;

    arr.sort();
    arr.print();

}
