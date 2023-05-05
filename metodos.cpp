#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <sstream>
#include<stdlib.h>
#include"class.h"

using namespace std;
//AREA DE FUNCIONES/PROCEDIMIENTOS
void menuAhorro();
void saldos(void);
void retirar(int act, int ret);
void depositar(int act, int dep);
void movimientos(void);
void menuprincipal();
void menucuentas();
void ahorro();
void corriente();
void menucorriente();
void registroCorriente();
void saldoCorriente();
void depositarCorriente(int act, int dep);
void movimientosCorriente();
void retirarcorriente(int act, int ret);
void logincorriente();
void login();
void transferenciasOtros();
void transferenciasOtrosCorriente();
void transferenciasEntreCuentas();
void transferenciasEntreCuentasCorriente();
void factura();
void facturaCorriente();



//Procedimiento de menu seleccion de cuentas
void menucuentas()
{
	system("cls");
	cout<<"****************************************************************\n\n";
    cout<<"                 SELECCIONA TU TIPO DE CUENTA                  \n\n";
    cout<<"***************************************************************\n\n";
    cout<<"1.CUENTA AHORRO"<<endl;
    cout<<"2.CUENTA CORRIENTE"<<endl;
    cout<<"3.SALIR"<<endl;
}
//precedimiento cuentas ahorro
void ahorro()
{
   system("cls");
   login();
}
//procedimiento cuentas corrientes
void corriente()
{
   system("cls");
   logincorriente();
}


//Procedimiento de Menu principal
void menuprincipal()
{
	system("cls");
	cout<<"****************************************************************\n\n";
    cout<<"                         BIENVENIDO                            \n\n";
    cout<<"*******************        MENU        ************************\n\n";
    cout<<"1.INICIAR"<<endl;
    cout<<"2.REGISTRAR"<<endl;
    cout<<"3.USUARIO O CONTRASENA OLVIDADA"<<endl;
    cout<<"4.SALIR"<<endl;
}

void menuAhorro()
{
	system("cls");
	   cout<<"***************************************************************\n\n";
    	cout<<"                    CAJERO AUTOMATICO                          \n\n";
    	cout<<"*******************        MENU AHORRO      ************************\n\n";
	   cout << "1. Mostrar Saldo" << endl;
	   cout << "2. Realizar Retiro" << endl;
	   cout << "3. Realizar Deposito" << endl;
	   cout << "4. Mostrar los ultimos movimientos" << endl;
      cout << "5. Realizar transferencias a cuentas en el mismo banco" << endl; // pendiente
      cout << "6. Realizar transferencias a terceros" << endl; //pendiente
	   cout << "7. Salir" << endl;
}
// Procedimiento de INICIAR sesion cuenta ahorro
void login()
{
 
	  int count, saldo_act, retiro, deposito, op, choice;
        string user,pass,account,u,p,a;
        system("cls");
        cout<<"Por favor introduzca la siguiente informacion"<<endl;
        cout<<"Usuario: ";
        cin>>user;
        cout<<"Contrasena: ";
        cin>>pass;
        ifstream input("database.txt");
		while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
            cout<<"\nHola "<<user<<"\n<INICIADO EXITOSAMENTE>\nGracias por ingresar a nuestra plataforma\n";
            cin.get();
            cin.get();
                if(count==1){
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						case 7:
							cout << "Saliendo del programa..." <<endl;
							cout << "\nPROGRAMA FINALIZADO" << endl;
							break;
						default:
							cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
							goto inicio;
						}
						
					getch();
                	return;
					}
            
        }
        else
        {
                cout<<"\nERROR\nIntente Nuevamente. Por favor revise su usuario y  que su contrasena solo tenga 4 digitos\n";
                system("pause");
                login();
                return;
        }
}
//Procedimiento de Registro cuenta ahorro
void registr()
{
		
        string reguser,ru,rp,ra;
        int depositoinicial, regpass[4];
        
        system("cls");
        cout<<"\nIngrese su usuario: ";
        cin>>reguser;
        cout<<"\nIngrese su contrasena (4 digitos solo numeros): ";
        cin>>regpass[4];
		
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass[4]<<' '<<endl;
        fstream saldo_in("SaldoAhorro.txt", ios::in);
		   if (!saldo_in)
		   {
		      // no existe, crear uno nuevo
		      saldo_in.open("SaldoAhorro.txt", ios::app);
		      saldo_in << depositoinicial << endl;
		      saldo_in.close();
		   }
        
        system("cls");
        cout<<"\nRegistrado exitosamente\n";
        	login();
        
        return;


}

