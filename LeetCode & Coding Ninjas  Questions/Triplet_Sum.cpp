#include <bits/stdc++.h>
using namespace std;

// Function to find triplets in the array
vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> result; // Initialize a vector to store the triplets

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                // Check if the sum of elements at indices i, j, and k equals K
                if (arr[i] + arr[j] + arr[k] == K) {
                    vector<int> temp; // Create a temporary vector to store the triplet
                    temp.push_back(arr[i]); // Add the first element of the triplet
                    temp.push_back(arr[j]); // Add the second element of the triplet
                    temp.push_back(arr[k]); // Add the third element of the triplet

                    // Sort the temporary vector to handle permutations
                    sort(temp.begin(), temp.end());

                    // Check if the triplet is already in the result to avoid duplicates
                    bool isDuplicateFound = false;
                    for (const vector<int> &element : result) {
                        if (element == temp) { // Compare each element in the result with temp
                            isDuplicateFound = true;
                            break;
                        }
                    }

                    // If not a duplicate, add the triplet to the result vector
                    if (!isDuplicateFound)
                        result.push_back(temp);
                }
            }
        }
    }

    return result; // Return the vector of unique triplets
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int K = 12;

    vector<vector<int>> triplets = findTriplets(arr, n, K);

    // Printing the found triplets
    for (const vector<int> &triplet : triplets) {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ") ";
    }

    return 0;
}
