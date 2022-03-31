
/*Printing Pyramids
Print a pyramid of Pascal’s triangle

Input number of rows: 5                                               
          1                                                            
        1   1                                                          
      1   2   1                                                        
    1   3   3   1                                                      
  1   4   6   4   1 */

#include <iostream>
using namespace std;

int main() {
int n=0; int contador=0;

cout<<"Introduce the limit of your Pyramide: ";
cin>>n;  
  
  for(int i=1; i<=n; i++){
      
      contador = 1;
      for(int k = n-i; k>0; k--)
        cout<<" ";
      for(int j=1; j <= i; j++){
        cout<<contador<<" ";
        contador = contador * (i-j)/j;
      }

      cout<<endl; 
  }

return 0;
  
}