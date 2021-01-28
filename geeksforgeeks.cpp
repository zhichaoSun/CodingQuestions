//
// Created by zhichao on 20 Jan 2021.
//
#include "geeksforgeeks.h"

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <map>

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
 * Given two strings a and b.
 * The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.
 * @param std::string s1
 * @param std::string s2
 * @return bool isOrNot
 */

bool geeksforgeeks::rotateString(string s1, string s2) {
    if(s1.length()==1)
        return s1==s2;

    s1+=s1;
    return s1.find(s2) == 2 || s1.find(s2) == s2.length() - 2;
}


/***
 * Given a string in roman no format (s)  your task is to convert it to an integer.
 * Various symbols and their values are given below.
 * I 1
 * V 5
 * X 10
 * L 50
 * C 100
 * D 500
 * M 1000
 * @param std::string RomanNumber
 * @return int devcimalResult
 */
int geeksforgeeks::romanToDecimal(string str) {
    map<char, int> d;
    d['I'] = 1;
    d['V'] = 5;
    d['X'] = 10;
    d['L'] = 50;
    d['C'] = 100;
    d['D'] = 500;
    d['M'] = 1000;

    int decimal=0;
    for(int i=0; i<str.size(); i++) {
        if(d[str[i]] < d[str[i+1]])
            decimal-=d[str[i]];
        else
            decimal+=d[str[i]];
    }
    return decimal;
}


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
        if(S[i]=='.' || i==n){
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
            if(subStr==strR && strR.size() > longest.size())
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
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){
            result+=s[i];
        }
    }
    return result;
}


/**********************************************
 * Linked List
 **********************************************/

class geeksforgeeks::Node {
public:
    int data;
    Node * next;
    explicit Node(int x) {
        data = x;
        next = NULL;
    }
};

void geeksforgeeks::linkedListHandler() {
    int t; // amount of test cases
    cin>>t;
    while(t--){
        int n; // number of data of this very test cases
        cin>>n;

        int data; // data
        cin>>data;

        Node *head = new Node(data); // head
        Node *tail = head;  // copy head to a tail
        for(int i=0; i<n-1; i++) {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        // call method below
//        geeksforgeeks::printLinkedList(head);
//        geeksforgeeks::printMiddle(head);
//        geeksforgeeks::printMiddle2(head);
//        geeksforgeeks::reverseLinkedList(head);
        geeksforgeeks::reverseLinkedList2(head);
    }
}

void geeksforgeeks::printLinkedList(Node * n) {
    int count = 0;
    while (n != NULL) {
        cout << ++count << ": " << n->data << endl;
        n = n->next;
    }
}


/***
 * Given a singly linked list of N nodes.
 * The task is to find the middle of the linked list.
 * For example, if given linked list is 1->2->3->4->5 then the output should be 3.
 *
 * If there are even nodes, then there would be two middle nodes,
 * we need to print the second middle element.
 * For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.
 * @param Node * head
 */
void geeksforgeeks::printMiddle(Node * head) {

    Node* n = head;
    int count=0;
    while(n!=NULL) {
        count++;
        n=n->next;
    }
    int midIndex = (count/2)+1;
    int mid = 0;
    while(midIndex--) {
        mid = head->data;
        head = head->next;
    }
    cout << mid;
}
/***
 * Another interesting way to find middle element
 * @param Node * head
 */
void geeksforgeeks::printMiddle2(Node * head) {

    Node * fast = head;
    Node * slow = head;
    for(; fast->next!=NULL && fast->next->next!=NULL; fast=fast->next->next, slow=slow->next) {}

    if(fast->next)
        cout << slow->next->data << endl;
    else
        cout << slow->data << endl;

}

geeksforgeeks::Node * geeksforgeeks::reverseLinkedList(Node *head) {
    if(head->next==NULL) return head;

    int count=0;
    vector<int> addr;

    do {
        addr.push_back(head->data);
        head=head->next;
        count++;
    } while (head->next!=NULL);
    addr.push_back(head->data);
    count++;

    Node *newNode = new Node(addr[--count]);
    Node *tail = newNode;
    while(count) {
        tail->next=new Node(addr[--count]);
        tail=tail->next;
    }

    return newNode;
}

geeksforgeeks::Node * geeksforgeeks::reverseLinkedList2(Node *head) {

    Node * tail = head;
    Node * newHead = tail;
    while(tail->next!=NULL) {
        Node * prevNewHead = newHead;
        newHead = tail->next;
        Node * temp = newHead;
        tail->next = temp->next;
        newHead->next = prevNewHead;
    }

    return newHead;
}



















