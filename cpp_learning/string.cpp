#include <iostream>

using namespace std;

int main(){
    string phrase = "I love pizza";
    cout << "Hello\n"; /*using \n can put the string on the next line */
    phrase[0] = 'B'; /*changes pos[0] in phrase from I to B*/
    cout << phrase << endl;

    cout << phrase.find("pizza", 0) << endl; /*find function finds a certain string in phras;  pizza starts at index pos 7*/
    cout << phrase.substr(3, 6) << endl; /*(x,y) x = starting index, y = ending index */
    return 0;
}