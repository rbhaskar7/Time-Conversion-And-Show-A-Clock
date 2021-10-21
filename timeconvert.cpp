#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    if(s.find("AM") != string::npos) {if(s.find("12") == 0) {s.replace(0, 2, "00");}}
    else
    {
        stringstream ss(s), ss1;
        int t;
        char ch;
        ss>>t>>ch;
        
        if(t != 12) {t += 12;}
        
        ss1<<t;
        string hr = ss1.str();
        s.replace(0, 2, hr);
    }

    s.erase(s.end() - 2, s.end());
    
    return s;
}

int main()
{
    string time;
    cout<<"12 HOUR FORMAT TIME (HH:MM:SS AM/PM) : ";
    getline(cin, time);
    
    cout<<"--------------------------------------------"<<endl;
    cout<<"| 24 HOUR FORMAT TIME (HH:MM:SS) : "<<timeConversion(time)<<" |"<<endl;
    cout<<"--------------------------------------------"<<endl;

    return 0;
}
