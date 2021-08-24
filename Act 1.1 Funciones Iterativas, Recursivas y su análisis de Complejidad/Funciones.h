#ifndef FUNCIONES_H
#define FUNCIONES_H


class Funciones{
  public:

  sumaIterativa(int n)
  sumaRecursiva(int n)
  sumaDirecta(int n)
  //constructores
  Funciones()
  Funciones(int n)
};
int Funciones::sumaIterativa(int n){
  int result=0;
  for (int i=1;i<=n;i++){
    suma+=i;
  }
  return result;
}
int Funciones::sumaRecursiva(int n){
  if (n<=1){ 
    return 1;
    }
  else{
    return n + sumaRecursiva(n-1);
    }

}
int Funciones::sumaDirecta(int n){
  result=(n*(n+1))/2;
}

#endif