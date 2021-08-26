#include <iostream>

class Funciones{
  public:

  int sumaIterativa(int n);
  int sumaRecursiva(int n);
  int sumaDirecta(int n);
  //constructores
  Funciones();
  Funciones(int n);
};
Funciones::Funciones(){}

int Funciones::sumaIterativa(int n){
  int result=0;
  for (int i=1;i<=n;i++){
    result+=i;
  }
  return result;
}
int Funciones::sumaRecursiva(int n){
  if (n==0){ 
    return 0;
    }
  else{
    return n + sumaRecursiva(n-1);
    }

}
int Funciones::sumaDirecta(int n){
  int result=0;
  result=(n*(n+1))/2;
  return result;
}