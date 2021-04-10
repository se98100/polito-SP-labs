#include "message.h"
#include "duration_logger.h"
using namespace std;

int main() {
    DurationLogger logger("main");

    Message m1(100000000);
    cout << m1 << endl;

    Message m2(200000000, 1);
    cout << m2 << endl;

    Message m3;
    cout << m3 << endl;

    Message m4(m3);
    cout << m3 << " -> " << m4 << endl;

    Message m5(move(m3));
    cout << m3 << " -> " << m5 << endl;

    Message m6 = m1;
    cout << m1 << " -> " << m6 << endl;

    Message m7 = move(m1);
    cout << m1 << " -> " << m7 << endl;
}