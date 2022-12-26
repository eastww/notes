//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"

/*
int add(int a, int b)
{
	return a + b;
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/

void bubblesort(int* data, int len)
{
	int tem = 0;

	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = i+1; j < len; j++)
		{
			if (data[i] > data[j])
			{
				tem = data[i];
				data[i] = data[j];
				data[j] = tem;
			}
		}
	}
}