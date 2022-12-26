#include "pch.h"

bool ArrayCompare(const int *exp, const int *act, int len)
{
	bool flag = true;
	for (int i = 0; i < len; i++)
	{
		if (exp[i] != act[i])
		{
			flag = false;
			break;
		}
	}
	return flag;
}

TEST(BubbleSortTest, normalTest) {
	int expArray[5] = { 1, 2, 3, 4, 5};
	int actArray[5] = { 3, 1, 5, 4, 2 };

	//bubblesort(actArray, 5);
	EXPECT_PRED3(ArrayCompare, expArray, actArray, 5);
}