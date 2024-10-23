#include <iostream>
#include <iomanip>
using namespace std;
class pro {
	float a,p;
	string titre;
	public :
		float calculerTTC(float prix ,float TVA=0.147){
	return prix=prix*(1+TVA);
}
	void remplir() {
		cout <<"entrer le titre de produit : " ;
cin >> titre ;	
cout <<"entrer le prix de produit : " ;
cin >> a ;
	}

	void afficher(){
	p=calculerTTC(a) ;
cout <<"+------------------+------------------+-----------------+ "<<endl;
cout <<"+ Article          + Prix             + Prix TTC        + "<<endl;
cout <<"+------------------+------------------+-----------------+ "<<endl;
cout <<setfill(' ')<<left<<setprecision(4)<<fixed;
cout <<"+ "<<setw(16)<< titre <<" + "<<setw(16)<< a <<" + "<<setw(15)<< p<< " +" <<endl;
cout <<"+------------------+------------------+-----------------+ "<<endl;	
	}
};

int main()
{
/*	float a,p;
	string titre;
	cout <<"entrer le titre de produit : " ;
cin >> titre ;	
cout <<"entrer le prix de produit : " ;
cin >> a ;
p=calculerTTC(a) ;
cout <<"+------------------+------------------+-----------------+ "<<endl;
cout <<"+ Article          + Prix             + Prix TTC        + "<<endl;
cout <<"+------------------+------------------+-----------------+ "<<endl;
cout <<setfill(' ')<<left<<setprecision(4)<<fixed;
cout <<"+ "<<setw(16)<< titre <<" + "<<setw(16)<< a <<" + "<<setw(15)<< p<< " +" <<endl;
cout <<"+------------------+------------------+-----------------+ "<<endl;*/
pro p1 ;
p1.remplir() ;
p1.afficher() ;
return 0 ;
}
