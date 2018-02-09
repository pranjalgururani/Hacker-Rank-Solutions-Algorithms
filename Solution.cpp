//     Author: Pranjal Gururani
//     Github: github.com/github.com/pranjalgururani
//     HackerRank: hackerrank.com/pranjalgururani


#include <vector>
#include <iostream>
#include <algorithm>

//  Implement a stack using vector. 
//  Keep adding elements to the vector if the current element in the string is not equal to the element in the last position in current vector
//  If the current element in the string is equal to the lat element in the in current vector remove the  last element from the vector

using namespace std;

int main() {
  
    vector<char> alphabets;
    string s;
    cin >>s;
    
    int n = s.length();
  
    
    for(int i =0; i<n; i++){
         if(!alphabets.empty()){
             if(alphabets.back() == s[i]){
                alphabets.pop_back();
 
             }
        
             else{ 
                 alphabets.push_back(s[i]);
                
             }
    }
        else
            {
                alphabets.push_back(s[i]);
                
        }
        
    }
    
    if(alphabets.empty())
        cout<< "Empty String";
    else
        for(int i=0; i<alphabets.size(); i++){
            cout<<alphabets[i];
        } 
    
}


