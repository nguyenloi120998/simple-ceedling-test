#include "unity.h"
#include "mock_helper.h"  // mock file generate from helper.h
#include "simple_module.h"

void setUp(void) {}
void tearDown(void) {}

void test_sum_operation(void) {
    TEST_ASSERT_EQUAL_INT(6, sum(2, 3));
    TEST_ASSERT_EQUAL_INT(-1, sum(2, -3));
}

void test_sub_operation(void) {
    TEST_ASSERT_EQUAL_INT(-1, sub(2, 3));
    TEST_ASSERT_EQUAL_INT(5, sub(2, -3));
}

void test_mul_operation(void) {
    TEST_ASSERT_EQUAL_INT(6, mul(2, 3));
    TEST_ASSERT_EQUAL_INT(-6, mul(2, -3));
}

void test_div_operation(void) {
    TEST_ASSERT_EQUAL_INT(2, div(6, 3));
    TEST_ASSERT_EQUAL_INT(1, div(6, 0)); 
}

void test_sum_with_mocked_value(void) {
    get_value_ExpectAndReturn(10);
    int result = sum(get_value(), 5);
    TEST_ASSERT_EQUAL_INT(15, result);
}