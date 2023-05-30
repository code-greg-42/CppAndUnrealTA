#include <iostream>
#include <string>
using namespace std;

class Dog {
public: // public members
    // Constructor with parameters
    Dog(string breed, string color, int height, int weight) : breed(breed), color(color), height(height), weight(weight) { }

    // Member functions
    void shake() {
        cout << "*shakes paw*" << endl;
    }

    void sit() {
        cout << "*sits*" << endl;
    }

    void lay_down() {
        cout << "*lays down*" << endl;
    }

private: // private members
    string breed;
    string color;
    int height;
    int weight;
};

int main() {
    // Creating an object of the Dog class
    Dog hound_dog("Hound", "Brown", 2, 60);

    // Calling member functions
    hound_dog.sit();
    hound_dog.shake();
    hound_dog.lay_down();

    return 0;
}
