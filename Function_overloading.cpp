//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Bill{
    public:
     int bill(int items , int price, int items2 , int price2){
         return (items*price)+(items2*price2);
     }
     double bill(double items , double price, double items2 , double price2){
         return (items*price)+(items2*price2);
     }
   
    int bill_taxed(int items , int price, int items2 , int price2, int tax){
        return (items*price)+(items2*price2)+tax;
    }
   
    double bill_taxed(double items , double price, double items2 , double price2, double tax){
        return (items*price)+(items2*price2)+tax;
    }
};
int main(){
    Bill b1,b2;
    cout<<"Bill before tax is: "<<b1.bill(2,30,4,50)<<"Rs."<<endl;
    cout<<"Bill after tax(10 rs per item) is: "<<b2.bill_taxed(2,30,4,50,60)<<"Rs."<<endl;
}
/* output
Bill before tax is: 260Rs.
Bill after tax(10 rs per item) is: 320Rs.
*/
