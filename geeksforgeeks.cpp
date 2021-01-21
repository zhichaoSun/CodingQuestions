//
// Created by zhich on 20 Jan 2021.
//
#include "geeksforgeeks.h"

#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

/***
 * Array
 */

int geeksforgeeks::triplets(int arr[], int n) {
    int c = 0;
    std::sort(arr, arr + n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i!=j){
                for(int k=j+1; k<n; k++){
                    if(k!=j&&k!=i){
                        if(arr[k]==arr[i]+arr[j]) {
                            c++;
                        }
                    }
                }
            }
        }
    }
    return c;
}

vector<int> geeksforgeeks::subArrayGivenSum(int *arr, int n, int s) {
    std::vector<int> result = {0, 0};

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==s) {
                result[0] = i+1;
                result[1] = j+1;
                break;
            } else if (sum>s) {
                break;
            }
        }
        if(result[1]!=0) {
            break;
        }
    }

    if(result[1]!=0){
        return result;
    } else {
        return {-1};
    }
}

int geeksforgeeks::maxSubarraySum(int *arr, int n) {
    int max = arr[0];
    int localMax = arr[0];

    for(int i=1; i<n; i++){
        localMax+=arr[i];
        if(localMax<arr[i]){
            localMax=arr[i];
        }
        max = std::max(max, localMax);
    }
    return max;
    
}

int geeksforgeeks::missingNumber(vector<int> &array, int n) {
    int s = (1+n)*n/2;
    int i = 0;
    while(i<n-1) {
        s-=array[i];
        i++;
    }
    return s;
}

/***
 * String
 */

string geeksforgeeks::reverseWords(string S) {
    string result;
    string word;
    int n = S.size();
    for(int i=0; i<=n; i++){
        if(S[i]=='.' or i==n){
            result = result.empty() ? word+result : word+'.'+result;
            word="";
        }
        if(S[i]!='.') word+=S[i];
    }
    return result;
}

void geeksforgeeks::permutationsStrs() {
    int n;
    cin>>n;
    string s[n]={}; // the system will give a n for sure...
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i++){
        sort(s[i].begin(), s[i].end());
        do{
            cout<<s[i]<<" ";
        }while(next_permutation(s[i].begin(), s[i].end()));
        cout<<endl;
    }
}
