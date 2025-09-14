//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class ADD{
    public:
   
    ADD(int a, int b){
    cout<<a+b<<endl;}
    ADD(double a, double b){
    cout<<a+b<<endl;}
    ADD(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
   

};

int main(){
    ADD a1(3,4);
    ADD a2(3.4,2.0);
    ADD a3(2,3,5);
    return 0;
}
/* output
7
5.4
10
*/
