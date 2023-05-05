#include"class.h"
 	
using namespace std;
 
void menuAhorro(void);
void movimientos(void); 
void saldos(void); 
void retirar(int act, int ret); 
void depositar(int act, int dep);
void menuprincipal(void);
void menucuentas (void);
void menucorriente();
void ahorro(void);
void corriente(void); 
void login(void); //inicio de sesion ahorro
void registr(void); // registro ahorro
void forgot(void);
void registroCorriente(void);
void saldoCorriente();
void depositarCorriente(int act, int dep);
void movimientosCorriente();
void retirarcorriente(int act, int ret);
void logincorriente();
void transferenciasOtros(); //ahorro
void transferenciasEntreCuentasCorriente();
void transferenciasOtrosCorriente();
void transferenciasEntreCuentas();//ahorro
void facturaCorriente();//factura
void factura();

int main()
{

   //ofstream saldo_in;  //Servira para crear el block de notas con el saldo inicial
    //Constante del pin por defecto
   int saldo_act, retiro, deposito, op, choice;


   //llama a funcion menu principal
   
principal:
	menuprincipal();
	cout<< endl;
	cout<<"\nSeleccione la opcion que desea :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
        case 1:
                    menucuentas();
                    cout<< endl;
					cout<<"\nCual cuenta desea revisar:";
				        cin>>choice;
				        cout<<endl;
				        switch(choice)
				        {
				                case 1:
				                    ahorro();
				                    break;
				                case 2:
				                    corriente();
				                    break;
				                case 3:
				                    cout<<"Gracias por usar esta aplicacion.\nVuelva pronto.\n\n";
				                    break;
				                default:
				                    system("cls");
				                    cout<<"Has cometido un error, intenta nuevamente.\n"<<endl;
				                    return (main());
				        }
                    break;
                case 2:
                    menucuentas();
                    cout<< endl;
					cout<<"\nCual cuenta desea registrar:";
				        cin>>choice;
				        cout<<endl;
				        switch(choice)
				        {
				                case 1:
				                    registr();
				                    break;
				                case 2:
				                    registroCorriente();
				                    break;
				                case 3:
				                    cout<<"Gracias por usar esta aplicacion.\nVuelva pronto.\n\n";
				                    break;
				                default:
				                    system("cls");
				                    cout<<"Has cometido un error, intenta nuevamente.\n"<<endl;
				                    return (main());
				        };
                    break;
                case 3:
                    forgot();
                    break;
                case 4:
                    cout<<"Gracias por usar esta aplicacion.\nVuelva pronto.\n\n";
                    break;
                default:
                    system("cls");
                    cout<<"Has cometido un error, intenta nuevamente.\n"<<endl;
                    return(main());
        }

//llama a funcion a menu inicial de ahorro
	inicio:
		menuAhorro();
		cout << endl;
		cout << "Ingrese la operacion que desea realizar: ";
		cin >> op;
		
		switch (op)
		{
		case 1:
			saldos();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto inicio;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
		
		case 2:
			retirar(saldo_act, retiro);
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto inicio;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 3:
			depositar(saldo_act, deposito);
			do
			{
				
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
				system("cls"); 
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto inicio;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}			
		
		case 4:
			movimientos();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto inicio;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 5:
			transferenciasEntreCuentas();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto inicio;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 6:
			transferenciasOtros();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto inicio;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 7:
			cout << "Saliendo del programa..." <<endl;
			cout << "\nPROGRAMA FINALIZADO" << endl;
			goto principal;
		default:
			cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
			goto iniciocorriente;
		}
		
		getch();
			
	// llama a funcion al menu inicial de la cuenta corriente
	iniciocorriente:
		menucorriente();
		cout << endl;
		cout << "Ingrese la operacion que desea realizar: ";
		cin >> op;
		
		switch (op)
		{
		case 1:
			saldoCorriente();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto iniciocorriente;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
		
		case 2:
			retirarcorriente(saldo_act, retiro);
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto iniciocorriente;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 3:
			depositarCorriente(saldo_act, deposito);
			do
			{
				
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
				system("cls"); 
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto iniciocorriente;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}			
		
		case 4:
			movimientosCorriente();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto iniciocorriente;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 5:
			transferenciasEntreCuentasCorriente();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto iniciocorriente;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 6:
			transferenciasOtrosCorriente();
			do
			{
				cout << "Presione 1 para realizar otra operacion, Presiene 0 para salir: ";
				cin >> op;
			} while ((op != 1) && (op != 0));
		
			if (op == 1)
			{
				goto iniciocorriente;
			}
			if (op == 0)
			{
				cout << "Saliendo del programa..." << endl;
				cout << "\nPROGRAMA FINALIZADO" << endl;
				goto principal;
			}
			else
			{
				cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
				goto principal;
			}
			
			
		
		case 7:
			cout << "Saliendo del programa..." <<endl;
			cout << "\nPROGRAMA FINALIZADO" << endl;
			goto principal;
		default:
			cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
			goto iniciocorriente;
		}
		
	getch();		
}
