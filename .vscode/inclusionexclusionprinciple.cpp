#include <iostream>
using namespace std;
class factor
{
    int countone = 0;
    int counttwo = 0;
   int  countthree=0;
    int one;
    int two;

public:
int countfactor()
    {
        cout << "enter number 1" << endl;
        cin >> one;
        cout << "enter number 2" << endl;
        cin >> two;
int i=1;
    while(i<=1000)
        {
            if(i%5==0)
            {
             countone++;
            }
           else if(i%7==0)
            {
             counttwo++;
            }
        else if(i%5==0 && i%7==0)
            {
             countthree++;
            }
            i++;
        }
        int total=countone+counttwo-countthree;
        cout<<total<<endl;
        return total;
    }

};
int main()
{
    factor p;
    cout<<"numbers of factor are:"<<endl;
    p.countfactor();
    

}
