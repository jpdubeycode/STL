#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

//declares an empty vector
vector<int> v1;

//Declares vector with given size 
//and fills it with a value
vector<int> v2(4,5);

//print a item of v2
for(int i : v2){
    cout<< i<<" ";
}
cout<<endl;

//intializes vector using 
//intialiser list

vector<int> v3={3,5,3,5,6};

//print a item of v2
for(int i : v3){
    cout<< i<<" ";
}
cout<<endl;
// Inserting 4 at the back
v3.push_back(4);

//inserting 8 at index 1
v3.insert(v3.begin()+1,8);

//accessing using operator[]

cout<< "Elements at index 2 using []:"<< v3[2]<<endl;

//accessinng using operator at()

cout<<"Element at index 3 using at():" << v3.at(3);
cout<<endl;

//updating the element at index q

v3[1]=90;

//print item of v3
for(int i : v3){
    cout<< i<<" ";
}

cout<<endl;
//find vector size
cout<< v3.size();

//Traverse vector using range based for loop
cout<<endl;
for(int i=0; i<v3.size();i++){
    cout<< v3[i]<<" ";
}
cout<<endl;
//Delete elements
vector<char> a={'a','b','c','h','k'};
a.pop_back();

for(int i=0; i<a.size();i++){
    cout<< a[i]<<" ";
}
cout<<endl;
//deleting element 'c'

a.erase(find( a.begin(), a.end(), 'c'));//for this we use header file algorithm

for(int i=0; i<a.size();i++){
    cout<< a[i]<<" ";
}

//Declaration of a 2d vector
vector<vector<int>>matrix={

{1,2,3},
{4,5,6},
{7,8,9}
};

 cout<<"Traversing 2D vector using index-based loop:\n";
    
    // Traversing using index-based for loop
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;


}