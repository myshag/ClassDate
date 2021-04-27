#include <iostream>
using namespace std;

 class MyDateClass {
  private:
  /* все данные и методы используются только внутри класса */
    

  public:
  /* все данные и методы доступны другим функциям программы */
  MyDateClass()
  {

  }
    
    // метод установки даты
    void setDate(int parDay, int parMonth, int parYear) {
      day = parDay;
      month = parMonth;
      year = parYear;
    }

    // метод вывода даты
    virtual void getDate() {
      cout << "День: " << day << "\n";
      cout << "Месяц: " << month << "\n";
      cout << "Год: " << year << "\n";
    }

  protected:
  /* все данные и методы используются внутри класса и доступны в классах-наследниках*/
    int day;
    int month;
    int year;

};  

class MyUSADateClass : protected MyDateClass
{
   public:
    
   void getDate() override
   {
      cout << "MyUSAClass\n";
      cout << "Месяц: " << month << "\n";
      cout << "День: " << day << "\n";
      cout << "Год: " << year << "\n";
     
   }

};


int main() {

  MyDateClass* dateObject = new MyDateClass();
  MyDateClass* dateObject2 = new MyUSADateClass();

  dateObject->setDate(10,12, 2016);
  dateObject2->setDate(10,12, 2016);
  dateObject->getDate();
  dateObject2->getDate();

  
  

}