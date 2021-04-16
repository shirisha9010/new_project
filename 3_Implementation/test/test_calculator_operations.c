#include "unity.h"
#include <calculator_operations.h>
#define PROJECT_NAME    "CALCULATOR"

operand test={3,1},test1={-3,-1};
int v1=6,v2=2,v3=4;
int v4=-6,v5=-2,v6=-4;
int d1=2,d2=0;
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_divide_by0(void);
void test_s_root(void);
void test_fact(void);
void test_fact_negative(void);
void test_fact_by0(void);
void test_Rec(void);
void test_Sqr(void);
void test_Para(void);
void test_Trai(void);





/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_s_root);
  RUN_TEST(test_fact);
  RUN_TEST(test_Rec);
RUN_TEST(test_fact_negative);
RUN_TEST(test_fact_by0);
RUN_TEST(test_divide_by0);
RUN_TEST(test_Sqr);
RUN_TEST(test_Para);
RUN_TEST(test_Trai);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(4, addition(&test));
  TEST_ASSERT_EQUAL(-4, addition(&test1));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(2,subtraction(&test));
  TEST_ASSERT_EQUAL(-2, subtraction(&test1));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(12, multiplication(&v1,&v2));
  TEST_ASSERT_EQUAL(12, multiplication(&v4,&v5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(3, division(&v1,&v2));
  TEST_ASSERT_EQUAL(3, division(&v4,&v5));
}
void test_divide_by0(void){
  TEST_ASSERT_EQUAL(-1, division(&d1,&d2));
}

void test_s_root(void) {
  TEST_ASSERT_EQUAL(2, squareroot(&v3));
}

void test_fact(void) {
  TEST_ASSERT_EQUAL(24, factorial(&v3));
}

void test_fact_negative(void) {
  TEST_ASSERT_EQUAL(-1, factorial(&v6));
}

void test_fact_by0(void) {
  TEST_ASSERT_EQUAL(1, factorial(&d2));
}

void test_Rec(void) {
  TEST_ASSERT_EQUAL(12, Area_of_Rectangle(&v1,&v2));
  TEST_ASSERT_EQUAL(12, Area_of_Rectangle(&v4,&v5));
}

void test_Sqr(void) {
  TEST_ASSERT_EQUAL(16, Area_of_Square(&v3));
  TEST_ASSERT_EQUAL(16, Area_of_Square(&v6));

}

void test_Para(void) {
  TEST_ASSERT_EQUAL(24, Area_of_Parallelogram(&v1,&v3));
 TEST_ASSERT_EQUAL(24, Area_of_Parallelogram(&v4,&v6));
}
void test_Trai(void) {
  TEST_ASSERT_EQUAL(12, Area_of_Triangle(&v1,&v2));
  TEST_ASSERT_EQUAL(12, Area_of_Triangle(&v4,&v5));
}
