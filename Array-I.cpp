// ---------- 1. ----------------
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     // int row[n] = {0}; --> matrix[..][0]
//     // int col[m] = {0}; --> matrix[0][..]

//     int col0 = 1;
//     // step 1: Traverse the matrix and
//     // mark 1st row & col accordingly:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark i-th row:
//                 matrix[i][0] = 0;

//                 // mark j-th column:
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }

//     // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
//     for (int i = 1; i < n; i++) {
//         for (int j = 1; j < m; j++) {
//             if (matrix[i][j] != 0) {
//                 // check for col & row:
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

//------------------ 2. ----------------

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> generateRow(int row) {
//     long long ans = 1;
//     vector<int> ansRow;
//     ansRow.push_back(1); //inserting the 1st element

//     //calculate the rest of the elements:
//     for (int col = 1; col < row; col++) {
//         ans = ans * (row - col);
//         ans = ans / col;
//         ansRow.push_back(ans);
//     }
//     return ansRow;
// }

// vector<vector<int>> pascalTriangle(int n) {
//     vector<vector<int>> ans;

//     //store the entire pascal's triangle:
//     for (int row = 1; row <= n; row++) {
//         ans.push_back(generateRow(row));
//     }
//     return ans;
// }

// int main()
// {
//     int n = 5;
//     vector<vector<int>> ans = pascalTriangle(n);
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

// ---------- 4. ----------------

// #include <bits/stdc++.h>
// using namespace std;

// long long maxSubarraySum(int arr[], int n)
// {
//     long long maxi = LONG_MIN; // maximum sum
//     long long sum = 0;

//     for (int i = 0; i < n; i++)
//     {

//         sum += arr[i];

//         if (sum > maxi)
//         {
//             maxi = sum;
//         }

//         // If sum < 0: discard the sum calculated
//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }

//     // To consider the sum of the empty subarray
//     // uncomment the following check:

//     // if (maxi < 0) maxi = 0;

//     return maxi;
// }

// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     long long maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }

// ---------- 5. ----------------

// #include <bits/stdc++.h>
// using namespace std;

// int maxProfit(vector<int> &arr)
// {
//     int maxPro = 0;
//     int n = arr.size();
//     int minPrice = INT_MAX;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         minPrice = min(minPrice, arr[i]);
//         maxPro = max(maxPro, arr[i] - minPrice);
//     }

//     return maxPro;
// }

// int main()
// {
//     vector<int> arr = {7, 1, 5, 3, 6, 4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
// }