//1. Procedimiento Mostrar saldo cuienta ahorro
void saldos()
{
   ifstream leer;
   int saldo;

   leer.open("SaldoAhorro.txt", ios::in);
   leer >> saldo;
   leer.close();
   cout << "\nSALDO ACTUAL DISPONIBLE: $" << saldo << endl;
}

//2. Procedimiento Retiros cuenta ahorro
void retirar(int act, int ret)
{
   int saldo;
   ifstream leer;
   ofstream esc;
   int val;

   cout << "\nRETIROS A CUENTA";
   do
   {
      cout << "\nIngrese la cantidad que desea retirar: $";
      cin >> ret;
      if (ret % 100 == 0)
      {
         val = 1;
      }
      else
      {
         val = 0;
      }

      if ((val != 1) || (ret == 0))
      {
         cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE RETIRAR CANTIDADES MULTIPLO DE 100";
      }

      if (ret < 0)
      {
         cout << "\nCANTIDAD NO VALIDA, EL RETIRO NO PUEDE SER NEGATIVO";
      }

   } while ((val != 1) || (ret == 0) || (ret < 0));

   leer.open("SaldoAhorro.txt", ios::in);
   leer >> saldo;

   if (saldo >= ret)
   {
      act = saldo - ret;
      leer.close();

      esc.open("LogAhorro.txt", ios::app);
      esc << ' ' << "\t"
          << "Retiro:   $" << ret << endl;
      esc.close();
      esc.open("SaldoAhorro.txt", ios::trunc);
      esc << act;
      esc.close();

      cout << "\nRETIRO REALIZADO CON EXITO\n";
   }
   else
   {
      cout << "\nNO SE PUEDE RETIRAR PORQUE EL SALDO ES INSUFICIENTE\n";
   }
}
//Procedimiento Ayuda para recuperacion del usuario o clave
void forgot()
{
        int ch;
        system("cls");
        cout<<"ESTAMOS PARA AYUDARTE!\n";
        cout<<"1.BUSCAR TU ID SEGUN TU USUARIO"<<endl;
        cout<<"2.BUSCAR TU ID SEGUN TU CLAVE"<<endl;
        cout<<"3.MENU"<<endl;
        cout<<"ELIGE TU SELECCION :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nIngresa el usuario que recuerdes: ";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nFelicidades, cuenta encontrada.\n";
                                cout<<"\nTu usuario es: "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                return;
                        }
                        else
                        {
                                cout<<"\nLo Sentimos. Tu ID no ha sido encontrada en nuestros archivos.\n";
                                cout<<"\nPor favor, dirigirse a la taquilla para mayor informacion.\n";
                                cin.get();
                                cin.get();
                                return;
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nINGRESA LA CONTRASENA QUE RECUERDES :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nTu contrasena ha sido encontrada en nuestros archivos. \n";
                                cout<<"\nTu contrasena es: "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                return;
                        }
                        else
                        {
                                cout<<"Lo sentimos, tu contrasena no ha sido encontrada en nuestros archivos.\n";
                                cout<<"\nPor favor, dirigirse a la taquilla para mayor informacion.\n";
                                cin.get();
                                cin.get();
                                return;
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        return;
                }
                default:
                        cout<<"Los sentimos, opcion incorrecta. Intenta nuevamente."<<endl;
                        forgot();
        }
}

//3. Procedimiento Deposito cuenta ahorro
void depositar(int act, int dep)
{
   int saldo;
   ifstream leer;
   ofstream esc;
   int val;

   cout << "\nDEPOSITOS A CUENTA";
   do
   {
      cout << "\nIngrese la cantidad que desea depositar: $";
      cin >> dep;
      if (dep % 100 == 0)
      {
         val = 1;
      }
      else
      {
         val = 0;
      }

      if ((val != 1) || (dep == 0))
      {
         cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE DEPOSITAR CANTIDADES MULTIPLO DE 100";
      }

      if (dep < 0)
      {
         cout << "\nCANTIDAD NO VALIDA, EL DEPOSITO NO PUEDE SER NEGATIVO";
      }

   } while ((val != 1) || (dep == 0) || (dep < 0));

   leer.open("SaldoAhorro.txt", ios::in);
   leer >> saldo;
   act = saldo + dep;
   leer.close();


   esc.open("LogAhorro.txt", ios::app);
   esc << ' ' <<"\t"<<"Deposito: $" << dep << endl;
   esc.close();
   esc.open("SaldoAhorro.txt", ios::trunc);
   esc << act;
   esc.close();

   cout << "\nDEPOSITO REALIZADO CON EXITO\n";
}

