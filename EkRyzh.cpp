#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
        string Name;
        int Age;

public:
      /*Human()
      {
          Age = 0;
          cout<<"Vadim is created default constructor"<<endl; // стандартный конструктор
      }*/
      Human(string HumansName)
      {
          Age = 0;
          Name = HumansName;
          cout<<Name<<" Was creator of overloaded contructor"<<endl;
      }
      Human(string HumansName,int HumansAge)
      {
          Age = HumansAge;
          Name = HumansName;
          cout<<"second overloaded constructor is created by "<<Name<<" and is "<<Age<<endl;
      }
       void SetAge(int HumansAge)
    {
        Age = HumansAge;
    }
    void SetName(string HumansName)
    {
        Name = HumansName;
    }
    void IntroduceSelf()
    {
        cout<<"My name is "<<Name<<" and am "<<Age<<endl;
    }

    };
int main()
{
    Human UncnounMan("Vadim");
    UncnounMan.SetAge(35);

    Human UncnounWoman("Lilia", 33);

    UncnounMan.IntroduceSelf();
    UncnounWoman.IntroduceSelf();

}
