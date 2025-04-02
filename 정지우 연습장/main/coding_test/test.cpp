#include<iostream>
#include<set>

using namespace std;

int main() {
    
    set<int> s1;
    set<int> s2 = { 3,1,3,2,5 }; //1,2,3,5
    set<int> s3(s2);             //1,2,3,5


    return 0;
}
