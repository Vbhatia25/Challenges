#include <iostream>

using namespace std;

int main()
{
    int statues;
    int printer=1;
    int days=0;
  
cin>>statues;

while(statues-printer>=1){
    printer=printer*2;
    days++;
}

days=days+1;

cout<<days;

    return 0;
}
