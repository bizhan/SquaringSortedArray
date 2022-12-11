#include <iostream>
#include <vector>
using namespace std;

// Given a sorted array, create a new array containing squares of all the
// numbers of the input array in the sorted order.

// Note: The key here is

vector<int> squares(const vector<int> &nums) {
  vector<int> sq(nums.size());
  int left = 0;
  int right = nums.size() - 1;
  int highestSquareIdx = nums.size() - 1;
  int index = 0;
  while (left <= right) {
    int sqLeft = nums[left] * nums[left];
    int sqRight = nums[right] * nums[right];
    if (sqLeft < sqRight) {
      sq[highestSquareIdx--] = sqRight;
      right--;
    } else {
      sq[highestSquareIdx--] = sqLeft;
      left++;
    }
  }
  return sq;
}

int main() {
  std::cout << "Hello World!\n";
  vector<int> nums = {-3, -1, 0, 1, 2};
  auto result = squares(nums);
  for (int i = 0; i < nums.size(); i++)
    cout << result[i] << endl;
  return 0;
}