#include <gtest/gtest.h>
#include <tuple>
#include "solution.h"

using namespace std;

class SolutionTest : public ::testing::TestWithParam<tuple<int,vector<int>>>
{
protected:
  Solution soln;
};

TEST_P(SolutionTest, TestFunc) {
  int expected = get<0>(GetParam());
  vector<int> input = get<1>(GetParam());
  EXPECT_EQ(expected, soln.largestRectangleArea(input));
}

INSTANTIATE_TEST_SUITE_P(ParamTestSolution,
			 SolutionTest,
			 ::testing::Values(make_tuple(10, vector<int>({2,1,5,6,2,3}))));

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
