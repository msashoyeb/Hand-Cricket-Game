#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int random_number()
{
    srand((unsigned) time(0));   //unsigned used for always positive. We can use srand(time(0)); instead this
    //for N time continues random number code: srand((unsigned) time(0)); for(int i=1;i<=N;i++){int r=(rand()%6)+1; cout << "The random number generated is: "<<r<< endl;}
    int r=(rand()%6)+1;
    return r;
}
int main()
{
    int n,count=0,t;
    cout<<"You are bat first, Hit any number (between 1-6) to start batting...."<<endl;
    while(cout<<"Your turn: ",cin>>
            n)
    {
        int t= random_number();
        if(n>6)
        {
            cout<<"Sorry you can't take more than 6 runs. Bat again..."<<endl;
            cout<<"_________"<<endl;
            cout<<"Score: "<<count<<endl;
            cout<<"_________"<<endl;
            cout<<endl;
        }
        else if(n==0)
        {
            cout<<"Dot ball!"<<endl;
            cout<<"_________"<<endl;
            cout<<"Score: "<<count<<endl;
            cout<<"_________"<<endl;
            cout<<endl;
        }
        else
        {
            if(n==t)
            {
                cout<<"Bot's turn: "<<t<< endl;
                cout<<"Oh, Unlucky. You are Out!"<<endl;
                cout<<"................................................"<<endl;
                cout<<"Your total run is: "<<count<<endl;
                cout<<"................................................"<<endl;
                break;
            }
            else if(n!=t)
            {
                count+=n;
                cout<<"Bot's turn: "<<t<< endl;
                cout<<"_________"<<endl;
                cout<<"Score: "<<count<<endl;
                cout<<"_________"<<endl;
                cout<<endl;
            }
        }
    }
    return 0;
}
