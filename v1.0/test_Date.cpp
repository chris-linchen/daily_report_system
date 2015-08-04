#include <iostream>
#include "gtest/gtest.h"
using namespace std;

#include "Date.h"

 TEST(DateGet, SystemLocalDate){
   Date date;
  EXPECT_EQ(7,date.getMonth());
  EXPECT_EQ(18,date.getMDay());
   //   EXPECT_STREQ("2015/6/30",date.toString());
   EXPECT_EQ(6,date.getWDay());
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
TEST(DateNext, EndYear){
  Date date(2014,12,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2015, nextDate.getYear());
  EXPECT_EQ(1,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth1){
  Date date(2015,1,20);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2015, nextDate.getYear());
  EXPECT_EQ(1,nextDate.getMonth());
  EXPECT_EQ(21,nextDate.getMDay());
}
TEST(DateNext,EndMonth2){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth3){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth4){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth5){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth6){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth7){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth8){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth9){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth10){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DateNext,EndMonth11){
  Date date(2015,1,31);
  Date nextDate = date.nextDate();
  EXPECT_EQ(2,nextDate.getMonth());
  EXPECT_EQ(1,nextDate.getMDay());
}
TEST(DatePrev,Month1){
  Date date(2015,1,1);
  Date prevDate = date.prevDate();
  EXPECT_EQ(2014,prevDate.getYear());
  EXPECT_EQ(12,prevDate.getMonth());
  EXPECT_EQ(31,prevDate.getMDay());
}

TEST(DatePrev,Month2){
  Date date(2015,2,1);
  Date prevDate = date.prevDate();
  EXPECT_EQ(2015,prevDate.getYear());
  EXPECT_EQ(1,prevDate.getMonth());
  EXPECT_EQ(31,prevDate.getMDay());
}

TEST(DatePrev,Month3){
  Date date(2012,3,1);
  Date prevDate = date.prevDate();
  EXPECT_EQ(2012,prevDate.getYear());
  EXPECT_EQ(2,prevDate.getMonth());
  EXPECT_EQ(29,prevDate.getMDay());
}
		  
TEST(DatePrev,Month32){
  Date date(2015,3,1);
  Date prevDate = date.prevDate();
  EXPECT_EQ(2015,prevDate.getYear());
  EXPECT_EQ(2,prevDate.getMonth());
  EXPECT_EQ(28,prevDate.getMDay());
}
TEST(DatePrev,Month5){
  Date date(2015,5,1);
  Date prevDate = date.prevDate();
  EXPECT_EQ(2015,prevDate.getYear());
  EXPECT_EQ(4,prevDate.getMonth());
  EXPECT_EQ(30,prevDate.getMDay());
}
