#include "unity.h"
#include <gpa.h>

/* Modify these two lines according to the project */
#include <gpa.h>
#define PROJECT_NAME    "GPA/CGPA calculator and gradepoint predictor"

/* Prototypes for all the test functions */
void semester();
void grade_predictor();
void cgpa_calculator();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(semester);
  RUN_TEST(grade_predictor);
  RUN_TEST(cgpa_calculator);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void semester(void) {
  TEST_ASSERT_EQUAL(9.0, add(, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void cgpa_calculator(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void grade_pointer(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}
