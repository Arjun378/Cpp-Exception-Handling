/*22070123150 Experiment */
/*try-catch exception handling2 with class*/
#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Default const called: "<<endl;
    }
    public:
    ~test()
    {
        cout<<"Default dest called: "<<endl;
    }
};
int main()
{
    try{
        test t1;
        throw 10;
    }
    catch(int x)
    {

    }
}