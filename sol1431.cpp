#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(pair<string,int> a, pair<string,int> b){
    if(a.first.size()==b.first.size()){
        if(a.second==b.second){
            return a.first < b.first;
        }
        else{
            return a.second < b.second;
        }
    }
    return a.first < b.first;
}

int main(void) {
    int num,sum =0;
    cin >> num;
    vector<pair<string, int>> v;
    string input;
    for(int i=0; i<num; i++){
        sum =0;
        cin >> input;
        for(int i=0; i<input.size(); i++){
            if(input[i]<58 && 48<input[i]){
                sum += (int(input[i])-48);
            }
        }
        v.push_back(pair<string,int>(input, sum));
    }
    sort(v.begin(),v.end(), compare);
    for (int i=0; i<v.size(); i++){
        cout << v[i].first <<endl;
    }
}
