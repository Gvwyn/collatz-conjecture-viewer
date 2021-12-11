#include <iostream>
#include "Functions.h"

int main() {
    bool RequestedExit = false;
    while(!RequestedExit) {
pr:
        Cleart();
        std::cout << "Collatz Conjecture Viewer\n";
        std::cout << "(Disclaimer: IF the number goes beyond the 2^63 limit, the program will halt)\n";
        std::cout << "Functions:\n[0] EXIT\n[1] Reduce to 1\n[2] Calculate X steps\n[3] Search for X in Y's collatz-sequence\n:: ";
        int Selection;
        std::cin >> Selection;
        if (Selection == 0) { RequestedExit = 1; }
        else if(Selection == 1) { Reduce(); }
        else if(Selection == 2) { CalculateXStep(); }
        else if(Selection == 3) { CalculateUntilX(); }
        else { goto pr; }
    }
}