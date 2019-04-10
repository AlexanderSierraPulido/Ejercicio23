#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
float* leer(string filename, int *len);
float suma(float* arr, int len);
int main ()
   {
   string filename;
   float* x, y;
   float suma_x, suma_y;
   int lenx = 0, leny = 0;

   filename = "valores_x.txt";
   x = leer(filename, &lenx);
   filename = "valores_y.txt";
   y = leer(filename, &leny);

   cout << "Suma x: " << suma(x,lenx) << endl;
   cout << "Suma y: " << suma(y,leny) << endl;

   return 0;

}
float suma(float* arr, int len) 
    {
    float suma = 0;
    for(int i=0; i<len; i++)
      {
      suma += arr[i];
      }
    }

float* leer(string filename, int *len)
   {
   ifstream infile;
   string line;
   int num_filas = 0;
   float* datos;    
   infile.open(filename);
   getline(infile, line);
   while(infile)
      {
      num_filas ++;
      getline(infile,line);
      }
   infile.close(); 
   datos = new float[num_filas];
   int i = 0;   
   infile.open(filename);
   getline(infile, line);
   while(infile)
      {
      datos[i] = atof(line.c_str());
      i++;
      getline(infile,line);
      }
   infile.close();
   *len = num_filas;
   return datos;
   }
    return suma;
}
