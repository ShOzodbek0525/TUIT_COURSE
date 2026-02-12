#include <iostream>
using namespace std;

class plastikkarta
{
  private:
      string nomi;
      string raqami;
      double balans;
    public:
    plastikkarta(string nomi,string r,double b)
    {
        this->nomi=nomi;
        raqami=r;
        balans=b;
    }
    void tuldirish(double yangisumma)
    {
        if(yangisumma>0)
        {
            balans+=yangisumma;
            cout<<"Balansingizga "<<yangisumma<<" so'm qabul qilindi"<<endl;
        }
        else cout<<"Xato summa!"<<endl;
    }
    void pulyechish(double summa)
    {
        if(summa>0 && summa<balans)
        {
            balans-=summa;
            cout<<"Balansingizdan "<<summa<<" so'm yechildi!"<<endl;
        }
        else cout << "Balansingizda " << summa << " mavjud emas" << endl;
    }
    
    void pul_view()
    {
    	cout << "Umumiy balansingiz: "<< balans << " so`m" << endl;
		}
};

int main()
{
   plastikkarta yangikarta("humo","1234 5678 1475 2589",580000);
   cout<<"Plastik karta yartildi!" << endl;
   yangikarta.tuldirish(25000);
   yangikarta.pulyechish(850000);
   yangikarta.pul_view();
}
