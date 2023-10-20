#include<iostream>
using namespace std;

class Book{
	private :
		int id;
		string name;
		double price;
	public :
		Book(int id,string name,double price){
			this->id = id;
			this->name=name;
			this->price=price;
		}	
};
