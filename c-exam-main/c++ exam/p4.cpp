#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }

    virtual void calculateDiscount()
    {
        cout << "No discount available" << endl;
    }
};

class Laptop : public Device
{
public:
    void calculateDiscount() 
    {
        if(getPowerConsumption() <= 70)
            cout << "Laptop Discount: 10%" << endl;
        else
            cout << "Laptop Discount: 5%" << endl;
    }
};

class Smartphone : public Device
{
public:
    void calculateDiscount()
    {
        if(getPowerConsumption() <= 30)
            cout << "Smartphone Discount: 15%" << endl;
        else
            cout << "Smartphone Discount: 8%" << endl;
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    l.setBrand("Dell");
    l.setPowerConsumption(65);

    s.setBrand("Samsung");
    s.setPowerConsumption(25);

    Device *d[2];

    d[0] = &l;
    d[1] = &s;


    for(int i = 0; i < 2; i++)
    {
        d[i]->calculateDiscount();
    }

    return 0;
}
