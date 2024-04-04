#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans(5);
    for (int i = 0; i < 5; i++)
    {
        //int element;
        cin >> ans[i];
        //ans.push_back(element);
    }  

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " ;
    } 
    cout << endl;
     
     ans.insert(ans.begin()+2 , 10);
    
   //for loop
    for(int element:ans){
        cout << element << " ";
    }
    cout << endl;
     ans.erase(ans.begin()+1);

    // while loop
    int idx = 0;
    while(idx < ans.size()){
    cout << ans[idx ++] << " ";
    }
    return 0;
}