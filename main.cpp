#include <iostream>
#include <vector>

#include "algoExpert.h"
#include "geeksforgeeks.h"

vector<string> getSystemInput() {
    int n;
    cin>>n;
    vector<string> inputs={};

    for(int i=0; i<n; i++){
        string input;
        cin>>input;
        inputs.push_back(input);
    }

    return inputs;
}


int main() {

    /************************************************************************************
     * algoExpert
     ************************************************************************************/

    /**********************************************
     * Array
     **********************************************/

//    std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
//    std::vector<int> sequence = {5, 1, 22, 10};
//    bool r = algoExpert::isValidSubsequence(array, sequence);


    /************************************************************************************
     *  geeksforgeeks
     ************************************************************************************/

    /**********************************************
     * Array
     **********************************************/

//    int arr[] = {1,2,3,7,5};
//    int n = 5;
//    int sum = 12;
//    std::vector<int> r = geeksforgeeks::subArrayGivenSum(arr, n, sum);
//    std::cout << r <<std::endl;


//    int arr[] = {12, 8, 2, 11, 5, 14, 10};
//    int n = 7;
//    int r = geeksforgeeks::triplets(arr, n);
//    std::cout << r <<std::endl;


//    int arr[] = {-2,1,-3};
//    int n = 3;
//    int r = geeksforgeeks::maxSubarraySum(arr, n);
//    std::cout << r <<std::endl;


//    vector<int> arr = {1,2,3,4,5,6,7,8,10};
//    int n = 10;
//    int r = geeksforgeeks::missingNumber(arr, n);
//    std::cout << r <<std::endl;


    /**********************************************
     * String
     **********************************************/

    /***
     * check if 2 strings can be rotated to become the other one
     */
//    bool r = geeksforgeeks::rotateString("", "");
//    cout<<r;


    /***
     * convert Roman number to decimal
     */
//    int r = geeksforgeeks::romanToDecimal("MMMCMXCIX");
//    cout<<r;


    /***
     * Reverse the string
     */
//    string S = "i.like.this";
//    string r = geeksforgeeks::reverseWords(S);
//    std::cout << r <<std::endl;


    /***
     * permutations of a given string
     */
//    vector<string> inputs = getSystemInput();
//    for(string & input : inputs){
//        vector<string> results;
//        results = geeksforgeeks::permutationsStrs(input);
//        for(string & result: results){
//            cout<<result<<" ";
//        }
//        cout<<endl;
//    }


    /***
     * permutations of a given string
     */
//    vector<string> inputs = getSystemInput();
//    for(string &input : inputs) {
//        input = geeksforgeeks::longestPalindrome(input);
//    }
//    for(string &result: inputs) {
//        cout<<result<<endl;
//    }


    /***
     * remove all the adjacent duplicates recursively.
     */
//    vector<string> inputs = getSystemInput();
//    for(string &input : inputs){
//        while(input!=geeksforgeeks::removeAdjacentDuplicates(input)){
//            input=geeksforgeeks::removeAdjacentDuplicates(input);
//        }
//    }
//    for(string &input : inputs){
//        cout<<input<<endl;
//    }



    /**********************************************
     * Linked List
     **********************************************/

//    geeksforgeeks::linkedListHandler();

    /**********************************************
     * Search and Sort
     **********************************************/

    int arr[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 124, 155, 1252};
    int ans = geeksforgeeks::binarySearch(arr, 0, 13, 1252);
    cout << ans << endl;

    /**********************************************
     * Dynamic Programming
     **********************************************/


    /***
     * find the minimum number of operations from 0 to N
     */
//    vector<string> inputs = getSystemInput();
//    for(string & input : inputs){
//        int r = geeksforgeeks::minOperation(stoi(input));
//        cout<<r<<endl;
//    }

//    geeksforgeeks::maxChainLen({}, 0);

    return 0;
}





