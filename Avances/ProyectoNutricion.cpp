#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
//variables globales que son requeridas en main y en “lectordearchivos”
string nombre;
int clienteOdoc;
int dia;
int mes;
int ano;
string otraDieta;
int numAleatorio;
int cantidadCalorias;

/*Esta función toma valores establecidos en cada función de rango de calorías y con el número aleatorio se abre el menú correspondiente
al rango de calorías, también imprime en consola el menú y también lo escribe en el archivo del usuario*/

void lectordearchivos(string cualcarpeta){
	string line;
	string cualmenu = to_string(numAleatorio);

ifstream miTXT (cualcarpeta + "/menu" + cualmenu + ".txt");
	if (miTXT.is_open()){
    	while (getline (miTXT, line)){
        	cout << line <<  '\n';
	ofstream myfile;
	myfile.open(nombre + ".txt", ios::app);
	myfile<<line<<'\n';
	myfile.close();
	ofstream myfile2;
	myfile2.open("solo_dieta.txt", ios::app);
	myfile2<<line<<'\n';
	myfile2.close();

    	}
	}
	if (miTXT.eof()){
    	cout<<"Fin del menu"<<"\n";
	}

	else{
    	cout<<"No se puede abrir el menu";
	}
	cout<<"\nTe parece esta dieta o quisieras cambiarla?"<<endl<<"     Responde 'si' o 'no'"<<endl;
	cin>>otraDieta;
	while(otraDieta != "si" && otraDieta != "no"){
    	cout<<"-Debes escribir 'si' o 'no'"<<endl;
    	cin>>otraDieta;
	}
	if(otraDieta == "no"){
    	cout<<"\nFue un gusto atenderte! Te esperamos en la proxima y con mejores resultados!"<<endl;
	}
	else if(otraDieta == "si"){
    	numAleatorio = 1 + rand() % (11 - 1);
    	ofstream myfile5;
    	myfile5.open(nombre + ".txt", ios::app);
    	myfile5 << "\n Alternativa de dieta seleccionada: \n"<<endl;
    	myfile5.close();
    	if(cantidadCalorias >= 1500 && cantidadCalorias < 2000){
        	lectordearchivos("1500a2000");
    	}
    	else if(cantidadCalorias >= 2000 && cantidadCalorias < 2500){
        	lectordearchivos("2000a2500");
    	}
    	else if(cantidadCalorias >= 2500 && cantidadCalorias < 3000){
        	lectordearchivos("2500a3000");
    	}
    	else if(cantidadCalorias >= 3000 && cantidadCalorias < 3500){
        	lectordearchivos("3000a3500");
    	}
    	else{
        	lectordearchivos("3500");
    	}
	}
}

int rango1500A2000(){
	lectordearchivos("1500a2000");
	return 0;
}

int rango2000A2500(){
	lectordearchivos("2000a2500");
	return 0;
}


int rango2500A3000(){
	lectordearchivos("2500a3000");
	return 0;
}


int rango3000A3500(){
	lectordearchivos("3000a3500");
	return 0;
}


int rango3500(){
	lectordearchivos("3500");
	return 0;
}