//4. Procedimiento Mostrar ultimos movimientos cuenta ahorro
void movimientos()
{
   fstream leer;
   int cont = 0, aux;
   char texto[100];

   leer.open("LogAhorro.txt", ios::in);
   if (leer.fail())
   {
      cout << "NO EXISTEN MOVIMIENTOS PARA MOSTRAR...\n"
           << endl;
   }
   else
   {
      cout << "\nIMPRIMIENTO LOS ULTIMOS MOVIMIENTOS..." << endl;
      while (!leer.eof())
      {
         leer.getline(texto, 100);
         cont++;
      }
      aux = cont - 100; //auxiliar es la cantidad de lineas que debe omitir cont-5
      cont = 0;
      leer.close();

      leer.open("LogAhorro.txt", ios::in);
      while (!leer.eof())
      {
         leer.getline(texto, 100);
         cont++;
         if (cont >= aux) //hasta que contador sea mayor a las lineas a omitir, imprime las lineas
         {
            cout << texto << endl;
         }
      }
      leer.close();
   }
}

//Proceso de tranferencias a terceros cuenta ahorro
void transferenciasOtros()

{
	system("cls");
		int act, ret;
		int saldo, cuenta;
		ifstream leer;
		ofstream esc;
      string rspta1;
      double comision;
		int val;

		cout << "Esta usted apunto de hacer una transferencia bancaria, esta usted seguro?" << endl;
		cin >> rspta1;

 
		if (rspta1 == "Si" || rspta1 == "sI" || rspta1 == "SI" || rspta1 == "si")
      {
			do
   			{
			cout << "Ingrese el numero de cuenta al cual desea hacer la transferencia" << endl;
			cin >> cuenta;
			cout << "\nIngrese la cantidad que desea retirar: $";
			cin >> ret;
			if (ret % 100 == 0)
			{
				val = 1;
			}
			else
			{
				val = 0;
			}

			if ((val != 1) || (ret == 0))
			{
				cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE REALIZAR TRANSFERENCIAS DE CANTIDADES MULTIPLO DE 100";
			}

			if (ret < 0)
			{
				cout << "\nCANTIDAD NO VALIDA, LA TRANSFERENCIA NO PUEDE SER NEGATIVO";
			}

			} while ((val != 1) || (ret == 0) || (ret < 0));

			leer.open("SaldoAhorro.txt", ios::in);
			leer >> saldo;
			comision = ret * 0.05;

			if (saldo >= ret)
			{
			act = saldo - ret - comision;
			leer.close();

			esc.open("LogAhorro.txt", ios::app);
			esc << ' ' << "\t"
				<< "Transferencia a otros bancos:   $" << ret << endl;
			esc.close();
			esc.open("SaldoAhorro.txt", ios::trunc);
			esc << act;
			esc.close();

			cout << "\nRETIRO REALIZADO CON EXITO\n";
         factura();
			}
			else
			{
			cout << "\nNO SE PUEDE RETIRAR PORQUE EL SALDO ES INSUFICIENTE\n";
			}
      }
	  else if (rspta1 == "no" || rspta1 == "NO" || rspta1 == "nO" || rspta1 == "No")
	  		{
				cout << "Deacuerdo, usted sera redireccionado al menu principal" << endl;
				system("pause");
				system("cls");
				return ;
			}
}


//Proceso de tranferencias entre ceunta ahorro a cuenta corriente
void transferenciasEntreCuentas()

