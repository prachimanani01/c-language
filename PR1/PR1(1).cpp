#include<iostream>

using namespace std;

main()
{
    int p,r,t,interest;

    cout<<"Enter the p :- ";
    cin>>p;
    cout<<"Enter the r :- ";
    cin>>r;
    cout<<"Enter the t :- ";
    cin>>t;

    interest = p*r*t/100;
    cout<<"interest = "<<interest;

    return 0;

}