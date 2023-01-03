#include <stdio.h>
#include <stdlib.h>
#include "isLeapYear.h"
#include "unity.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* init function */
void setUp(void)
{
	
} 

/* clear function */
void tearDown(void)
{
	
}

/* test list1 */
void leapYear()
{
	TEST_ASSERT_TRUE(isLeapYear(2000));
	TEST_ASSERT_TRUE(isLeapYear(1996));
}

/* test list2 */
void commonYear()
{
	TEST_ASSERT_FALSE(isLeapYear(1999));
	TEST_ASSERT_FALSE(isLeapYear(2100));
}

int main(int argc, char *argv[]) {
	
	RUN_TEST(leapYear);
	RUN_TEST(commonYear);
	
	return 0;
}
