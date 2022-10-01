/**
 * @Driver - Koundinya Vinnakota
 * @Navigator - Mayank Sharma
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */
#include <pid.hpp>
#include <stdexcept>


PID::PID(double kp, double kd, double ki, double d_t, double u_max,
        double u_min) {
            k_p = kp;
            k_d = kd;
            k_i = ki;
            dt = d_t;
            max = u_max;
            min = u_min;
            CheckParams();
        }
double PID::Get_k_p() {
    return k_p;
}
double PID::Get_k_d() {
    return k_d;
}
double PID::Get_k_i() {
    return k_i;
}
double PID::CalculateCummulativeError(double cum_error) {
    return (cum_error * dt);
}
double PID::ErrorDerivativeCalculation(double error) {
    return ( (error - old_error) / dt);
}
double PID::ComputeVelocity(int position) {
    return 10;
}
void PID::CheckParams() {
    if (k_p <= 0 || k_i <=0 || k_d <= 0) {
        throw std::domain_error(" Invalid gains, Gains should be "
        " positive and non zero ");
    } else if (dt <= 0.0) {
        throw std::domain_error(" Invalid time , Time should be "
        " positive and non zero");
    }
}

