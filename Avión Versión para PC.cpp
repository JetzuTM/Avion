#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;


class avion{
    
    private://atributos
    void volar();
    public://métodos
    avion();//constructor
    float cielo, tierra, pista, codigo;
    void setcielo(float);
    void settierra(float);
    void setpista(float);
    void setcodigo(float);
    //métodos getters
    float getcielo();
    void gettierra();
    float getpista();
    float getcodigo();

};

  avion::avion(){

}

 void avion::setcielo(float _setcielo){

    cielo = _setcielo;
}

 void avion::settierra(float _settierra){

    tierra = _settierra;
}

 void avion::setpista(float _setpista){

    pista = _setpista;
}


void avion::setcodigo(float _setcodigo){

    codigo = _setcodigo;
}


 float avion::getcielo(){

    return cielo;
}

 void avion::gettierra(){

cout<<"No Definido";
}


 float avion::getpista(){

    return pista;
}

float avion::getcodigo(){

    return codigo;
}





class hangar{

    private:
    void guardar();
    public://métodos
    hangar();//constructor
    float ocup, disp, mos;
    void setocup(float);//ocupado
    void setdisp(float);//disponible
    void setmos(float);//Mostrar
    //métodos getters
    float getocup();
    float getdisp();
    float getmos();
  
 };   
    hangar::hangar(){
    
    }
    
  void hangar::setocup(float _setocup){

    ocup = _setocup;
}

  void hangar::setdisp(float _setdisp){

    disp = _setdisp;
}

 void hangar::setmos(float _setmos){

    mos = _setmos;
}

  float hangar::getocup(){

   return ocup;
}

  float hangar::getdisp(){

   return disp;
}

  float hangar::getmos(){

   return mos;
}



class pista{

   private://atributos
   void despegue();
   public://métodos
   pista();
   float despe, aterri, enpista, most;
   void setdespe(float);//despegue
   void setaterri(float);//aterrizaje
   void setenpista(float);//en la pista
   void setmost(float);//Mostrar
   //métodos getters
   float getdespe();
   float getaterri();
   float getenpista();
   float getmost();

};
  
   pista::pista(){

}
   void pista::setdespe(float _setdespe){

    despe = _setdespe;
}


void pista::setaterri(float _setaterri){

    aterri = _setaterri;
}

void pista::setenpista(float _setenpista){

    enpista = _setenpista;
}


void pista::setmost(float _setmost){

    most = _setmost;
}

float pista::getdespe(){

   return despe;

}

float pista::getaterri(){

   return aterri;

}

float pista::getenpista(){

   return enpista;

}

float pista::getmost(){

   return most;

}


int main (){	
	
    avion Avs[10]= avion();
    pista P[3]= pista();
    hangar H[4]= hangar();
    
	int opt, opt2, opt3,opt4,opt5,Codigo=1,Disp=1,Ocup;
	float Hangar=0, Ocupado[3], A1 , A2 ,A3;

    while(1==1){
		system("cls");
		cout<< "Programa Hecho por Edson Zambrano y Josber Hernandez!"<<endl<<endl;	
		
	cout<<" Hola Bienvenido se comunica con la Torre de Control"<<endl;
	cout<<"  Que Opcion Desea Utilizar?"<<endl;
	cout<<" Opcion N1: Administrar Avion "<<endl;
	cout<<" Opcion N2: Mostrar Aviones "<<endl;
    cout<<" Opcion N3: Mostrar Hangares "<<endl;
	cout<<" Opcion N4: Mostrar Pistas "<<endl;
	cout<<" Opcion N5: Salir"<<endl;
    cin>>opt;
	system("cls");
   
	switch(opt){
		
	   
	default:{ cout<<" ERROR: Opcion No Valida"<<endl;
    	getch();
    	break;}		
		
	case 5:{ cout<<" Ha finalizado el programa correctamente"<<endl;
    return 0;
}	

   case 2:{ 
   for(int i=1; i<=10; i++){
   Avs[i].setcodigo(i);
   if(Codigo== Disp)Avs[i].gettierra();
   cout<<" Avion N"<<Avs[i].getcodigo()<<endl;
   




   if(A2==2){cout<<" En Pista";}
   if(A3==3){cout<<" En Vuelo";}
   }
   getch();
   break;
}


    case 3:{ 
   for(int f=1; f<=4; f++){
   H[f].setmos(f);	
   cout<<" Hangar N"<<H[f].getmos()<<endl;
   }
   getch();
   break;
}



    case 4:{ 
   for(int g=1; g<=3; g++){
   P[g].setmost(g);	
   cout<<" Pista N"<<P[g].getmost()<<endl;
   }
   getch();
   break;
}

            case 1:{ 
            cout<<"Introduzca el avion que desee utlizar"<<endl;
            cin>>Codigo;
            Avs[Codigo].setcodigo(Codigo);
     
     cout<<" Estado del Avion: "<<endl;
	cout<<"4) En el Hangar"<<endl;
    cout<<"5) En Pista"<<endl;
    cout<<"6) En vuelo"<<endl;
    
cin>>opt2;	
         system("cls");

    switch(opt2){
    	
    case 4:{	
    cout<<" 7) Guardar en el Hangar"<<endl;
    cout<<" 8) Sacar del Hangar"<<endl;
    cin>>opt3;
    	
    if (opt3==7){
    cout<<" Guardar en el Hangar";
    Ocup=Ocup+1;
    
    if(Ocup<=4){
    
    H[Codigo].setdisp(A1);
    Avs[Codigo].gettierra();
    cout<<" Se a Guardado en el Hangar";
    getch();
    break;	
		}		
}
    	if(Ocup>4){ cout<<" ERROR: Hangares llenos saque 1 para poder Guardar el avion !"<<endl;}
    	getch();
    	break;
}

	if (opt3==8){
		Ocup=Ocup-1;
		cout<<" Se a Sacado del Hangar"<<endl;
		getch();
		break;
	}
	
	else{ cout<<" ERROR: Opcion No Valida"<<endl;}
    	getch();
    	break;
	
	case 5:{
    cout<<" 9) Ocupar Pista"<<endl;
    cout<<" 10) Despegar"<<endl;
    cin>>opt4;

    if(opt4==9){
    cout<<" Pista ocupada con exito"<<endl;
    getch();
    break;
}
    
    if(opt4==10){
    cout<<" Permiso para despegar concedido"<<endl;	
    getch();
    break;
	}
	
	else{ cout<<" ERROR: Opcion No Valida"<<endl;}
    	getch();
    	break;
}
 
    case 6:{	  	
	cout<<" 11) Aterrizar En una Pista"<<endl;
	cin>>opt5;
	
     if(opt5==11){
    cout<<" Permiso para Aterrizar concedido"<<endl;	
    getch();
    break;
	}
	
	else{ cout<<" ERROR: Opcion No Valida"<<endl;}
    	getch();
    	break;	
    	 	
}           
}
}
}
}
}



