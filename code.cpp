#include <bits/stdc++.h>
using namespace std;

#define jmp '\n'

int A[1000];


int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    set <int> s;
    
    s.insert(2);
    s.insert(20);
    s.insert(6);
    
    cout<<*s.lower_bound(3)<<"\n";
}

//COMPILER  -->  g++ code.cpp  -->  ./a.out)

/* more efficient code
ios::sync_with_stdio(0);
cin.tie(0);
*/

// TYPEDEF --> typedef long long ll;

// MACROS --> #define PB push_back

// FLOAT POINTS --> printf("%.9f\n", x);

//VECTOR --> vector<data_type> vector_name;
    //vector_name.push_back(data);
    //vector.back(); --> returns the last element
    //vector.pop_back(); -->removes the last element
    //FOR toVECTOR --> for(auto x : v){print x}
    //vector<pair<int,int>> v;
    //vector<tuple<int,int,int>> v;  in comparison it uses the first element...second if is necessary

//SET --> set <int> s;
    //set.insert(data); --> all data are different
    //set.count(data); --> 1 if it exists and 0 if it does not exist
    //set.erase(data); --> delete the data (one data because in set only exists one different data)

//SET ITERATOR
    //set<int>::iterator it = s.begin(); == auto it = s.begin();
    /* --> first element of the set
    auto it = s.begin();
    cout << *it << "\n";
    */
    /* --> last element of the set
    auto it = s.end(); it--;
    cout << *it << "\n";
    */
    /* --> print the elements of the set in increase order.
    for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << "\n";
    }
    */


//MULTISET --> multiset <int> s;
    //set.insert(data); --> the data can be repited
    //set.count(data); --> the number of elements the data has
    //set.erase(data); --> delete all data exists
    //set.erase(s.find(x)); --> this deletes only first instance found

//MAP --> map <key, value> m;
    //MAP O(logn)  UNORDER_MAP O(1)
    //m[key] = value; --> add a data
    //if(m.count(key)){the key exists}
    /*
        for(auto x:m){
        cout<<x.first<<"->"<<x.second<<"\n";
        }
    */

//STRING
    //substr() -> string.substr(x,n) -> x until x n characteres ahead. 

//SORTING
    //sort(v.rbegin(),v.rend()); --> vector
    //sort(v.begin(),v.end()); --> vector
    //reverse(v.begin(),v.end()); --> vector
    //sort(a,a+n); --> array
    //reverse(a, a+n); --> array
    //random_shuffle(a, a+n); --> array
