#include<iostream>
#include<string>
using namespace std;
int main()
{
    double itemOnePrice,itemTwoPrice,basePrice,discountPrice,totalPrice,taxRate;
    string clubCard;
    cout<<"Enter price of the first item:"<<endl;
    cin>>itemOnePrice;
    cout<<"Enter price of the second item:"<<endl;
    cin>>itemTwoPrice;
    cout<<"Does customer have a club card? (Y/N):"<<endl;
    cin>>clubCard;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax:"<<endl;
    cin>>taxRate;
    basePrice = itemOnePrice + itemTwoPrice;
    if(itemOnePrice < itemTwoPrice)
        discountPrice = itemTwoPrice + (itemOnePrice / 2);
    else
        discountPrice = itemOnePrice + (itemTwoPrice / 2);
    if(clubCard == "y")
        discountPrice = discountPrice - (discountPrice * 0.1);
    totalPrice = discountPrice + (discountPrice * (taxRate / 100));
    cout<<"Base price = "<<basePrice<<endl;
    cout<<"Price after discounts = "<<discountPrice<<endl;
    printf("Total price = %.2f",totalPrice);
    return 0;

}
