#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    // Create a multimap of string and int
    multimap<string, int> multiMap;

    // Insert elements (multiple values for the same key)
    multiMap.insert({"apple", 10});
    multiMap.insert({"banana", 20});
    multiMap.insert({"apple", 30});
    multiMap.insert({"orange", 4});
    multiMap.insert({"banana", 5});

    // Iterate and print all elements
    cout << "Contents of multimap:\n";
    for (const auto &pair : multiMap)
    {
        cout << pair.first << " => " << pair.second << '\n';
    }

    // Find all values for a specific key
    string key = "banana";
    auto range = multiMap.equal_range(key);
    cout << "\nValues for key '" << key << "':\n";
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->second << '\n';
    }

    return 0;
}