#include <gtest/gtest.h>

class CGlobalEnvironment :public testing::Environment
{
public:
	virtual void SetUp()
	{
		//TODO: Do something before every case
	}

	virtual void TearDown()
	{
		//TODO: Do something after every case
	}
};

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	testing::AddGlobalTestEnvironment(new CGlobalEnvironment());
	testing::FLAGS_gtest_filter = "*";
	return RUN_ALL_TESTS();
}