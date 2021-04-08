#include "message.h"
using namespace std;

int main() {
    Message m1(10);
    Message m2(20, 1);
    Message m3;
    Message m4(m3);

    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;
}