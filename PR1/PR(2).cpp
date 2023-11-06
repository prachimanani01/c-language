#include <iostream>
using namespace std;

int main() 
{

    int costprice, sellingprice, profitLoss;

    cout<<"Enter the cost price: ";
    cin>>costprice;

    cout<<"Enter the selling price: ";
    cin>>sellingprice;

    profitLoss = sellingPrice - costprice;

    if(profitLoss > 0) {
        cout<<"You made a profit of $" << profitLoss << endl;
    }else if(profitLoss < 0) {
        cout<<"You incurred a loss of $" << -profitLoss << endl;
    }else{
        cout<<"You neither made a profit nor incurred a loss." << endl;
    }

    return 0;
}