/**
 * @Driver - Koundinya Vinnakota
 * @Navigator - Mayank Sharma
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */
#include <iostream>
#include <pid.hpp>

int main() {
    // Object initialization for the class PID
    PID controller_1(0.8, 0.7, 0.6, 2, 8, -8);
    // Displaying the computed velocity to the user
    cout << controller_1.ComputeVelocity(18) << endl;
    return 0;
}
