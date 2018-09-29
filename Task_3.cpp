#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class Invoice{
public:
  Invoice()
  {

  }
  Invoice(string partNumber,string partDescription,int Qty,double Price){
    part_number=partNumber;
    part_description=partDescription;
    quantity=Qty;
    price=Price;
  }
  void set_partNumber(string partNumber)
  {
    part_number=partNumber;
  }
  void set_partDescription(string partDescription)
  {
    part_description=partDescription;
  }
  void set_Quantity(int Qty)
  {
    if(Qty>=0)
    quantity=Qty;
    else
    quantity=0;
  }
  void set_Price(double Price)
  {
    if(Price>=0)
    price=Price;
    else
    price=0;
  }
  string get_partNumber()
  {
    return part_number;
  }
  string get_partDescription()
  {
    return part_description;
  }
  int get_Quantity()
  {
    return quantity;
  }
  double get_Price()
  {
    return price;
  }
  double getInvoiceAmount(){
    double InvoiceAmount;
    InvoiceAmount=price*quantity;
    return InvoiceAmount;
  }
private:
  string part_number,part_description;
  double price;
  int quantity;

};
int main(int argc, char const *argv[]) {
  Invoice Galaxy_s9,Xperia_SP;
  string part_detail;
  double item_price;
  int Qty;
  cout<<"\nGalaxy_S9 Part Details "<<endl;
  cout<<"\nEnter Part Number: ";
  cin>>part_detail;
  Galaxy_s9.set_partNumber(part_detail);
  cout<<"\nEnter Part Description: ";
  cin>>part_detail;
  Galaxy_s9.set_partDescription(part_detail);
  cout<<"\nEnter Part price: ";
  cin>>item_price;
  Galaxy_s9.set_Price(item_price);
  cout<<"\nEnter Part Quantity: ";
  cin>>Qty;
  Galaxy_s9.set_Quantity(Qty);

  cout<<"\nXperia_SP Part Details "<<endl;
  cout<<"\nEnter Part Number: ";
  cin>>part_detail;
  Xperia_SP.set_partNumber(part_detail);
  cout<<"\nEnter Part Description: ";
  cin>>part_detail;
  Xperia_SP.set_partDescription(part_detail);
  cout<<"\nEnter Part price: ";
  cin>>item_price;
  Xperia_SP.set_Price(item_price);
  cout<<"\nEnter Part Quantity: ";
  cin>>Qty;
  Xperia_SP.set_Quantity(Qty);

  cout<<"\nGalaxy_S9 part Number: "<<Galaxy_s9.get_partNumber()<<" Description: "<<Galaxy_s9.get_partDescription()<<" Price: "<<Galaxy_s9.get_Price()<<" Quantity: "<<Galaxy_s9.get_Quantity()<<endl;
  cout<<"\nXperia_SP part Number: "<<Xperia_SP.get_partNumber()<<" Description: "<<Xperia_SP.get_partDescription()<<" Price: "<<Xperia_SP.get_Price()<<" Quantity: "<<Xperia_SP.get_Quantity()<<endl;
  cout<<"\nTotal Invoice Amount of Galaxy_s9 "<<Galaxy_s9.getInvoiceAmount()<<endl;
  cout<<"\nToatal Invoice Amount of Xperia_SP "<<Xperia_SP.getInvoiceAmount()<<endl;
  return 0;
}
