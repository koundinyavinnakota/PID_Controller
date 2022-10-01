/**
 * @Driver - Koundinya Vinnakota
 * @Navigator - Mayank Sharma
 * @version - 0.1
 * @copyright - 2022 - vkd@umd.edu
 * @return int - 0, if there is no error in the code.
 */
#include <gtest/gtest.h>
#include <pid.hpp>


TEST(Check_dt, test_checkParams) {
  EXPECT_THROW(PID pid(1.0, 2.0, 3.0, 0.0, 0.0, 0.0), std::domain_error);
  EXPECT_THROW(PID pid(1.0, 2.0, 3.0, -5.0, 0.0, 0.0), std::domain_error);
}
TEST(Check_Gains, test_checkParams) {
  //  invalid Kp
  EXPECT_THROW(PID pid(0.0, 4.0, 4.0, 1.0, 0.0, 0.0), std::domain_error);
  EXPECT_THROW(PID pid(-2.0, 5.0, 3.0, 2.0, 0.0, 0.0), std::domain_error);

  //  invalid Kd
  EXPECT_THROW(PID pid(2.0, 2.0, 0.0, 1.0, 0.0, 0.0), std::domain_error);
  EXPECT_THROW(PID pid(2.0, 4.0, -3.0, 1.0, 0.0, 1.0), std::domain_error);
}
