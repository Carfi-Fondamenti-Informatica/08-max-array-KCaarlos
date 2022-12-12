#include "lib.h"
using namespace std;

float valore( float melvin[], int dim ){
float num=0;
      
      for (int i=0; i<dim; i++){

         if(melvin[i]>=num){
            num=melvin[i];
          }
       }

    return num;

}
