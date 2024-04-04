#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>ans;

    ans.push_back(2);
    cout << "size :" << ans.size() << endl;
    cout << "capacity :"<< ans.capacity() << endl;

    ans.push_back(3);
    cout << "size :" << ans.size() << endl;
    cout << "capacity :"<< ans.capacity() << endl;

    ans.push_back(4);
    cout << "size :" << ans.size() << endl;
    cout << "capacity :"<< ans.capacity() << endl;

    ans.push_back(5);
    cout << "size :" << ans.size() << endl;
    cout << "capacity :"<< ans.capacity() << endl;

    ans.push_back(5);
    cout << "size :" << ans.size() << endl;
    cout << "capacity :"<< ans.capacity() << endl;

    ans.resize(10);
    cout << "size :" << ans.size() << endl;
    cout << "capacity :"<< ans.capacity() << endl;
}