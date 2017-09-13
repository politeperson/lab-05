#include <iostream>
using namespace std;
/*
utilizo el metodo de ordenamiento burbuja para hallar
la mediana del array
*/
int buble(int arr[9]){
int n = 9;
	int l=0;
	bool band=true;
	while(band){
	band=false;
	for(int i = 0; i < n-1; i++){
		if(arr[i]>arr[i+1]){//ordenamos de menor a mayor
	int temp=arr[i];
	arr[i]=arr[i+1]	;
	arr[i+1]=temp;
	band = true;	
	}
	}
	n--;
    	}                           
return arr[9/2];
}
                   
int main(){
int mat[3][3];//creo mi matriz de 3*3
int mediana[9],aux[9];//el arraay debe ser de tamaño n*n de la matriz
for(int i =0; i < 3; i++){	
    for(int j = 0; j < 3; j++){//aqui hago que el usuario ingrese los valores en la matriz
        cin >> mat[i][j];
    }
}
int it=0;
int max=mat[0][0],min=mat[0][0], prom=0;//resorro mi matriz evaluando si 
for(int i =0; i < 3; i++){
       for(int j =0; j < 3; j++){
	if(mat[i][j]>max)
		max=mat[i][j];//aqui evaluo si el valor es mayor
	if(mat[i][j]<min)//si es menor
		min=mat[i][j];
      prom+=mat[i][j];//sumo prograsivamente el promedio
	mediana[it]=mat[i][j];//relleno mi array para mediana y el array aux	
	aux[it]=mat[i][j];
it++;
		
}
}    

prom /= 3*3;//divido el promedio entre el total de valores de mi matriz
int rpt[2];
(n%2)?rpt[0]=arr[n/2]:rpt[0]=arr[n/2-1],rpt[1]=arr[n/2];
                                */
int rpta[]={min,max,(float)prom,buble(mediana)};//asigno a mi array rpta todas las respuestas
for(int i = 0; i < 4; i++) {
	cout << rpta[i] << " ";
}            
 cout << "\n";      






return 0;
}