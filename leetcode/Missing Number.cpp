// missing Number

// class Solution
// {
// public:
//     int missingNumber(vector<int> &nums)
//     {

//         int len = nums.size();
//         sort(nums.begin(), nums.end());
//         int check = 0;
//         for (int i = 0; i < len; i++)
//         {
//             if (nums[i] == check)
//             {
//                 check++;
//             }
//             else
//             {
//                 return check;
//             }
//         }
//     }
//     return check;
// };