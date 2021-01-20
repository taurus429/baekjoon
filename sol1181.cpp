#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a, string b){
    if(a.size()==b.size()){
        return a < b;
    }
    return a.size() < b.size();
}

int main(void) {
    int num =0;
    cin >> num;
    vector<string> v;
    string input;
    for(int i=0; i<num; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(),v.end(), compare);
    for (int i=0; i<v.size(); i++){
        if(i==0||v[i].compare(v[i-1]))
        cout << v[i] <<endl;
    }
}
