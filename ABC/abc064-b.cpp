#include<bits/stdc++.h>
using namespace std;

int main()
{
    //input and processing part
    int input,coordinate,max = 0,min = 1000;
    cin>>input;
    
    for(int i = 0; i < input; i++)
    {
        cin>>coordinate;
        if(max < coordinate) max = coordinate;
        if(min > coordinate) min = coordinate;
    }

    //output part
    cout<<max - min;
}