#include <cstdlib>
#include <iostream>

using namespace std;

main(){
	
	int primero=0, primo=0, segundo=0;
	
	cout<<"Introduzca primer valor"<<endl;
    cin>>primero;
    cout<<"Introduzca segundo valor"<<endl;
    cin>>segundo;

	if((segundo-primero)>=0 && segundo>primero){
		for(int x=1; x<=(segundo-primero); x++){
		if((segundo-primero)%x==0){
			primo++;
		}
	}
	}else{
          for(int x=1; x<=(primero-segundo); x++){
		if((primero-segundo)%x==0){
			primo++;
		}
    }
}
	
	if(primo==2){
		cout<<"diferencia  "<<segundo-primero<<"  es primo"<<endl;
	}else{
		cout<<"diferencia  "<<segundo-primero<<"  no es primo"<<endl;
	}
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
