#include <iostream>
#include <fstream>

//Alejandro Esteban Castro Mendoza 20110316
using namespace std;


int main()
{ 
ofstream fichout("EJEMPLO.TXT",ios::out); // crea y/o manda llamar Ejemplo.txt
if (!fichout)   //condicional 
cout << "\n Incapaz de crear este o abrir el fichero \n"; //Si no se puede crear el archivo aparece este mensaje
else {    //condicional

char nombre[10]; //variable para guardar el nombre con hasta 10 caracteres
	int registro, cal; //variable para el registro y para la calificaci�n

	cout<<endl<<"Nombre: "; //Pide tu nombre
	cin>>nombre; //Ingresas tu nombre 
	cout<<endl<<"Registro: ";  //Pide tu registro
	cin>>registro; //Ingresa tu registro
	cout<<endl<<"Calificacion: ";  //Pide tu calificacion
	cin>>cal; //Ingresas tu calificacion

fichout << 1 << "   " << 5.0 << " APROBADO" << endl;   // Usando FICHOUT se guarda la informacion en el archivo
fichout << 2 << "   " << 6.9 << " SUSPENSO" << endl;   //Usando FICHOUT se guarda la informacion en el archivo
fichout << 3 << "   " << 8.0 << " NOTABLE " << endl;    //Usando FICHOUT se guarda la informacion en el archivo

fichout << "Tu nombre es: "<<nombre << endl; //Usando el descriptor muestra el nombre ya antes ingresado
fichout << "Tu numero de registro es: " <<registro<< endl; //Con el FICHOUT muestra el registro antes ingresado
fichout << "Tu calificacion es: "  <<cal<<endl; //Con el FICHOUT muestra la calificion

fichout.close(); //Cierra el FICHOUT 
}
}  // Fin del main

