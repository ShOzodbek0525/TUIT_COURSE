#include <iostream>
using namespace std;

class plastikkarta
{
  private:
      string nomi;
      string raqami;
      double balans;
      int pincode;
    public:
    plastikkarta(string nomi,string r,double b, int p)
    {
        this->nomi=nomi;
        raqami=r;
        balans=b;
        pincode=p;
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
    	if (pin_tekshir())
			{
				if(summa>0 && summa<balans)
        {
          balans-=summa;
          cout<<"Balansingizdan "<<summa<<" so'm yechildi!"<<endl;
        }
        else cout << "Balansingizda " << summa << " mavjud emas" << endl;
    	}
    	else
    	{
    		cout << "Pincode noto'g'ri" << endl;
			}
		}
    
    void pul_view()
    {
    	cout << "Umumiy balansingiz: "<< balans << " so`m" << endl;
		}
		bool pin_tekshir()
		{
			int pin;
			cout << "Pincodeni kiriting: ";
			cin >> pin;
			if (pin==pincode){
				return true;
			}
			else return false;
		}
};

int main()
{
   plastikkarta yangikarta("humo","1234 5678 1475 2589",580000, 1234);
   cout<<"Plastik karta yartildi!" << endl;
   yangikarta.tuldirish(25000);
   yangikarta.pulyechish(850000);
   yangikarta.pul_view();

}
