#include <iostream>
#include <vector>
using namespace std;

void generateSubsequences(string input, string output, vector<string> &result, int index)
{
    if (index == input.length())
    {
        result.push_back(output); // store the generated subsequence
        return;
    }

    // Include the current character
    generateSubsequences(input, output + input[index], result, index + 1);

    // Exclude the current character
    generateSubsequences(input, output, result, index + 1);
}

int main()
{
    string str = "acb";
    vector<string> subsequences;

    generateSubsequences(str, "", subsequences, 0);

    cout << "All Subsequences:\n";
    for (const string &sub : subsequences)
    {
        cout << "\"" << sub << "\"\n";
    }

    return 0;
}
