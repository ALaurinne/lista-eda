#include <iostream>
#include <queue>

using namespace std;
int main() {
  
  queue<int> fila;
  int x;
  cin >> x;
  int vector[x];

  for(int i = 0; i <x; i++){
    cin >> vector[i];
  }

  for(int i = 0; i<x; i++){
    if(vector[i] == 0 || vector[i] == 7 || vector[i] == 11 
      || vector[i] == 14 || vector[i] == 17 || vector[i] == 19 ){
      fila.push(vector[i]);
      }
  }

   if(fila.empty()) {
    cout << "Pizza" << endl;
    return 0;
  }
  x = fila.size();
  
  if(x == 6){
    cout << "Vingadores Avante" << endl;
    return 0;
  } 

  
  for(int i = 0; i< x; i++){
    cout << fila.front() << " ";
    fila.pop();
  }
  
    cout << endl;
    cout << "Vingadores Atencao" << endl;
    return 0;
}