#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <sstream>
#include<stdlib.h>

using namespace std;


class cajero{
    private:
    	void menuprincipal();
    	void menuAhorro();
		void menucorriente();
		void menucuentas();

    public:
    	int choice;
    	void login();
        void registr();
        void forgot();
		void saldos(void);
		void retirar(int act, int ret);
		void depositar(int act, int dep);
		void movimientos();
		void ahorro();
		void corriente();
		void registroCorriente();
		void saldoCorriente();
		void depositarCorriente(int act, int dep);
		void movimientosCorriente();
		void retirarcorriente(int act, int ret);
		void logincorriente();
		void transferenciasOtros();
		void transferenciasEntreCuentasCorriente();
		void transferenciasOtrosCorriente();
		void transferenciasEntreCuentas();
		void factura();
		void facturaCorriente();

};


