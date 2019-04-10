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
   filename1 = "valores_x.txt";
   x = leer(filename1, &lenx);
   filename2 = "valores_y.txt";
   y = leer(filename2, &leny);
   cout << "La suma de x es: " << suma(x,lenx) << endl;
   cout << "La suma de y es: " << suma(y,leny) << endl;
   return 0;

}
float suma(float* arr, int len) 
    {
    float sum = 0;
    for(int i=0; i<len; i++)
      {
      sum += arr[i];
      }
    }

float* leer(string filename, int *len)
   {
   string line;
   ifstream infile;
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
