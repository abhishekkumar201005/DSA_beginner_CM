#include <iostream>
#include <string>
using namespace std;

// Product Description
class Product
{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // Constructor
    Product(int id, char n[], int mrp, int selling_price)
    {
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        strcpy(name, n);
    }
    // Setters
    void setMrp(int price)
    {
        mrp = price;
    }
    void setSp(int price)
    {
        if (price > mrp)
        {
            selling_price = mrp;
        }
        else
        {
            selling_price = price;
        }
    }
    // Getters
    int getMrp()
    {
        return mrp;
    }
    int getSp()
    {
        return selling_price;
    }
} ;

int main(){
    Product camera(101, "hero", 28000, 29000);
    // sellingprice<=mrp
    // camera.setMrp(100);
    // camera.setSp(200);
    // cout << sizeof(camera) << endl;
    cout << camera.getMrp() << endl;
    cout << camera.getSp() << endl;
    return 0;
}