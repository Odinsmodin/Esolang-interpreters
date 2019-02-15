#include <iostream>
using namespace std;
int main()
{
    string yeet;
    getline(cin,yeet);
    if(yeet!=yeet){
        cout << "Nope.";
        return 69;
    }
    cout << "Hello, world!\n";
    cout << yeet << " \n";
    int yote = 99;
    while(yote>1){
        cout <<yote<<" bottles of beer on the wall, "<<yote<<" bottles of beer.\n";
        yote -= 1; 
        cout<<"Take one down and pass it around, "<<yote<<" bottles of beer on the wall.\n";
    }
    cout << "1 bottle of beer on the wall, 1 bottle of beer. Take one down and pass it around, no more bottles of beer on the wall.\n";
    cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
    cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
    
    int n = 1000, t1 = 0, t2 = 1, nextTerm = 0;
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " \n" << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " \n";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " \n";
    }
    if(yeet!=yeet){
        return 0;
    }
    if(yeet==yeet){
        while(yeet==yeet){
            cout << yeet<<"\n";
        }
    }
}