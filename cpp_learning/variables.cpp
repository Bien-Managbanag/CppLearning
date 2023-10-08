#include <iostream>

using namespace std;

int main()
{
    string characterName = "Dominic"; /*string variable*/
    int characterAge; /*int variable*/
    characterAge = 21;
    cout << "Hi my name is " << characterName << endl;
    cout << "I am years " << characterAge << " old" << endl;

    characterName = "Eric"; /*changed string*/

    cout << "I like the name " << characterName << endl;
    cout << "However I don't like being " << characterAge << endl;

    return 0;
}