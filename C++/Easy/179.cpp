#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a,string b){
    return a+b > b+a;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) 
    {
        vector<string> container;
		
        for(int i : nums)  container.push_back(to_string(i));
        
        sort(container.begin(),container.end(),compare);
        
        string result;
        
        for(int i=0;i<container.size();i++)  result+=container[i];
        
        return result[0]=='0'? "0" : result;
    }
};

int main()
{
    Solution solution;

    vector<int> result = {1,2,3,4,5,6,7,8,9};

    cout << solution.largestNumber(result);

    return 0;
}