/*Esta función realiza operaciones para obtener el total de calorías recomendadas para posteriormente
llamar a las funciones de rango de calorías */
int usuarioImc(int imc, string decisioonEjercicio, int enfoquee,float pesoKg, float altura, int genero, int edad){
	float hacerLLegar;
	if(genero == 1){
    	cantidadCalorias=(10*pesoKg) + (6.25*altura) - (5*edad) - 161;
	}
	else if(genero == 2){
    	cantidadCalorias=(10*pesoKg) + (6.25*altura) - (5*edad) + 5;
	}
	if(decisioonEjercicio == "si"){
    	cantidadCalorias = cantidadCalorias + 500;
	}else{
    	cantidadCalorias = cantidadCalorias + 250;
	}
	if(enfoquee == 1){
    	if(decisioonEjercicio == "si"){
        	cantidadCalorias = cantidadCalorias -(cantidadCalorias*0.15);
    	}else{
        	cantidadCalorias = cantidadCalorias -(cantidadCalorias*0.20);
    	}
	}else if(enfoquee == 3){
    	if(decisioonEjercicio == "si"){
        	cantidadCalorias = cantidadCalorias*1.55;
    	}else{
        	cantidadCalorias = cantidadCalorias*1.2;
    	}
	}
	if(cantidadCalorias < 1500){
    	hacerLLegar = 1500 - cantidadCalorias;
    	cantidadCalorias = cantidadCalorias + hacerLLegar;
	}
	cout<<endl<<"----Tus calorias sugeridas son: "<<cantidadCalorias<<endl<<endl;
	cout<<"----El siguiente menu fue personalizado de acuerdo con tus calorias"<<endl<<endl;
	if(cantidadCalorias >= 1500 && cantidadCalorias < 2000){
        	rango1500A2000();
	}
	else if(cantidadCalorias >= 2000 && cantidadCalorias < 2500){
    	rango2000A2500();
	}
	else if(cantidadCalorias >= 2500 && cantidadCalorias < 3000){
    	rango2500A3000();
	}
	else if(cantidadCalorias >= 3000 && cantidadCalorias < 3500){
    	rango3000A3500();
	}
	else{
    	rango3500();
	}
	return 0;
}
/* En el main se asignan las variables principales que se van a utilizar en las demás funciones,
también es donde se crea el archivo principal en base a los datos del usuario que también es
utilizado en lectordearchivos y diferentes decisiones de acuerdo a las selecciones si es usuario nuevo, recurrente o doctor */
int main()
{
	string nombreDieta = "";
	string comidasDesayuno = "";
	string comidasMerienda1 = "";
	string comidasAlmuerzo = "";
	string comidasMerienda2 = "";
	string comidasCena = "";
	int decisionDoc;
	float pesolb, peso, altura, imc;
	srand(time(NULL));
	int cantidadCalorias = 0;
	int decisionUsuario;
	string decisionEjercicio;
	int enfoque;
	int genero;
	int edad;
	string antiguoUsuario;
	string line;
	string decisionObser;
	string observaciones = "";
	//string nombre;
	numAleatorio = 1 + rand() % (11 - 1);
	cout<<"          Bienvenido!   ";
cout<<"Eres doctor o paciente? (ingresa 1 para doctor y 2 para paciente)"<<endl;
	cin>>clienteOdoc;
	while(clienteOdoc != 1 && clienteOdoc != 2){
    	cout<<"(Ingresa 1 para doctor y 2 para paciente"<<endl;
    	cin>>clienteOdoc;
	}
	if(clienteOdoc == 1){
    	cout<<"Que deseas hacer?  (Ingresa accion segun numeral)"<<endl;
    	cout<<"   1) Ver historial de paciente"<<endl<<"   2) Escribir un nuevo menu"<<endl;
    	cin>>decisionDoc;
    	while(decisionDoc != 1 && decisionDoc != 2){
        	cout<<"----> Debes elegir una de las dos posibles acciones"<<endl;
        	cin>>decisionDoc;
    	}
    	if(decisionDoc == 1){
        	cout<<"Ingresa el nombre del paciente que quieres ver su historial: ";
        	cin>>nombre;
        	ifstream miTXT3 (nombre+ ".txt");
        	if (miTXT3.is_open()){
        	cout<<"el historial de "<<nombre<<" es: "<<endl;
        	while (getline (miTXT3, line)){
            	cout << line <<  '\n';
        	}
        	cout<<"\nDeseas agregar alguna observacion a este paciente?  (escriba 'si' o 'no')"<<endl;
        	cin>>decisionObser;
        	while(decisionObser != "si" && decisionObser != "no"){
            	cout<<"---> Ingresa 'si' o 'no'"<<endl;
            	cin>>decisionObser;
        	}
        	}
        	else{
            	cout<<"No se encontro un usuario con ese nombre. "<<endl<<endl;
        	}
        	if(decisionObser == "si"){
            	cout<<"----> Ingresa la observacion (no hay limite de caracteres)"<<endl;
            	cin>>observaciones;
            	getline(cin,observaciones);
            	ofstream miTXT4;
            	miTXT4.open(nombre + ".txt", ios::app);

            	miTXT4<<endl<<observaciones;
            	miTXT4.close();

        	}
    	}
    	else if(decisionDoc == 2){
        	cout<<"Cuantas calorias tendra el nuevo menu?"<<endl;
        	cin>>cantidadCalorias;
        	while(cantidadCalorias < 1500){
            	cout<<"Las dietas deben ser mayor a 1500 calorias"<<endl;
            	cin>>cantidadCalorias;
        	}
        	cout<<"Como se llamara el archivo donde se almacenara la nueva dieta?"<<endl;
        	cin>>nombreDieta;
        	getline(cin, nombreDieta);
        	cout<<"Ingresa las comidas del desayuno (separadas por guiones o comas)"<<endl;
        	cin>>comidasDesayuno;
        	getline(cin, comidasDesayuno);
        	cout<<"Ingresa las comidas de la merienda AM (separadas por guiones o comas)"<<endl;
        	cin>>comidasMerienda1;
        	getline(cin, comidasMerienda1);
        	cout<<"Ingresa las comidas del almuerzo (separadas por guiones o comas)"<<endl;
        	cin>>comidasAlmuerzo;
        	getline(cin, comidasAlmuerzo);
        	cout<<"Ingresa las comidas de la merienda PM (separadas por guiones o comas)"<<endl;
        	cin>>comidasMerienda2;
        	getline(cin, comidasMerienda2);
        	cout<<"Ingresa las comidas de la cena (separadas por guiones o comas)"<<endl;
        	cin>>comidasCena;
        	getline(cin, comidasCena);
        	if(cantidadCalorias >= 1500 && cantidadCalorias < 2000){
            	ofstream nuevaDieta("1500a2000/" + nombreDieta);
            	if(nuevaDieta.is_open()){
                	nuevaDieta<<"Desayuno"<<endl;
                	nuevaDieta<<comidasDesayuno<<endl;
                	nuevaDieta<<"Merienda AM"<<endl;
                	nuevaDieta<<comidasMerienda1<<endl;
                	nuevaDieta<<"Almuerzo"<<endl;
                	nuevaDieta<<comidasAlmuerzo<<endl;
                	nuevaDieta<<"Merienda PM"<<endl;
                	nuevaDieta<<comidasMerienda2<<endl;
                	nuevaDieta<<"Cena"<<endl;
                	nuevaDieta<<comidasCena<<endl;
            	}
        	}
        	else if(cantidadCalorias >= 2000 && cantidadCalorias < 2500){
            	ofstream nuevaDieta("2000a2500/" + nombreDieta);
            	if(nuevaDieta.is_open()){
            	nuevaDieta<<"Desayuno"<<endl;
            	nuevaDieta<<comidasDesayuno<<endl;
            	nuevaDieta<<"Merienda AM"<<endl;
            	nuevaDieta<<comidasMerienda1<<endl;
            	nuevaDieta<<"Almuerzo"<<endl;
            	nuevaDieta<<comidasAlmuerzo<<endl;
            	nuevaDieta<<"Merienda PM"<<endl;
            	nuevaDieta<<comidasMerienda2<<endl;
            	nuevaDieta<<"Cena"<<endl;
            	nuevaDieta<<comidasCena<<endl;
            	}
        	}
        	else if(cantidadCalorias >= 2500 && cantidadCalorias < 3000){
            	ofstream nuevaDieta("2500a3000/" + nombreDieta);
            	if(nuevaDieta.is_open()){
            	nuevaDieta<<"Desayuno"<<endl;
            	nuevaDieta<<comidasDesayuno<<endl;
            	nuevaDieta<<"Merienda AM"<<endl;
            	nuevaDieta<<comidasMerienda1<<endl;
            	nuevaDieta<<"Almuerzo"<<endl;
            	nuevaDieta<<comidasAlmuerzo<<endl;
            	nuevaDieta<<"Merienda PM"<<endl;
            	nuevaDieta<<comidasMerienda2<<endl;
            	nuevaDieta<<"Cena"<<endl;
            	nuevaDieta<<comidasCena<<endl;
            	}
        	}
        	else if(cantidadCalorias >= 3000 && cantidadCalorias < 3500){
            	ofstream nuevaDieta("3000a3500/" + nombreDieta);
            	if(nuevaDieta.is_open()){
            	nuevaDieta<<"Desayuno"<<endl;
            	nuevaDieta<<comidasDesayuno<<endl;
            	nuevaDieta<<"Merienda AM"<<endl;
            	nuevaDieta<<comidasMerienda1<<endl;
            	nuevaDieta<<"Almuerzo"<<endl;
            	nuevaDieta<<comidasAlmuerzo<<endl;
            	nuevaDieta<<"Merienda PM"<<endl;
            	nuevaDieta<<comidasMerienda2<<endl;
            	nuevaDieta<<"Cena"<<endl;
            	nuevaDieta<<comidasCena<<endl;
            	}
        	}

        	else if(cantidadCalorias >= 3500){
            	ofstream nuevaDieta("4000adelante/" + nombreDieta);
            	if(nuevaDieta.is_open()){
            	nuevaDieta<<"Desayuno"<<endl;
            	nuevaDieta<<comidasDesayuno<<endl;
            	nuevaDieta<<"Merienda AM"<<endl;
            	nuevaDieta<<comidasMerienda1<<endl;
            	nuevaDieta<<"Almuerzo"<<endl;
            	nuevaDieta<<comidasAlmuerzo<<endl;
            	nuevaDieta<<"Merienda PM"<<endl;
            	nuevaDieta<<comidasMerienda2<<endl;
            	nuevaDieta<<"Cena"<<endl;
            	nuevaDieta<<comidasCena<<endl;
            	}
        	}

    	}
	}
	else if(clienteOdoc == 2){
    	cout<<"Ingresa la fecha de ahora"<<endl<<"   Que dia es hoy? (Ingresa la fecha): ";
    	cin>>dia;
    	cout<<"   Ingresa el mes: ";
    	cin>>mes;
    	cout<<"   Ingresa el año: ";
    	cin>>ano;
    	cout<<"\n          Bienvenido a nuestra aplicacion de dietas! \nYa habias usado nuestra aplicacion antes? (si/no): ";
    	cin>>antiguoUsuario;
    	while(antiguoUsuario != "si" && antiguoUsuario != "no"){
        	cout<<"Ingresa 'si' o 'no'"<<endl;
        	cin>>antiguoUsuario;
    	}
    	if (antiguoUsuario == "si"){
        	cout<<"\nIngresa tu nombre. (El que utilizaste por primera vez)."<<endl;
        	cin>>nombre;
        	ifstream miTXT2 (nombre+ ".txt");
        	if (miTXT2.is_open()){
        	cout<<"\nTu historial de dietas es: "<<endl;
        	while (getline (miTXT2, line)){
            	cout << line <<  '\n';
        	}
cout<<endl<<"Nuevo control"<<endl<<endl;
        	cout<<"\nComo quieres obtener tu dieta?"<<endl;
        	cout<<"\n     1) Personalizado."<<endl;
        	cout<<"     2) Ingresando el numero de calorias que quieres consumir"<<endl;
        	cout<<"\nIngresa tu decision segun el numeral"<<endl;
        	cin>>decisionUsuario;
        	while(decisionUsuario == 0 || decisionUsuario > 2){
            	cout<<"Ingresa una opcion entre (1, 2): "<<endl;
            	cin>>decisionUsuario;
        	}
        	}
        	else{
            	cout<<"No se encontro un usuario con tu nombre. "<<endl<<endl;
        	}
        	if(decisionUsuario == 1){
            	cout<<"\nSelecciona tu genero: "<<endl<<"     1) Mujer "<<endl<<"     2) Hombre "<<endl<<"\nIngresa tu respuesta segun el numeral(1, 2): ";
            	cin>>genero;
            	while(genero > 2 || genero == 0){
                	cout<<"Ingresa tu respuesta segun el numeral (1 o 2): ";
                	cin>>genero;
            	}
            	cout<<"Ingresa tu edad: ";
            	cin>>edad;
            	while(edad == 0 || edad > 120){
                	cout<<"---> Sabemos que no tienes "<<edad<<", ingresa tu edad real: ";
                	cin>>edad;
            	}
            	cout<< "Ingresa tu peso en libras: ";
            	cin>>pesolb;
            	cout<< "Ingresa tu altura en metros: ";
            	cin>>altura;
            	while(altura > 3){
                	cout<<"----> Ingresa tu altura en metros! Si mides 180 cm por favor ingresa 1.8 metros: ";
                	cin>>altura;
            	}
            	altura = altura * 100;
            	peso=pesolb/2.2046;
            	imc=peso/(pow((altura/100), 2));
            	cout<<endl<<"\nHaces ejercicio?"<<endl;
            	cout<<"Responde (si,no): ";
            	cin>>decisionEjercicio;
            	while(decisionEjercicio != "si" && decisionEjercicio != "no"){
                	cout<<"---> La respuesta debe ser (si o no) y debe ser en minuscula"<<endl;
                	cin>>decisionEjercicio;
            	}
            	cout<<"\nCual es tu enfoque?"<<endl;
            	cout<<"     1) Adelgazar"<<endl<<"     2) Manterse"<<endl<<"     3) Aumentar"<<endl;
            	cout<<"\nIngresa tu respuesta segun el numeral(1,2,3): ";
            	cin>>enfoque;
            	while(enfoque == 0 || enfoque > 3){
                	cout<<"---> Debes elegir uno de los 3 posibles enfoques concorde a su numero!: ";
                	cin>>enfoque;
            	}
            	ofstream myfile;
            	myfile.open(nombre + ".txt", ios::app);
            	if(myfile.is_open()){
                	myfile<<"fecha: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
                	myfile<<'\n'<<'\n'<<"Nuevo control"<<'\n'<<'\n';
                	myfile.close();
            	}
            	usuarioImc(imc, decisionEjercicio, enfoque, peso, altura, genero, edad);
            	}
        	else if(decisionUsuario == 2){
        	cout<<"\nIngresa la cantidad de calorias que quieres consumir en el dia"<<endl;
        	cin>>cantidadCalorias;
        	while(cantidadCalorias < 1500){
            	cout<<"-Si consumes menos de 1500 calorias al dia puedes enfermarte!"<<endl<<"Ingresa un numero mayor o igual a 1500: "<<endl;
            	cin>>cantidadCalorias;
        	}
           	ofstream myNewFile2("solo_dieta.txt");
        	if (myNewFile2.is_open()){
            	myNewFile2<<"Hola, "<<nombre <<"."<<endl;
            	myNewFile2<< "Este es tu menu de acuerdo a la cantidad de calorias que escogiste: \n"<<endl;
        	}
        	if(cantidadCalorias >= 1500 && cantidadCalorias < 2000){
            	rango1500A2000();
        	}
        	else if(cantidadCalorias >= 2000 && cantidadCalorias < 2500){
            	rango2000A2500();
        	}
        	else if(cantidadCalorias >= 2500 && cantidadCalorias < 3000){
            	rango2500A3000();
        	}
        	else if(cantidadCalorias >= 3000 && cantidadCalorias < 3500){
            	rango3000A3500();
        	}

        	else if(cantidadCalorias >= 3500){
            	rango3500();
        	}
    	}
    	}
    	else if (antiguoUsuario== "no"){
	cout<<"\n          Hola! te encuentras con hambre?"<<endl;
	cout<<"\nEn este programa te daremos un menu con una dieta sugerida segun la cantidad de calorias diarias que deseas consumir"<<endl;
	cout<<"\nComo te llamas? "<<endl;
	cin>>nombre;
	cout<<"\nComo quieres obtener tu dieta?"<<endl;
	cout<<"\n     1) Personalizado."<<endl;
	cout<<"     2) Ingresando el numero de calorias que quieres consumir"<<endl;
	cout<<"\nIngresa tu decision segun el numeral: ";
	cin>>decisionUsuario;
	while(decisionUsuario == 0 || decisionUsuario > 2){
    	cout<<"Ingresa una opcion entre (1, 2): ";
    	cin>>decisionUsuario;
	}
	if(decisionUsuario == 1){
    	cout<<"\nSelecciona tu genero: "<<endl<<"     1) Mujer "<<endl<<"     2) Hombre "<<endl<<"Ingresa tu respuesta segun el numeral(1, 2): ";
    	cin>>genero;
    	while(genero > 2 || genero == 0){
        	cout<<"Ingresa tu respuesta segun el numeral (1 o 2): ";
        	cin>>genero;
    	}
    	cout<<"\nIngresa tu edad: ";
    	cin>>edad;
    	while(edad == 0 || edad > 120){
        	cout<<"---> Sabemos que no tienes "<<edad<<", ingresa tu edad real: ";
        	cin>>edad;
    	}
    	cout<< "Ingresa tu peso en libras: ";
    	cin>>pesolb;
    	cout<< "Ingresa tu altura en metros: ";
    	cin>>altura;
    	while(altura > 3){
        	cout<<"Ingresa tu altura en metros! Si mides 180 cm por favor ingresa 1.8 metros: ";
        	cin>>altura;
    	}
    	altura = altura * 100;
    	peso=pesolb/2.2046;
    	imc=peso/(pow((altura/100), 2));
    	cout<<endl<<"\nHaces ejercicio?"<<endl;
    	cout<<"Responde (si,no)"<<endl;
    	cin>>decisionEjercicio;
    	while(decisionEjercicio != "si" && decisionEjercicio != "no"){
        	cout<<"---> La respuesta debe ser (si o no) y debe ser en minuscula: ";
        	cin>>decisionEjercicio;
    	}
    	cout<<"\n¿Cual es tu enfoque?"<<endl;
    	cout<<"     1) Adelgazar"<<endl<<"     2) Manterse"<<endl<<"     3) Aumentar"<<endl;
    	cout<<"Ingresa tu respuesta segun el numeral(1,2,3): ";
    	cin>>enfoque;
    	while(enfoque == 0 || enfoque > 3){
        	cout<<"---> Debes elegir uno de los 3 posibles enfoques concorde a su numero!: ";
        	cin>>enfoque;
    	}
    	ofstream myNewFile(nombre + ".txt");
	if (myNewFile.is_open()){
        	if (decisionUsuario == 1){
    	myNewFile<<"fecha: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
    	myNewFile <<"Hola, " << nombre<< " tu edad es: "<< edad<<endl<< endl;
    	myNewFile << "Tu indice de masa corporal es: " << imc<< endl;
    	myNewFile << "Tu peso actual es de: "<< peso << " kilos"<< endl;
    	myNewFile << "De acuerdo a tu seleccion quieres: ";
    	if (enfoque == 1){
        	myNewFile << "adelgazar\n"<<endl;
    	}
    	else if (enfoque == 2){
        	myNewFile  <<"mantenerte\n"<<endl;
    	}
    	else if(enfoque == 3){
        	myNewFile <<"ganar peso\n"<<endl;
    	}
    	myNewFile <<"Tu dieta personalizada es: \n" <<endl;

	}
	}
    	usuarioImc(imc, decisionEjercicio, enfoque, peso, altura, genero, edad);
    	}
	else if(decisionUsuario == 2){
    	cout<<"Ingresa la cantidad de calorias que quieres consumir en el dia: ";
    	cin>>cantidadCalorias;
    	while(cantidadCalorias < 1500){
        	cout<<"Si consumes menos de 1500 calorias al dia puedes enfermarte!"<<endl<<"Ingresa un numero mayor o igual a 1500: "<<endl;
        	cin>>cantidadCalorias;
    	}
       	ofstream myNewFile2("solo_dieta.txt");
    	if (myNewFile2.is_open()){
        	myNewFile2<<"Hola, "<<nombre << ". \n"<<endl;
        	myNewFile2<< "Este es tu menu de acuerdo al rango de calorias que escogiste: \n"<<endl;
    	}
    	if(cantidadCalorias >= 1500 && cantidadCalorias < 2000){
        	rango1500A2000();
    	}else if(cantidadCalorias >= 2000 && cantidadCalorias < 2500){
        	rango2000A2500();
    	}else if(cantidadCalorias >= 2500 && cantidadCalorias < 3000){
        	rango2500A3000();
    	}else if(cantidadCalorias >= 3000 && cantidadCalorias < 3500){
        	rango3000A3500();
    	}else if(cantidadCalorias >= 3500){
        	rango3500();
    	}
	}
	}
	}
	return 0;

}
