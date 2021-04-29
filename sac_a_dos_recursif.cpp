	# include <iostream>
	# include <stdlib.h>
	# include <vector>
	using namespace std;
	
	int *poids ;
	int *x ;
 	int *valeurs;  
	int nb;  
	int capacite; 
	int total;


 	 
int max(int a,int b) { if (a>b) return a; else return b;}


 
 

int sac(int i,int  poids_courant  ){

		if (i==nb-1) {

			if (poids[i]+poids_courant<=capacite)

				return valeurs[i];
			 else
			 	return 0;
			}

		if (i<nb-1) {

			if ( poids[i]+poids_courant<=capacite )
				 return max(valeurs[i]+sac(i+1, poids_courant+poids[i]),sac(i+1, poids_courant ));
			else 
				return sac(i+1, poids_courant);

			}

			else return 0;	}
	
	
	
	
	int main() {
	nb=4;
	double max;
	 
	
 	x=new int[nb];  
	poids=new int[nb];  
	valeurs=new int[nb];  
	 
	 
	capacite=30;
	 
	   poids[0]=13;
	   poids[1]=8;
	   poids[2]=12;
	   poids[3]=10;
	
	 
	   valeurs[0]=7;
	   valeurs[1]=3;
	   valeurs[2]=4;
	   valeurs[3]=3;
	
	 
	  
	  
	total=sac(0,0);

	 
	 
	 cout<<"\n -- Liste de tout les object -- \n   " ;

	
	 
	for(int i=0;i<nb; i++) {
	cout<<"\n poids["<<i<<"] = "<<poids[i] ;
	
	cout<<"\t valeur["<<i<<"]= "<<valeurs[i] ;
	 }
	 
	cout<<"\n Valeur totale  = "<<total<<endl;
	 
	
	return 0;
	
	}
