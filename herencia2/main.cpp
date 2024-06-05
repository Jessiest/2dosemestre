#include <iostream>
using std::cout;
using std::endl;

class Padre1
{
  public:
  Padre1()
  {
    cout << "Constructor Padre 1" << endl;
  }
  ~Padre1()
  {
    cout << "Destructor Padre 1 " << endl;
  }
  void imprimir()
  {
    cout << "Imprimir padre 1" << endl;
  }

};
class Padre2
{
  public:
  Padre2()
  {
    cout << "Constructor Padre 2" << endl;
  }
  ~Padre2()
  {
    cout << "Destructor Padre 2 " << endl;
  }
  void imprimir()
  {
    cout << "Imprimir padre 2" << endl;
  }

};

class Hijo : public Padre1, public Padre2
{
  public:
  Hijo()
  {
    cout << "Constructor Hijo" << endl;
  }
  ~Hijo()
  {
    cout << "destructor de hijo" << endl;
  }
  void imprimir()
  {
    cout << "Imprimir hijo 1" << endl;
  }

};

class A
{
    public:
    void imprimir()
    {
        cout << "dentro de imrpimir en clase a" << endl;
    }
};

class B :public A{};

class C :public A
{
    void imprimir()
    {
        cout << "De imprimir de A" << endl;
    }
};

class D : public B, public C{};

int main(){
  Hijo h1;
  h1.Padre1::imprimir();


  return 0;
}