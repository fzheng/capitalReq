#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    float capital;
    float underlyingPrice;
    float strikePrice;
    float premium;
    int contracts;
    cout << "Capital: $ ";
    cin >> capital;
    cout << "Current Price: $ ";
    cin >> underlyingPrice;
    cout << "Strike price: $ ";
    cin >> strikePrice;
    cout << "Premium: $ ";
    cin >> premium;
    float coef1 = .25 * underlyingPrice + premium;
    if (underlyingPrice > strikePrice) coef1 -= underlyingPrice - strikePrice;
    float coef2 = .15 * strikePrice + premium;
    contracts = min(capital/coef1/100, capital/coef2/100);
    cout << "Contracts: " << contracts << endl;
    printf("Max Gain: $%.2f\n", (contracts * premium * 100.0));
    return 0;
}
