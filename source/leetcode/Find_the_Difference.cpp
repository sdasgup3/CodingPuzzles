/* Problem Description
 * Given two strings s and t which consist of only lowercase letters.

String t is generated by random shuffling string s and then add one more letter at a random position.

Find the letter that was added in t.

Example:

Input:
s = "abcd"
t = "abcde"

Output:
e

Explanation:
'e' is the letter that was added.
*/

#include"header.h"
class Solution {

public:
  /*
  char findTheDifference(string s, string t) { 

    vector<int> v(26,0);

    for(auto x:s) {
      v[x-'a']++;
    }

    cout << v;

    for(auto x:t) {
      if(v[x-'a'] == 0) {
    cout << v;
        return x;
      }
      v[x-'a']--;
    }
  }
  */
  char findTheDifference(string s, string t) { 

    int sum = 0;

    for(auto x:s) {
      sum ^= x;
    }


    for(auto x:t) {
      sum ^= x;
    }

    return sum;
  }
private:

};


int main() {
  Solution S;

  string s = "qzdwfzuvpodzbjpjkyvdwpghlyppainszycrbzjknizalnyoyzcvnphcwcpjgnadgbvotsjycdtjilcxykkxbodlxtrxwifsongagmfndoxalnqdyqqrhzmrdtnbxtwytzzpqsluchvjbpmpadbejgdjoyddgtjbcpvusdenopnedjxbvnbhutsheoofwttjmkhaijygrcyzxcijzjuaxtyxmfsgwnkvnsvnwivaqqucxwkpdefgtiuwnyljfqniqmxkrkprromiqtqfydnsbhwlfmkzinmatathnbszbisoyrjgwolfofkyhjyejqgcfluhwmupnkmkp";
  string t = "jwmajdpgchijtqoookydayypygvmoxnjnzumtyuerlhfxtjupklnncfjdppmwqpdintcttoxwxcwusvhzxgpfbrkjxnyqnwndiycdlsknopdvwxjcdhcfzjllonrjnjegvwybwqhtosdwmdacrjjwsmatofgmzdbzziioftcblpiynubllqdkuvtkemigtxktlgbacuqandwsohmwspazgyfagubzhqleypkbiraktopfgdiydzhnecptsppybznbfohezknhhysjqzqyqnncnqyvwdvxmaurkxdxojmiavznjjrvgsikgyqrxbfzkssqvfbtbrypfjinj";

  cout << S.findTheDifference(s,t);

  return 0;
}
