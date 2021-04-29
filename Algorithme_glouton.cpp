# include <iostream>
# include <stdlib.h>
# include <vector>
using namespace std;


int *x ; 
int nb;  
int capacite;  
int total;
 int poids_dispo ;
           
void trie() {

}


int main() {
nb=4;
double max;
int total=0 ;
 
x=new int[nb];  
 
 
capacite=30;
 
//tableau valeurs 
int valeurs[4]= {7,4,3,3};
//tableau des poids 

int  poids[4]={13,12,8,10};
  
  //tableau valeur sur poids
double divi[4]={ (double)valeurs[0]/poids[0], (double)valeurs[1]/poids[1], (double)valeurs[2]/poids[2], (double)valeurs[3]/poids[3]};
  






  //algo de trie naif 
double dtemp;
int temp;


for ( int i=0 ; i<nb ; i++ )
{
for ( int j=i+1 ; j<nb ; j++ ){

if ( divi[i] < (divi[j]  )  )
{

   dtemp=divi[i];
   divi[i]=divi[j];
   divi[j]=dtemp;
   
   temp=valeurs[i];
    valeurs[i]=valeurs[j];
    valeurs[j]=temp;

   temp=poids[i];
   poids[i]= poids[j];
   poids[j]=temp;
   
     
}


}

 
}      








 
 int i;

i = 0 ;

poids_dispo = capacite ;


 while( i > nb ){
  i = i + 1 ;
  x[i] = 0 ;
}

i = 0 ;


while ( i<nb) {

	if (poids_dispo >= poids[i] )
	{
  		 x[i] = 1 ;
 		 poids_dispo = poids_dispo - poids[i] ;
    	 total= valeurs[i]+total;
 
}
 i = i + 1 ;
}

 

 
 
 
 
 
  cout<<"\n -- Liste de tout les object -- \n   " ;


for(int i=0;i<nb; i++) {
cout<<"\n poids[ "<<i<<"] = "<<poids[i] ;

cout<<"\t valeur["<<i<<"]= "<<valeurs[i] ;
 }


 cout<<"\n -- Les object qui sont dans le sac a dos  \n " ;




 
for(int i=0;i<nb; i++) {
	if (x[i] == 1 ){
		cout<<"\n l'object n° "<<i<<" est dans le sac a dos  \n " ;

}

  } 


cout<<"\n Valeur totale  =: "<<total<<endl;
 

return 0;

}


