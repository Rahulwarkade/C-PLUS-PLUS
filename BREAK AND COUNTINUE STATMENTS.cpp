#include<iostream>
using namespace std;

int main(){
  /*Break Statements in C++
Continue Statements in C++
Break Statements
 Break statements in loops are used to terminate the loop.
COUTINUE STATEMENTS IN C++
Continue Statements in C++
Continue statements are somewhat similar to break statements. The main difference is that the break statement entirely terminates the loop, but the continue statement only terminates the current iteration. */

    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}