{
	system("cls");
		int act, ret;
		int saldo;
		ifstream leer;
		ofstream esc;
        string rspta1;
		int val;

		cout << "Esta usted apunto de hacer una transferencia bancaria a su cuenta ahorro, esta usted seguro?" << endl;
		cin >> rspta1;

 
		if (rspta1 == "Si" || rspta1 == "sI" || rspta1 == "SI" || rspta1 == "si")
      {
			do
   			{
			cout << "\nIngrese la cantidad que desea enviar a su cuenta corriente: $";
			cin >> ret;
			if (ret % 100 == 0)
			{
				val = 1;
			}
			else
			{
				val = 0;
			}

			if ((val != 1) || (ret == 0))
			{
				cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE REALIZAR TRANSFERENCIAS DE CANTIDADES MULTIPLO DE 100";
			}

			if (ret < 0)
			{
				cout << "\nCANTIDAD NO VALIDA, LA TRANSFERENCIA NO PUEDE SER NEGATIVO";
			}

			} while ((val != 1) || (ret == 0) || (ret < 0));
			
			leer.open("SaldoAhorro.txt", ios::in);
			leer >> saldo;

			if (saldo >= ret)
			{
			act = saldo - ret;
			leer.close();

			esc.open("LogAhorro.txt", ios::app);
			esc << ' ' << "\t"
				<< "Transferencia a cuenta propia:   $" << ret << endl;
			esc.close();
			esc.open("SaldoAhorro.txt", ios::trunc);
			esc << act;
			esc.close();
			
			leer.open("SaldoCorriente.txt", ios::in);
			leer >> saldo;
			act = saldo + ret;
			leer.close();
			
			
			esc.open("LogCorriente.txt", ios::app);
			esc << ' ' <<"\t"<<"Transferencia de cuenta propia: $" << saldo << endl;
			esc.close();
			esc.open("SaldoCorriente.txt", ios::trunc);
			esc << act;
			esc.close();

			cout << "\nTRANSFERENCIA REALIZADA CON EXITO\n";
         factura();
			}
			else
			{
			cout << "\nNO SE PUEDE RETIRAR PORQUE EL SALDO ES INSUFICIENTE\n";
			}
      	}
	  	else if (rspta1 == "no" || rspta1 == "NO" || rspta1 == "nO" || rspta1 == "No")
	  		{
				cout << "Deacuerdo, usted sera redireccionado al menu principal" << endl;
				system("pause");
				system("cls");
				return ;
			}
}


//Factura de movimientos de ahorro 
void factura()
{
   system("cls");
	
      fstream leer;
      int cont = 0, aux;
      char texto[100];
      string rspta1;

		cout << "Desea usted una factura de ultimos movimientos?" << endl;
		cin >> rspta1;

		if (rspta1 == "Si" || rspta1 == "sI" || rspta1 == "SI" || rspta1 == "si")
      {
         
         leer.open("LogAhorro.txt", ios::in);
         if (leer.fail())
         {
            cout << "NO EXISTEN MOVIMIENTOS PARA MOSTRAR...\n"
               << endl;
         }
         else
         {
            cout << "\nIMPRIMIENTO SU FACTURA" << endl;
            while (!leer.eof())
            {
               leer.getline(texto, 100);
               cont++;
            }
            aux = cont - 100; //auxiliar es la cantidad de lineas que debe omitir cont-5
            cont = 0;
            leer.close();

            leer.open("LogAhorro.txt", ios::in);
            while (!leer.eof())
            {
               leer.getline(texto, 100);
               cont++;
               if (cont >= aux) //hasta que contador sea mayor a las lineas a omitir, imprime las lineas
               {
                  cout << texto << endl;
               }
            }
            leer.close();
         }
      }
	  	else if (rspta1 == "no" || rspta1 == "NO" || rspta1 == "nO" || rspta1 == "No")
	  		{
				cout << "Deacuerdo, usted sera redireccionado al menu principal" << endl;
				system("pause");
				system("cls");
				return ;
			}
}


/// procedimientos cuenta corriente************************************************************************
///*******************************************************************************************************

