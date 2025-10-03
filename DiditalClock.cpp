#include<bits/stdc++.h>
#include <Windows.h>
using namespace std;

int main(){

    int h, m, s;
    int d = 1000;

    cout << "Set Time : " << endl;
    cin >> h >> m >> s;
    if(h > 12 || m > 60 || s > 60){
        cout<< " ERROR !" << endl;
    }
    while(1){
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        } 
        if(h>12){
            h=1;
        }
        cout<< "Clock :--> " ;
        // cout<<setfill('0');
        // cout << setw(2);
        // // cout << setw(2);
        // cout << h << ":" << m << ":" << s << endl;
       

        // printf("\n %02d:%02d:%02d",h,m,s);

        cout << setw(2) << setfill('0') << h <<":";
        cout << setw(2) << setfill('0')<< m <<":";
        cout << setw(2) << setfill('0')<<s;
         Sleep(d);

        system("cls");
    } 

}