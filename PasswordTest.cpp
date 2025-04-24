/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, empty_string)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(1, actual);
}


TEST(PasswordTest, special_characters)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aa$$##aaB"));
}

TEST(PasswordTest, repeating_leading_characters)
{
	Password my_password;
	ASSERT_EQ(7, my_password.count_leading_characters("aaaaaaab"));
}


