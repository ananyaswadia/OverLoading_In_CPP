//Ananya Swadia
//24070123012

#include <iostream>
using namespace std;

class Ticket {
    string movie;
    string seat;
    double price;

public:
    Ticket() { movie="NA"; seat="Unassigned"; price=0.0; }
    Ticket(string m) { movie=m; seat="Unassigned"; price=150.0; }
    Ticket(string m, string s, double p) { movie=m; seat=s; price=p; }

    void showTicket() {
        cout << "Movie: " << movie << ", Seat: " << seat << ", Price: " << price << endl;
    }
};

int main() {
    Ticket t1;
    Ticket t2("Avengers");
    Ticket t3("Inception", "B12", 250.0);

    t1.showTicket();
    t2.showTicket();
    t3.showTicket();
}
/*output 
Movie: NA, Seat: Unassigned, Price: 0
Movie: Avengers, Seat: Unassigned, Price: 150
Movie: Inception, Seat: B12, Price: 250
*/
