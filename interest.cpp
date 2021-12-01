// To print the Simple interest
#include<iostream>
using namespace std;
int main(){
    int pr; float roi,in,yr;
cout<<"Enter the principal amount,rate of interest, and no. of years: ";
cin>>pr>>roi>>yr;
in=(pr*roi*yr)/100;
cout<<"\nOk so your interest is: "<<in;
cout<<"\nAnd the total amount to be paid is: "<<in+pr;
return 0;
}
