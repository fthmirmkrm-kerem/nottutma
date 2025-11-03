/* ****************************************
 * Welcome to GDB Online.
 * GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, 
 * C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, 
 * JS, SQLite, Prolog.
 * Code, Compile, Run and Debug online from anywhere in world.
 * **************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
   
    ofstream dosya("Dosya.txt"); 
    
    string konsoldanOkunan; 
    
    while(konsoldanOkunan != "cik")
    {
        getline(cin, konsoldanOkunan); 
        
        dosya << konsoldanOkunan << endl; 
    }
    
    dosya.close(); 
    
    return 0; 
}
