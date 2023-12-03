#include<iostream>
using namespace std;


int main(){
    int x;
    int Even=0;
    int Odd=0;

    cout << "Enter an integer: ";
    cin >> x;

    while (x != 0)
        {
        if (x % 2 == 0)
        {Even += 1;}
        else{Odd += 1;}   
    cout << "Enter an integer: ";
    cin >> x;}




    cout << "#Even numbers = "<<Even<<endl;

    cout << "#Odd numbers = "<<Odd<<endl;

return 0;
}
