#include <iostream>
#include <string>

#include "LinkedList.hpp"

using namespace std;

int main() {
    LinkedList<int> myList = LinkedList<int>();

    myList.append(20);

    cout << myList.getElement(0) << endl;

    myList.replace(0, 10);

    cout << myList.getElement(0) << endl;

    myList.append(20);
    myList.append(30);
    myList.append(40);
    myList.append(50);

    cout << myList << endl;

    myList.remove(3);

    cout << myList << endl;

    myList.insert(3, 80);
    myList.insert(0, 90);

    cout << myList << endl;

    try {
        myList.insert(-1, 100);
    } catch (string& e) {
        cout << e << endl;
    }

    try {
        myList.insert(20, 14);
    } catch (string& e) {
        cout << e << endl;
    }

    try {
        myList.getElement(50);
    } catch (string& e) {
        cout << e << endl;
    }

    myList.remove(0);

    cout << myList << endl;

    myList.clear();
    
    cout << myList << endl;

    return 0;
}