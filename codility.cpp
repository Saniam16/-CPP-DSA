#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    int uniqueCount = 0;
    int previousValue = -1;

    while (start <= end)
    {
        int leftValue = abs(nums[start]);
        int rightValue = abs(nums[end]);

        int chosenValue;

        if (leftValue > rightValue)
        {
            chosenValue = leftValue;
            start++;
        }
        else
        {
            chosenValue = rightValue;
            end--;
        }

       
        if (chosenValue != previousValue)
        {
            uniqueCount++;
            previousValue = chosenValue;
        }
    }

    return uniqueCount;
}
