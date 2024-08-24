#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

class Heart {
public:
    void pump() {
        cout << "Heart is pumping blood...\n";
    }

    void contract() {
        cout << "Heart is contracting...\n";
    }

    void receiveBlood() {
        cout << "Heart is receiving blood...\n";
    }
};

class Blood {
public:
    void moveThroughVeins() {
        cout << "Blood is moving through veins...\n";
    }

    void moveToLungs() {
        cout << "Blood is moving to lungs...\n";
    }

    void moveToBody() {
        cout << "Oxygenated blood is moving to body...\n";
    }
};

int main() {
    Heart heart;
    Blood blood;

    for (int i = 0; i < 10; ++i) {
        heart.receiveBlood();
        heart.contract();
        heart.pump();
        blood.moveThroughVeins();
        blood.moveToLungs();
        blood.moveToBody();

        //this_thread::sleep_for(chrono::seconds(1));
    }

return 0;
}
