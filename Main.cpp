#include <iostream>
#include "Functions.h"

int main() {
    bool RequestedExit = false;
    while(!RequestedExit) {
pr:
        Cleart();
        std::cout << "Collatz Conjecture Viewer\n";
        std::cout << "Functions:\n[0] EXIT\n[1] Reduce to 1\n[X] Graph X's sequence\n";
        std::cout << "[3] Calculate X steps from Y's sequence\n[4] Search for X in Y's sequence\n:: ";
        std::string Selection;
        std::cin >> Selection;
        if (Selection == "0") { RequestedExit = 1; }
        else if(Selection == "1") { Reduce(); }
        // else if(Selection == "2") { Visualize(); }
        else if(Selection == "3") { CalculateXStep(); }
        else if(Selection == "4") { CalculateUntilX(); }
        else { goto pr; }
    }
}