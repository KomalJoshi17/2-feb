#include <iostream>
using namespace std;

int main()
{
    int i, j, N; 
    cout<<"Enter number of rows: "<<endl;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N || i==j || j==(N - i + 1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}