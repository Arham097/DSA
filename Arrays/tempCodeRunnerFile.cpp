nt main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int targetSum = 7;

    vector<vector<int>> result = pairSum(arr, targetSum);

    // Printing the result
    for (vector<int> &pair : result) {
        cout << "(" << pair[0] << ", " << pair[1] << ") ";
    }
    
    return 0;
}