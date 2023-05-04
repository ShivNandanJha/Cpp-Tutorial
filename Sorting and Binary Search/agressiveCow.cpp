#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//⁡⁣⁢⁣​‌‍‍ 𝗙𝘂𝗻𝗰𝘁𝗶𝗼𝗻 𝘁𝗼 𝗰𝗵𝗲𝗰𝗸 𝗶𝗳 𝗶𝘁 𝗶𝘀 𝗽𝗼𝘀𝘀𝗶𝗯𝗹𝗲 𝘁𝗼 𝗽𝗹𝗮𝗰𝗲 𝗮𝗹𝗹 𝗰𝗼𝘄𝘀 𝘄𝗶𝘁𝗵 𝗺𝗶𝗻𝗶𝗺𝘂𝗺 𝗱𝗶𝘀𝘁𝗮𝗻𝗰𝗲 𝘅​⁡
bool isPossible(vector<int> &stalls, int x, int K)
{
    int n = stalls.size();
    int count = 1;        // Number of cows placed
    int last = stalls[0]; // Position of last placed cow
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last >= x)
        {                     // If the current stall is far enough from the last one
            last = stalls[i]; // Place a cow here
            count++;
            if (count == K)
                return true; // If all cows are placed, return true
        }
    }
    return false; // If not all cows are placed, return false
}

// Function to find the maximum possible minimum distance between cows
int maxMinDistance(vector<int> &stalls, int K)
{
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());   // Sort the stall positions
    int low = 1;                          // The lowest possible distance is 1
    int high = stalls[n - 1] - stalls[0]; // The highest possible distance is the difference between first and last stall
    int ans = -1;                         // The answer to be returned
    while (low <= high)
    {                               // Binary search for the optimal distance
        int mid = (low + high) / 2; // The middle distance
        if (isPossible(stalls, mid, K))
        {                  // If it is possible to place all cows with this distance
            ans = mid;     // Update the answer
            low = mid + 1; // Try to find a larger distance
        }
        else
        {                   // If it is not possible to place all cows with this distance
            high = mid - 1; // Try to find a smaller distance
        }
    }
    return ans; // Return the answer
}

int main()
{
    int N=10, K=3; // Number of stalls and number of cows
   /*  cin >> N >> K; */
    vector<int> stall = {1, 2, 7, 4, 9, 10, 14, 18, 19, 22};
   /*  vector<int> stalls(N); // Vector to store the stall positions
    for (int i = 0; i < N; i++)
    {
        cin >> stalls[i];
    } */
    cout << maxMinDistance(stall, K) << endl; // Print the answer
}

                 // (1) Assign stalls to K cows to maximize the minimum ... - GeeksForGeeks. https  :                                   //www.geeksforgeeks.org/assign-stalls-to-k-cows-to-maximize-the-minimum-distance-between-them/.
                 // (2) Simple C++ Solution | Binary Search | Aggressive Cow problem type .... https:                                   //leetcode.com/problems/minimize-the-maximum-of-two-arrays/solutions/2946735/simple-c-solution-binary-search-aggressive-cow-problem-type-approach/.
                 // (3) Aggressive cows on SPOJ | Begginer-friendly | c++ code for both .... https  :                                   //leetcode.com/problems/magnetic-force-between-two-balls/discuss/1752653/aggressive-cows-on-spoj-begginer-friendly-c-code-for-both-problems-understand-analogy.
                 // (4) Similar to aggressive cows problem - LeetCode Discuss. https                :                                   //leetcode.com/problems/magnetic-force-between-two-balls/discuss/1677920/similar-to-aggressive-cows-problem.