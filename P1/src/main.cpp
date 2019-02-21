#include <unistd.h>
#include <iostream>

#include "number.h"
#include "colores.hpp"
using namespace std;


// void animacion_inicio(void){

// 	//system("clear");

// 	int contador=1;
	
// 	do{	
	
// 		cout <<endl<<endl;
// 		cout<<FCYN("			CIFRADO Y DESCIFRADO:");
// 		cout<<endl;
// 		cout <<FYEL( "                     Kathrina Arrocha Umpiérrez") <<endl;
// 		cout <<FYEL( "                 Seguridad en sistemas informáticos") <<endl;
// 		sleep(3);
// 		system("clear");
		
	
// 		cout <<endl<<endl;
// 		cout<<FGRN("					CARGANDO.");
// 		cout<<endl;
// 		sleep(1);
// 		system("clear");
		
	
// 		cout <<endl<<endl;
// 		cout<<FGRN("					CARGANDO..");
// 		cout<<endl;
// 		sleep(1);
// 		system("clear");
		
// 		cout <<endl<<endl;
// 		cout<<FGRN("					CARGANDO...");
// 		cout<<endl;
//     	sleep(1);
// 		system("clear");
		
		
// 		contador++;
	
// 	}while(contador<=1);
// }

int main(){

// 	animacion_inicio();

    int num1;
    int num2;
    

	cout <<endl;
	cout << "	¡Bienvenido!"<< endl;
	cout << "	Introduzca el primer número: " <<endl; 
	cin >> num1;
    cout << "Crean el primer número..." <<endl;
    
    number<12,2> numero1(num1);
    numero1.write(cout);
    cout << endl;
    cout << endl;
      
    cout << "	Introduzca el segundo número: " <<endl; 
	cin >> num2;
    cout << "Crean el segundo número..." <<endl;
    
    number<12,2> numero2(num2);
    
    numero2.write(cout);
    
    number<12,2> numero3 = numero1.conversor(num2);
    cout << endl;
    

    
    int opcion = -1;
    while(opcion!=0){
   		
   			cout <<endl <<endl;
   			cout<< BOLD("        *********************** OPCIONES ************************") <<endl;
   			cout << "\t" << "*---------------------------------------------------------*" <<endl;
			cout << "\t" << "*----->	1. Sumar numero1 y numero2. -------------------*" <<endl;
            cout << "\t" << "*----->	2. Multiplicar numero1 y numero2. --------------*" <<endl;
            cout << "\t" << "*----->	3. Restar numero1 y numero2. -------------------*" <<endl;
            cout << "\t" << "*----->	4. Dividir numero1 y numero2. --------------*" <<endl;
            cout << "\t" << "*----->	5. Comparar si numero1 < numero2. --------------*" <<endl;
            cout << "\t" << "*----->	6. Comparar si numero1 > numero2. --------------*" <<endl;
			cout << "\t" << "*----->	7. Comparar si numero1 = numero2. --------------*" <<endl;
            cout << "\t" << "*----->	8. Comparar si numero1 != numero2. -------------*" <<endl;
			cout << "\t" << "*----->	0. Salir.---------------------------------------*" <<endl;
			
			cout << BOLD ( "	*-----> Introduce la opción deseada: -------------------*") <<endl;
			cout << "\t" << "*-------------------------------------------------------*" <<endl;
			cout << "\t" << "*********************************************************" <<endl <<endl;;
			cin >> opcion;
			
			
			number<12,2> resultado1;
			bool comparacion;
			
			
			switch (opcion){
				
				case 0:
				    opcion = 0;
					
				break;

				case 1:
					
					// Prueba de to_decimal:
					// cout << numero2.to_decimal() << endl;
					
					// cout << "El numero 2 es: " << numero2 <<endl;
				    resultado1 = numero1+numero3;
		        	
		        break;
		        
		        case 2:
				    resultado1= numero1*numero3;
			       
		        break;
		        
		        case 3:
		        	resultado1 = numero1-numero3;
			        
		        break;
		        
		         case 4:
		        	resultado1 = numero1/numero3;
			        
		        break;
		        
		        case 5:
		            comparacion = numero1 < numero3;
		            cout << endl;
				    cout << "¿Es cierto que numero1 < numero2? " << std::boolalpha << comparacion << endl;
			        cout << endl;
			        
		        break;
		        
		        case 6:
		        
		            comparacion = numero1 > numero3;
		            cout << endl;
				    cout << "¿Es cierto que numero1 > numero2? " << std::boolalpha << comparacion << endl;
			        cout << endl;
			        
		        break;
		        
		        case 7:
		            comparacion = numero1 == numero3;
		            cout << endl;
				    cout << "¿Es cierto que numero1 = numero2? " << std::boolalpha << comparacion << endl;
			        cout << endl;
			        
		        break;
		        
		        case 8:
		            comparacion = numero1 != numero3;
		            cout << endl;
				    cout << "¿Es cierto que numero1 != numero2? " << std::boolalpha << comparacion << endl;
			        cout << endl;
			        
		        break;
		        
		   
				default:
					cout <<endl << FRED("------> ERROR <------")<< " Opción incorrecta, saliendo del programa." << endl;
					opcion = 0;
				break;
					
			}
			resultado1.write(cout);
			
		}
		return 0;


	
}
	   		


