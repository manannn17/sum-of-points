#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool findPairWithSum(const vector<int>& data, int sum) {
    map<int, bool> complements;
    for(int number : data) 
    {
        if(complements.find(number) != complements.end()) 
        {
            return true;
        }
        complements[sum-number]=true;
    }
    return false;
}

int main() {
    vector<int> data = {2, 1, 3, 5, 7};
    int sum = 5;
    
    if(findPairWithSum(data, sum)) 
    {
        cout << "True" << sum << endl;
    } 
    else 
    {
        cout << "False" << sum << endl;
    }
    return 0;
}