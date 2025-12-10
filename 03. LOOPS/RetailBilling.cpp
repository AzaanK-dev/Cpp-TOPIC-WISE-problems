// Calculate total billing for multiple products with given retail prices.

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int prd;
    float retail,qty,total;
    while(true){
        cout << "Product(-1 to quit): ";
        cin >> prd;
        if(prd==-1){
            break;
        }
        cout << "Quantity of product: ";
        cin >> qty;
        switch(prd){
            case 1: retail = qty * 2.98; break;
            case 2: retail = qty * 4.50; break;
            case 3: retail = qty * 9.98; break;
            case 4: retail = qty * 4.49; break;
            case 5: retail = qty * 6.87; break;
        }
        total += retail;
    }
    cout << setprecision(2) << fixed << "Total: $" << total<<endl;
}
