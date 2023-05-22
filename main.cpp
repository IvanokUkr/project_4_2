#include <iostream>
using namespace std;


int main() {
    const float k_USD = 38.02, k_USDzvorot = 37.50;

    float x;


cout << "Enter amount ="<< endl;
cin >> x;
cout << "currency =" << x / k_USD << " $" << endl;
cout << "currency zvorot =" << (x / k_USD) * k_USDzvorot  << " UAH" << endl;



    return 0;
}
