#ifndef _AVE_H_
#define _AVE_H_
#include <iostream>
using std::string;

class Ave
{
   protected:
   string nombre;

   public:
   Ave();
   Ave(string nom);
   void volar();

};
#endif