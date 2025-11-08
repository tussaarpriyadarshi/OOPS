#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string t;
        cin>>t;
        vector<int>temp(26,0);
        for(int i=0;i<n;i++){
            temp[s[i]-'a']++;
            
        }
        for(int i=0;i<n;i++){
            temp[t[i]-'a']--;
        }
        int flag=0;
        for(int i=0;i<26;i++){
            if(temp[i]!=0){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
    
}