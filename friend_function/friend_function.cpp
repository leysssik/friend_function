#include <iostream>
#include <string>
using namespace std;

class Person
{
	string fio;
public:
	Person(string fio)
};
class Car
{
private:
	string marka, model;
public: 
	Car(string marka, string  model)
	{
		this->marka = marka; this->model = model;
	}
	friend void _friend(Car c, string fio);
	
};
 void _friend(Car c, string fio)
{
	cout << fio << " угнал автомобиль Лейсанушки "
		<< c.marka << " " << c.model << endl;
}
 int main()
 {
	 setlocale(LC_ALL, "Russian");
	 Car bmw{ "BMW", "316i" };
	 Car audi{ "Audi", "RS7" };
	 _friend(bmw, "Иван Заволокин");
	 _friend(audi, "Руслан Кушманцев");

 }