// int main(int argc, char const *argv[])
// {  
//     number<6,2> numero(15);
//     numero.write(cout);
//     cout << endl;
    
//     number<6,2> numero2(15);
//     numero2.write(cout);
//     cout << endl;
    
//     number<6,2> numero6(63);
//     numero6.write(cout);
//     cout << endl;
    
//     number<6,2> numero7(2);
    
//     number<5,8> numero3(15);
//     numero3.write(cout);
//     cout << endl;
    
//     number<5,10> numero4(15);
//     numero4.write(cout);
//     cout << endl;
    
//     number<5,16> numero5(15);
//     numero5.write(cout);
//     cout << endl;
    
//     number<5,16> numero8(55);
//     numero8.write(cout);
//     cout << endl;
    

//     number<6,2> resultado = numero2.suma(numero);
//     resultado.write(cout);
//     cout <<endl;
    
//     number<6,2> resultado2 = numero2.suma(numero6);
//     resultado2.write(cout);
//     cout << endl;
    
//     number<6,2> resultado3 = numero2.suma(numero7);
//     resultado3.write(cout);
//     cout << endl;
    
//     // number<5,10> resultado4 = numero4.suma(numero5);
//     // resultado4.write(cout);
//     // cout << endl;
    
//     number<5,16> resultado5 = numero8.suma(numero5);
//     resultado5.write(cout);
//     cout << endl;
    
    
//     cout << "Multiplicando" << endl;
//     number<6,2> resultado6 = numero.multiplicacion(numero7);
//     resultado6.write(cout);
//     cout << endl <<"Acaba" << endl;
    
    
//     bool iguales = numero == numero2;
//     cout << std::boolalpha << iguales << endl;
    
//     iguales = numero == numero7;
//     cout << std::boolalpha << iguales << endl;
    
//     bool no_iguales = numero != numero7;
//     cout << std::boolalpha << no_iguales << endl;
    
//     bool menor_que = numero < numero7;
//     cout << std::boolalpha << menor_que << endl;
    
//     bool mayor_que = numero > numero7;
//     cout << std::boolalpha << mayor_que << endl;
    
//     mayor_que = numero > numero2;
//     cout << std::boolalpha << mayor_que << endl;
    
//     bool mayor_que2 = numero >= numero7;
//     cout << std::boolalpha << mayor_que2 << endl;
    
//     bool mayor_que3 = numero <= numero2;
//     cout << std::boolalpha << mayor_que3 << endl;
    
    
    
// }
