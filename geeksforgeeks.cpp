//
// Created by zhichao on 20 Jan 2021.
//
#include "geeksforgeeks.h"

#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/**********************************************
 * Array
 **********************************************/

/**
 * Given an array of distinct integers.
 * The task is to count all the triplets such that sum of two elements equals the third element.
 * @param int[] arr
 * @param int n
 * @return int courtOfTheTriplets
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


/***
 * Given an unsorted array A of size N that contains only non-negative integers,
 * find a continuous sub-array which adds to a given number S.
 * @param int[] arr
 * @param int n
 * @param int s
 * @return std::vector<int> sub-array
 */
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

/***
 * Given an array arr of N integers.
 * Find the contiguous sub-array with maximum sum.
 * @param int[] arr
 * @param int n
 * @return int maxSum
 */
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

/***
 * Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N.
 * Find the missing element.
 * @param std::vector<int> array
 * @param int n
 * @return int missingNumber
 */
int geeksforgeeks::missingNumber(vector<int> &array, int n) {
    int s = (1+n)*n/2;
    int i = 0;
    while(i<n-1) {
        s-=array[i];
        i++;
    }
    return s;
}


/**********************************************
 * String
 **********************************************/

/***
 * Reverse words in a given string, the string is like: "i.like.eat.pizza"
 * @param std::string
 * @return std::string reversedString
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


/***
 * Return all permutations of a given string
 * @param std::string
 * @return std::vector<std::string> permutationsVector
 */
vector<string> geeksforgeeks::permutationsStrs(string s) {
    vector<string> results;
    for(int i=0; i<s.size(); i++){
        sort(s.begin(), s.end());
        do{
            results.push_back(s);
        }while(next_permutation(s.begin(), s.end()));
    }
    return results;
}


/***
 * Find longest palindrome string (A string which reads the same backwards)
 * Required Time Complexity O(n2)
 * @param std::string
 * @return str::string longestPalindrome
 */
string geeksforgeeks::longestPalindrome(string str) {
    string longest;
    string strR;
    int l=str.size();
    for(int i=0; i<l; i++){
        string subStr;
        for(int j=i; j<l; j++) {
            subStr+=str[j];
            strR=subStr;
            std::reverse(strR.begin(), strR.end());
            if(subStr==strR and strR.size() > longest.size())
                longest=strR;
        }
    }
    return longest;
}


/***
 * Remove adjacent duplicates in a string, one time not recursively
 * @param std::string
 * @return std::string got-once-removed String
 */
string geeksforgeeks::removeAdjacentDuplicates(string s) {
    string result;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=s[i-1] and s[i]!=s[i+1]){
            result+=s[i];
        }
    }
    return result;
}
