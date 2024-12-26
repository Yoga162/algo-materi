#include <iostream>
#include <string> 

// Use the standard namespace to avoid the need to prefix with std::
using namespace std; 

struct Person {
    string name;
    int age;
    string address;
};

void printPerson(const Person& person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;
}

int main() {
    // Create an instance of Person
    Person person1;

    // Assign values to the fields of person1
    person1.name = "John Doe";
    person1.age = 30;
    person1.address = "123 Main St, Anytown, USA";

    // Print the details of person1
    printPerson(person1);

 return 0;
}
