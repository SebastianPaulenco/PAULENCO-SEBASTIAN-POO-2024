#include <pch.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class Animal
{
public:
    int legs;


    void SetName(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Animal dog, gambas;


    dog.SetName("Dog");
    dog.legs = 4;

    gambas.SetName("Gambas");
    gambas.legs = 10;


    cout << "Animal A - name: " << dog.GetName() << " has legs: " << dog.legs << endl;
    cout << "Animal B - name: " << gambas.GetName() << " has legs: " << gambas.legs << endl;

    return 0;
}