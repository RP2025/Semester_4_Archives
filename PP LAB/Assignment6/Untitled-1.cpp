#include <iostream>
using namespace std;

int main() {
    int p = 10;
    int *q = new int;
    q = &p;
    delete q;
    return 0;
}
