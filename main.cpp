#include <iostream>

#include "Locked.h"
using namespace std;

void login() {
    throw Locked {};
}

int main() {
    try {
        login();
    } catch (const exception& ex ) {
        cout << ex.what();
    }

    return 0;
}
