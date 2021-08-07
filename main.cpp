#include<iostream>

using namespace std;

int main(){
    int a,b=0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        if (s[1]=='-')
        {
           b--;
        }
        else{
            b++;
        }
    }
    cout<< b;
    
}