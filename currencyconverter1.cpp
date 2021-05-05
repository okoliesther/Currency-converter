//Welcome to Purity Curreny Converter

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    float Naira;
    cout << "Enter amount in Naira(#): ";
    cin >> Naira;
    cout << "#" << Naira << " = " << Naira/600 << " Pounds" << endl;
    cout << "#" << Naira << " = " << Naira/489 << " Dollars" << endl;
    cout << "#" << Naira << " = " << Naira/550 << " Euros" << endl;
    cout << "#" << Naira << " = " << Naira/180 << " Yuan" << endl;
    cout << "#" << Naira << " = " << Naira/250 << " France" << endl;
    cout << "#" << Naira << " = " << Naira/400 << " Rand" << endl;
    cout << "#" << Naira << " = " << Naira/220 << " Canadian doller" << endl;
    return 0;
}
