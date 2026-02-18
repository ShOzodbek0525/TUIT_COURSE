#include <iostream>
#include <math.h>
using namespace std;
https://lms.tuit.uz/uploads/activities/KK/f9/sl/1770811275.docx

class humans
{
private:
  string nomi;
  string yoshi;
public:
  humans(string nomi, string yoshi) :nomi(nomi), yoshi(yoshi) {}
  void print_h()
  {
    cout << "Nomi=" << nomi << "Yoshi=" << yoshi << endl;
  }
};

class xodim : public humans
{
private:
  string mutaxasisligi;
  double maoshi;
public:
  xodim(string mutaxasisligi, double maoshi, string nomi, string yoshi) :mutaxasisligi(mutaxasisligi), maoshi(maoshi), humans(nomi, yoshi) {}
  void print()
  {
    print_h();
    cout << "Mutaxasisligi=" << mutaxasisligi << "Maoshi=" << maoshi << endl;

  }

};
int main() 
{
  xodim x("Shifokor", 2568974, "Alisa", "29");
  x.print();

  
}
