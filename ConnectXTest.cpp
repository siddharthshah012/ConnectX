/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"
 
class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

/*TEST (ConnectXTest, toggleTurnCheck)
{
	ConnectX connectTowin;
	int t = 0;

	if (connectTowin.whoseTurn() == 1)
	{
		t = 2;
	}
	else 
	{
		t = 1;
	}

	connectTowin.placePiece(4);
	ASSERT_EQ(t , connectTowin.whoseTurn());

	t = 2;
	connectTowin.placePiece(4);
	ASSERT_EQ(t,connectTowin.whoseTurn());

}

TEST(ConnectXTest, inBoundsCheck)
{
	ConnectX connectTowin;
	

	ASSERT_EQ(0,connectTowin.at(3,4));

}*/

TEST(ConnectXTest, outBoundsLeftCheck)
{
	ConnectX connectTowin;
	ASSERT_EQ(-1, connectTowin.at(-2,-3));
}

TEST(ConnectXTest, outBoundsRightCheck)
{
	ConnectX connectTowin;
	ASSERT_EQ(-1,connectTowin.at(8,9));
}

TEST(ConnectXTest, heightCheck)
{
	ConnectX connectTowin(4,0,2);
	int h = 2;
	ASSERT_EQ (h, connectTowin.whoseTurn());

}

TEST (ConnectXTest,widthCheck)
{
	ConnectX connectTowin(0,4,2);
	int w = 2;
	ASSERT_EQ(w, connectTowin.whoseTurn());
}

TEST(ConnectXTest, toWinCheck)
{
	ConnectX connectTowin(4,2,0);
	int win = 2;
	ASSERT_EQ(win, connectTowin.whoseTurn());

}

TEST(ConnectXTest, outOfBoundCheck)
{
	ConnectX connectTowin;
	ASSERT_EQ(-1, connectTowin.at(-2,9));
}

TEST(ConnectXTest, showBoardCheck)
{
	ConnectX connectTowin;
	int t;

	if (connectTowin.whoseTurn() == 1)
	{
		t = 1;
	}
	else
	{
		t = 2;
	}

	connectTowin.placePiece(4);
	connectTowin.showBoard();
	ASSERT_EQ(t, connectTowin.at(4,5));
	t = 1;
	connectTowin.placePiece(4);
	connectTowin.showBoard();
	ASSERT_EQ(t, connectTowin.at(4,4));
}
