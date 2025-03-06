#include <bits/stdc++.h>

using namespace std;

#define TIE cout<<"TIE <3 Try Again \n";
#define LOSE cout<<"You lost :( \n";
#define WIN cout<<"You won!! \n";
//paper=1
//scissors=2
//rock=3
#define LOSE2 cout<<"LOST :( Next time, remember to choose\n";
#define WIN2 cout<<"WON!! Congratulations, luck is on your side \n";

vector<int>v= {1,2,3};
int main()
{
    cout<<"Valid strings: ROCK, PAPER, SCISSORS \n";
    while(true)
    {
        int ok=0;
        random_shuffle(v.begin(), v.end());
        int a = v[0];
        int b=v.back();
        string s;
        cout<<"\nROCK PAPER SCISSORS \n";
        getline(cin,s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if(s=="rock")
        {
            if(a==1) LOSE
                else if(a==2) WIN
                    else TIE
                        ok=1;
        }
        else if(s=="paper")
        {
            if(a==1) TIE
                else if(a==2) LOSE
                    else WIN
                        ok=1;
        }
        if(s=="scissors")
        {
            if(a==1) WIN
                else if(a==2) TIE
                    else LOSE
                        ok=1;
        }
        if(ok==0)
            cout<<"Enter a valid string, but don't worry, we chose for you this time and you... \n";
        {
            if(b==1)
            {
                if(a==2) LOSE2
                else WIN2
            }
            if(b==2)
            {
                if(a==3) LOSE2
                else WIN2
            }
            else if(b==3)
            {
                if(a==1) LOSE2
                else WIN2
            }
        }

    }
    return 0;
}
