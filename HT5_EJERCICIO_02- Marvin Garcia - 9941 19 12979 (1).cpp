#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>

using namespace std;


main(){
	
	int zona, num, tot, tot2;
	int cant1 = 350, cant2 = 130, cant3 = 50;
	int desc1 = 0.5, desc2 = 0.7, desc3 = 0.10;
	
	cout<<"\n\n\t\t --------------- COMPRA DE ENTRADAS ---------------\n\n"; 
	cout<<"\n\t\t    Zona   | \t Identificacion \t | \t Precio";
	cout<<"\n\t\t 1.  VIP   | \t       V        \t | \t Q.350";
	cout<<"\n\t\t 2. Platea | \t       P        \t | \t Q.130";
	cout<<"\n\t\t 3. Popular| \t       E        \t | \t Q.50";
	cout<<"\n\n\n\t\t Por favor elegir el tipo de entrada";
	cout<<"\n\n\t Zona: ";	cin>>zona;
	
		if(zona == 1){
			system("cls");
			cout<<"\n\n\t\tUsted eligio 'VIP' ";
			cout<<"\n\t\t Digite el numero de entradas que desee: "; cin>>num;
							
				if((num >= 3)&&(num<=6)){
					
					tot = num * cant1;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.5;
					cout<<"\n\n\t Usted tendra un descuento de 5% , su total a pagar es de: "<<tot2;
	
				}
				else if((num>=7)&&(num<=9)){
					
					tot = num * cant1;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.7;
					cout<<"\n\n\t Usted tendra un descuento de 7.5% , su total a pagar es de: "<<tot2;
						
				}else if(num>9){
					
					tot = num * cant1;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.10;
					cout<<"\n\n\t Usted tendra un descuento de 10% , su total a pagar es de: "<<tot2;
					
				}else{
					system("cls");
					cout<<"\n\n\n\t\t ----- DATO INCORRECTO O FUERA DE RANGO ----";
					Sleep(2000);
				}
				
		}
		else if(zona == 2){
			
			system("cls");
			cout<<"\n\n\t\tUsted eligio 'PLATEA' ";
			cout<<"\n\t\t Digite el numero de entradas que desee: "; cin>>num;
			
			if((num >= 3)&&(num<=6)){
					
					tot = num * cant2;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.5;
					cout<<"\n\n\t Usted tendra un descuento de 5% , su total a pagar es de: "<<tot2;
	
				}
				else if((num>=7)&&(num<=9)){
					
					tot = num * cant2;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.7;
					cout<<"\n\n\t Usted tendra un descuento de 7.5% , su total a pagar es de: "<<tot2;
						
				}else if(num>9){
					
					tot = num * cant2;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.10;
					cout<<"\n\n\t Usted tendra un descuento de 10% , su total a pagar es de: "<<tot2;
					
				}else{
					system("cls");
					cout<<"\n\n\n\t\t ----- DATO INCORRECTO O FUERA DE RANGO ----";
					Sleep(2000);
				}
			
		}
		else if(zona == 3){
			
			system("cls");
			cout<<"\n\n\t\tUsted eligio 'POPULAR' ";
			cout<<"\n\t\t Digite el numero de entradas que desee: "; cin>>num;
			
			if((num >= 3)&&(num<=6)){
					
					tot = num * cant3;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.5;
					cout<<"\n\n\t Usted tendra un descuento de 5% , su total a pagar es de: "<<tot2;
	
				}
				else if((num>=7)&&(num<=9)){
					
					tot = num * cant3;
			
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.7;
					cout<<"\n\n\t Usted tendra un descuento de 7.5% , su total a pagar es de: "<<tot2;
						
				}else if(num>9){
					
					tot = num * cant3;
		
					cout<<"\n\n\t\tSu total a pagar: "<<tot;
					
					tot2 = tot * 0.10;
					cout<<"\n\n\t Usted tendra un descuento de 10% , su total a pagar es de: "<<tot2;
					
				}else{
					system("cls");
					cout<<"\n\n\n\t\t ----- DATO INCORRECTO O FUERA DE RANGO ----";
					Sleep(2000);
				}
				
			
		}
		else{
			system("cls");
			cout<<"\n\n\n\t\t ----- DATO INCORRECTO O FUERA DE RANGO ----";
			Sleep(2000);
		}
	
	cout<<"";
	cout<<"";
	cout<<"";
	cout<<"";
	
	
	
	
getch();	
}
