# include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string text;
    cout << "Enter some text: ";
    getline(cin, text);

    cout << "You entered: " << num << " and \"" << text << "\"" << endl;
    return 0;
}