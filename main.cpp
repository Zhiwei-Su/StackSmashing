/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DeanSu
 *
 * Created on 8/2/19
 */

#include "newfile.h"
#include "FindSmallest.h"
/*
 * 
*/
// print the elements of the vector
template <typename T>
void printv(const vector<T>& v) {
    if(v.empty()) return;
    cout<<"printv:";
    for(auto i : v) cout<< i << " ";
    cout<< endl;
};

int main(int argc, char** argv) {

    cout<<"Hello FindSmallest"<<endl;
    vector<int> it = {34, 15, 88, 2};
    printv(it);
    //vector<int> it = {34, -345, -1, 100};
    cout<<"Smallest:"<<FindSmallest1(it)<<endl;
    
    return 0;
}

