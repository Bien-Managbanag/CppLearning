#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: \n";
    getline(cin, name);
    /*getline allows you to get an entire line of text. Instea of getting like one number or one character, it lets us get the entire line that the user enters*/
    cout << "Enter your age: \n";
    cin >> age;
    cout << "Your name is " << name << " and you are " << age << " years old" << endl;

    return 0;
}