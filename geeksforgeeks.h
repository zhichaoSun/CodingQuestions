//
// Created by zhichao on 20 Jan 2021.
//

#ifndef C__PLAYGROUND_GEEKSFORGEEKS_H
#define C__PLAYGROUND_GEEKSFORGEEKS_H

#include <vector>
#include <string>

using namespace std;

class geeksforgeeks {
public:

    static int triplets(int arr[], int n);
    static vector<int> subArrayGivenSum(int arr[], int n, int s);
    static int maxSubarraySum(int arr[], int n);
    static int missingNumber(vector<int>& array, int n);


    static bool rotateString(string s1, string s2);
    static int romanToDecimal(string str);
    static string reverseWords(string S);
    static vector<string> permutationsStrs(string s);
    static string longestPalindrome(string s);
    static string removeAdjacentDuplicates(string s);


    class Node;
    static void linkedListHandler();
    static void printLinkedList(Node * n);
    static void printMiddle(Node * n);
    static void printMiddle2(Node * n);


};


#endif //C__PLAYGROUND_GEEKSFORGEEKS_H
