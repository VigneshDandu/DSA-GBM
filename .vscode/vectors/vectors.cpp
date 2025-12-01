#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    //vector<int> vec ={1,2,3,4,5,6,7,8};//initializer list
    //vector<int> vec(5,2);//first is size second is value
    vector<int> vec(5,2);

    for(int i =0; i<vec.size(); i++){//normal for loop
        cout<<vec[i]<<"\n"<<endl;
    }

    for(int i: vec){ // this is for each loop
        cout<<i<<"\n"<<endl;
    }
}