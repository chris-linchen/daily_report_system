#include <iostream>
#include "gtest/gtest.h"
using namespace std;

#include "Date.h"

 TEST(DateGet, SystemLocalDate){
   Date date;
  EXPECT_EQ(6,date.getMonth());
  EXPECT_EQ(30,date.getMDay());
   //   EXPECT_STREQ("2015/6/30",date.toString());
   EXPECT_EQ(2,date.getWDay());
   EXPECT_EQ(2015,date.getYear());
 }
TEST(DateGet,SetDate){
  Date date(2015,6,23);
  // EXPECT_STREQ("201/6/23",date.toString());

  EXPECT_EQ(2,date.getWDay());

  EXPECT_EQ(2015,date.getYear());
  EXPECT_EQ(6,date.getMonth());
  EXPECT_EQ(23,date.getMDay());
}