//Iniciar secion de la Cuenta corriente
void logincorriente()
{
 
	  int count, saldo_act, retiro, deposito, op, choice;
        string user,pass,account,u,p,a;
        system("cls");
        cout<<"Por favor introduzca la siguiente informacion"<<endl;
        cout<<"Usuario: ";
        cin>>user;
        cout<<"Contrasena: ";
        cin>>pass;
        ifstream input("databaseCorriente.txt");
		while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
            cout<<"\nHola "<<user<<"\n<INICIADO EXITOSAMENTE>\nGracias por ingresar a nuestra plataforma\n";
            cin.get();
            cin.get();
                if(count==1){
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						
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
							}
							break;
						case 7:
							cout << "Saliendo del programa..." <<endl;
							cout << "\nPROGRAMA FINALIZADO" << endl;
							break;
						default:
							cout << "OPCION INVALIDA, SELECCIONE UNA OPCION CORRECTA" << endl;
							goto iniciocorriente;
						}
						
					getch();
                	return;
					}
            
        }
        else
        {
                cout<<"\nERROR\nIntente Nuevamente. Por favor revise su usuario y  que su contrasena solo tenga 4 digitos\n";
                system("pause");
                logincorriente();
                return;
        }
}
// Menu interno de la cuenta Corriente
void menucorriente()
{
	system("cls");
		cout<<"***************************************************************\n\n";
    	cout<<"                  CAJERO AUTOMATICO                          \n\n";
    	cout<<"******************* MENU CORRIENTE   ************************\n\n";
		cout << "1. Mostrar Saldo1" << endl;
		cout << "2. Realizar Retiro" << endl;
		cout << "3. Realizar Deposito" << endl;
		cout << "4. Mostrar los ultimos movimientos" << endl;
    	cout << "5. Realizar transferencias a cuentas en el mismo banco" << endl; // pendiente
    	cout << "6. Realizar transferencias a terceros" << endl; //pendiente
		cout << "7. Salir" << endl;
}
//Procedimiento de Registro para la base de datos cuenta corriente 

void registroCorriente()
{
		
        string reguser,ru,rp,ra;
        int depositoinicial, regpass[4];
        
        system("cls");
        cout<<"\nIngrese su usuario: ";
        cin>>reguser;
        cout<<"\nIngrese su contrasena (4 digitos solo numeros): ";
        cin>>regpass[4];
        
		
        ofstream reg("databaseCorriente.txt",ios::app);
        reg<<reguser<<' '<<regpass[4]<<' '<<endl;
        fstream saldo_in("SaldoCorriente.txt", ios::in);
		   if (!saldo_in)
		   {
		      // no existe, crear uno nuevo
		      saldo_in.open("SaldoCorriente.txt", ios::app);
		      saldo_in << depositoinicial << endl;
		      saldo_in.close();
		   }
        
        system("cls");
        cout<<"\nRegistrado exitosamente\n";
        	logincorriente();
        
        return;
}

//1. Procedimiento Mostrar saldo cuenta Corriente
void saldoCorriente()
{
   ifstream leer;
   int saldo;

   leer.open("SaldoCorriente.txt", ios::in);
   leer >> saldo;
   leer.close();
   cout << "\nSALDO ACTUAL DISPONIBLE: $" << saldo << endl;
}

//2. Procedimiento de Retiro de la cuenta Corriente
void retirarcorriente(int act, int ret)
{
   int saldo;
   ifstream leer;
   ofstream esc;
   int val;

   cout << "\nRETIROS A CUENTA";
   do
   {
      cout << "\nIngrese la cantidad que desea retirar: $";
      cin >> ret;
      if (ret % 100 == 0)
      {
         val = 1;
      }
      else
      {
         val = 0;
      }

      if ((val != 1) || (ret == 0))
      {
         cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE RETIRAR CANTIDADES MULTIPLO DE 100";
      }

      if (ret < 0)
      {
         cout << "\nCANTIDAD NO VALIDA, EL RETIRO NO PUEDE SER NEGATIVO";
      }

   } while ((val != 1) || (ret == 0) || (ret < 0));

   leer.open("SaldoCorriente.txt", ios::in);
   leer >> saldo;

   if (saldo >= ret)
   {
      act = saldo - ret;
      leer.close();

      esc.open("LogCorriente.txt", ios::app);
      esc << ' ' << "\t"
          << "Retiro:   $" << ret << endl;
      esc.close();
      esc.open("SaldoCorriente.txt", ios::trunc);
      esc << act;
      esc.close();

      cout << "\nRETIRO REALIZADO CON EXITO\n";
   }
   else
   {
      cout << "\nNO SE PUEDE RETIRAR PORQUE EL SALDO ES INSUFICIENTE\n";
   }
}
//3. Procedimiento Deposito cuenta Corriente
void depositarCorriente(int act, int dep)
{
   int saldo;
   ifstream leer;
   ofstream esc;
   int val;

   cout << "\nDEPOSITOS A CUENTA";
   do
   {
      cout << "\nIngrese la cantidad que desea depositar: $";
      cin >> dep;
      if (dep % 100 == 0)
      {
         val = 1;
      }
      else
      {
         val = 0;
      }

      if ((val != 1) || (dep == 0))
      {
         cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE DEPOSITAR CANTIDADES MULTIPLO DE 100";
      }

      if (dep < 0)
      {
         cout << "\nCANTIDAD NO VALIDA, EL DEPOSITO NO PUEDE SER NEGATIVO";
      }

   } while ((val != 1) || (dep == 0) || (dep < 0));

   leer.open("SaldoCorriente.txt", ios::in);
   leer >> saldo;
   act = saldo + dep;
   leer.close();


   esc.open("LogCorriente.txt", ios::app);
   esc << ' ' <<"\t"<<"Deposito: $" << dep << endl;
   esc.close();
   esc.open("SaldoCorriente.txt", ios::trunc);
   esc << act;
   esc.close();

   cout << "\nDEPOSITO REALIZADO CON EXITO\n";
}

