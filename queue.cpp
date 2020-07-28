#include <iostream>

using namespace std;
void insert(int);
#define n 4
int f,r,q[n];
int main()
{
   insert(10);
   insert(20);
   insert(30);
   insert(40);
   insert(50);
   insert(50);

    return 0;
}
int isfull(){
    return(r==n)?1:0;
}
void insert(int data)
{
    if(isfull()){
        cout<<"q is full";
    return;}
    else
    {
        q[r]=data;
        r++;
    }
    
}