//4. Procedimiento Mostrar ultimos movimientos de la cuenta corriente
void movimientosCorriente()
{
   fstream leer;
   int cont = 0, aux;
   char texto[100];

   leer.open("LogCorriente.txt", ios::in);
   if (leer.fail())
   {
      cout << "NO EXISTEN MOVIMIENTOS PARA MOSTRAR...\n"
           << endl;
   }
   else
   {
      cout << "\nIMPRIMIENTO LOS ULTIMOS MOVIMIENTOS..." << endl;
      while (!leer.eof())
      {
         leer.getline(texto, 100);
         cont++;
      }
      aux = cont - 100; //auxiliar es la cantidad de lineas que debe omitir cont-5
      cont = 0;
      leer.close();

      leer.open("LogCorriente.txt", ios::in);
      while (!leer.eof())
      {
         leer.getline(texto, 100);
         cont++;
         if (cont >= aux) //hasta que contador sea mayor a las lineas a omitir, imprime las lineas
         {
            cout << texto << endl;
         }
      }
      leer.close();
   }
}

//Proceso de tranferencias a terceros desde la cuenta corriente
void transferenciasOtrosCorriente()
{
	system("cls");
		int act, ret;
		int saldo, cuenta;
		ifstream leer;
		ofstream esc;
      string rspta1;
      double comision;
		int val;

		cout << "Esta usted apunto de hacer una transferencia bancaria, esta usted seguro?" << endl;
		cin >> rspta1;

 
		if (rspta1 == "Si" || rspta1 == "sI" || rspta1 == "SI" || rspta1 == "si")
      {
			do
   			{
			cout << "Ingrese el numero de cuenta al cual desea hacer la transferencia" << endl;
			cin >> cuenta;
			cout << "\nIngrese la cantidad que desea retirar: $";
			cin >> ret;
			if (ret % 100 == 0)
			{
				val = 1;
			}
			else
			{
				val = 0;
			}

			if ((val != 1) || (ret == 0))
			{
				cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE REALIZAR TRANSFERENCIAS DE CANTIDADES MULTIPLO DE 100";
			}

			if (ret < 0)
			{
				cout << "\nCANTIDAD NO VALIDA, LA TRANSFERENCIA NO PUEDE SER NEGATIVO";
			}

			} while ((val != 1) || (ret == 0) || (ret < 0));

			leer.open("SaldoCorriente.txt", ios::in);
			leer >> saldo;
			comision = ret * 0.05;

			if (saldo >= ret)
			{
			act = saldo - ret - comision;
			leer.close();

			esc.open("LogCorriente.txt", ios::app);
			esc << ' ' << "\t"
				<< "Transferencia a otros bancos:   $" << ret << endl;
			esc.close();
			esc.open("SaldoCorriente.txt", ios::trunc);
			esc << act;
			esc.close();

			cout << "\nRETIRO REALIZADO CON EXITO\n";
         facturaCorriente();
			}
			else
			{
			cout << "\nNO SE PUEDE RETIRAR PORQUE EL SALDO ES INSUFICIENTE\n";
			}
      }
	  else if (rspta1 == "no" || rspta1 == "NO" || rspta1 == "nO" || rspta1 == "No")
	  		{
				cout << "Deacuerdo, usted sera redireccionado al menu principal" << endl;
				system("pause");
				system("cls");
				return ;
			}
}



//Proceso de tranferencias entre ceunta corriente a cuenta ahorro
void transferenciasEntreCuentasCorriente()

{
	system("cls");
		int act, ret;
		int saldo;
		ifstream leer;
		ofstream esc;
        string rspta1;
		int val;

		cout << "Esta usted apunto de hacer una transferencia bancaria a su cuenta ahorro, esta usted seguro?" << endl;
		cin >> rspta1;

 
		if (rspta1 == "Si" || rspta1 == "sI" || rspta1 == "SI" || rspta1 == "si")
      {
			do
   			{
			cout << "\nIngrese la cantidad que desea enviar a su cuenta ahorro: $";
			cin >> ret;
			if (ret % 100 == 0)
			{
				val = 1;
			}
			else
			{
				val = 0;
			}

			if ((val != 1) || (ret == 0))
			{
				cout << "\nCANTIDAD NO VALIDA, SOLO PUEDE REALIZAR TRANSFERENCIAS DE CANTIDADES MULTIPLO DE 100";
			}

			if (ret < 0)
			{
				cout << "\nCANTIDAD NO VALIDA, LA TRANSFERENCIA NO PUEDE SER NEGATIVO";
			}

			} while ((val != 1) || (ret == 0) || (ret < 0));
			
			leer.open("SaldoCorriente.txt", ios::in);
			leer >> saldo;

			if (saldo >= ret)
			{
			act = saldo - ret;
			leer.close();

			esc.open("LogCorriente.txt", ios::app);
			esc << ' ' << "\t"
				<< "Transferencia a cuenta propia:   $" << ret << endl;
			esc.close();
			esc.open("SaldoCorriente.txt", ios::trunc);
			esc << act;
			esc.close();
			
			leer.open("SaldoAhorro.txt", ios::in);
			leer >> saldo;
			act = saldo + ret;
			leer.close();
			
			
			esc.open("LogAhorro.txt", ios::app);
			esc << ' ' <<"\t"<<"Transferencia de cuenta propia: $" << saldo << endl;
			esc.close();
			esc.open("SaldoAhorro.txt", ios::trunc);
			esc << act;
			esc.close();

			cout << "\nTRANSFERENCIA REALIZADA CON EXITO\n";
         facturaCorriente();
			}
			else
			{
			cout << "\nNO SE PUEDE RETIRAR PORQUE EL SALDO ES INSUFICIENTE\n";
			}
      	}
	  	else if (rspta1 == "no" || rspta1 == "NO" || rspta1 == "nO" || rspta1 == "No")
	  		{
				cout << "Deacuerdo, usted sera redireccionado al menu principal" << endl;
				system("pause");
				system("cls");
				return ;
			}
		}


//Factura de movimientos corriente
void facturaCorriente()
{
   system("cls");
	
      fstream leer;
      int cont = 0, aux;
      char texto[100];
      string rspta1;

		cout << "Desea usted una factura de ultimos movimientos?" << endl;
		cin >> rspta1;

		if (rspta1 == "Si" || rspta1 == "sI" || rspta1 == "SI" || rspta1 == "si")
      {
         
         leer.open("LogAhorro.txt", ios::in);
         if (leer.fail())
         {
            cout << "NO EXISTEN MOVIMIENTOS PARA MOSTRAR...\n"
               << endl;
         }
         else
         {
            cout << "\nIMPRIMIENTO SU FACTURA" << endl;
            while (!leer.eof())
            {
               leer.getline(texto, 100);
               cont++;
            }
            aux = cont - 100; //auxiliar es la cantidad de lineas que debe omitir cont-5
            cont = 0;
            leer.close();

            leer.open("LogAhorro.txt", ios::in);
            while (!leer.eof())
            {
               leer.getline(texto, 100);
               cont++;
               if (cont >= aux) //hasta que contador sea mayor a las lineas a omitir, imprime las lineas
               {
                  cout << texto << endl;
               }
            }
            leer.close();
         }
      }
	  	else if (rspta1 == "no" || rspta1 == "NO" || rspta1 == "nO" || rspta1 == "No")
	  		{
				cout << "Deacuerdo, usted sera redireccionado al menu principal" << endl;
				system("pause");
				system("cls");
				return ;
			}
}



