#include<iostream>
#include<cstdlib>
#include<ctime>
#include<wchar.h>
#include<stdlib.h>
//idk
#include<windows.h>
#include<mmsystem.h>
//para los dialogos
#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
float jugador=0;
float oponente=0;
class Dados{
	//atributos
	int dado1;
	int dado2;
	public:
	int caras1;
	int caras2;
	float valores;
	//acciones
	public:
	float LanzarDados(){
	cout << "los dados dieron: " << dado1 << " y " << dado2 << endl;
	dado1=(rand()%6)+1;
	dado2=(rand()%6)+1;
	valores=dado1+dado2;
	return valores;
	}
};
class Florence{
	int planta;
	int fantasma;
	public:
	int oponente1;
	int oponente2;
	int poderesnormales;
	int poderesespeciales;
	public:
	void nivel1(){
		switch(florence){
			case des1:
			break;
			case des2:
			break;
			case des3:
			break;
			case des4:
			break;
			case des5:
			break;
			case des6:
			break;
			case des7:
			break;
			case des8:
			break;
			case des9:
			break;
			case des10:
			break;
			default:
			break;
		}
	}
	void nivel2(){
		switch(florence2){
			case des11:
			break;
			case des12:
			break;
			case des13:
			break;
			case des14:
			break;
			case des15:
			break;
			case des16:
			break;
			case des17:
			break;
			case des18:
			break;
			case des19:
			break;
			case des20:
			break;
			default:
			break;
	}
	}
};
class Fraimus{
	int electrico;
	int lucha;
	public:
	int poderesnormales2;
	int poderesespeciales2;
	public:
	void nivelf1(){
		switch(fraimus){
			case desc1:
			break;
			case desc2:
			break;
			case desc3:
			break;
			case desc4:
			break;
			case desc5:
			break;
			case desc6:
			break;
			case desc7:
			break;
			case desc8:
			break;
			case desc9:
			break;
			case desc10:
			break;
			default:
			break;
		}
	void nivelf2(){
		switch(fraimus2){
			case desc11:
			break;
			case desc12:
			break;
			case desc13:
			break;
			case desc14:
			break;
			case desc15:
			break;
			case desc16:
			break;
			case desc17:
			break;
			case desc18:
			break;
			case desc19:
			break;
			case desc20:
			break;
			default:
			break;
	}
	}
};
class Chonchi{
	int fuego;
	int siniestro;
	int enemigo;
	public:
	int llamasarrasadoras;
	int engano;
	int quemaduradespiadada;
	int controlsombrio;
	int fuegoescalofriante;
	int malicia;
	int videncialuminosa;
	int huracandevastador;
	int perspicaciadaptativa;
	int tormentadeagonia;
	int mentefria;
	public:
	void nivelc1(){
	dialogos();
	cout<<"Ahora que has decidido continuar t?? camino junto a tu nueva compa??era, Chonchi; decides salir del casino caminando a la par. Notas que, efectivamente, Chonchi es una compa??era bastante peculiar; luce como que, si fueras a hablarle, pelear??a contigo sin raz??n alguna. A pesar de eso, se ve bastante misteriosa. "<<endl;
	esperar(2*1000);
	cin.get(); 
	cout<<"Caminas hasta llegar a un parque en el centro de la ciudad. Todos caminan sin prestarte atenci??n alguna, algunos tambi??n tienen compa??eros Pok??mon, otros no. Todo estaba tranquilo, no sab??as exactamente qu?? hacer ahora, ??Deber??as intentar presentarte a t?? Poke?"<<endl;
	esperar(2*1000);
	cin.get(); 
	cout<<"Sin embargo, te detienes al percatarte de que frente tuyo hay una entrenadora Pok??mon que luce bastante molesta. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"---As?? que aqu?? est??s, caminando tan tranquilamente luego de llevarte a un Pok??mon tan extra??o como ese. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"La miras con confusi??n, pues no sabes exactamente por qu?? luce tan molesta por eso. ??Acaso lo que hiciste fue algo malo?"<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"---No puedo simplemente ignorarlo, estuve intentando ganar a un Pok??mon de la especie de Chonchi, y sin embargo, t?? la conseguiste por suerte, ??Y en el primer intento! "<<endl;
	esperar(2*1000);
	cin.get();
	system("cls");
	cout<<"---??Crees que no lo not??? El hecho de que arreglaste la partida. No hay manera de que ese Pok??mon que recibiste fuera tan f??cil de obtener."<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"Decides hablar, para intentar explicarle que para nada arreglaste la partida. Realmente s?? ganaste a Chonchi por pura suerte. ??Qu?? le pasaba a esa entrenadora?; pero ella s??lo ignora tus ???excusas???, sigue diciendo que no hay manera de que hayas obtenido a Chonchi tan f??cilmente. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"Entonces, inesperadamente, te reta a una pelea; y te das cuenta de que no hay manera de poder escapar de ello, pues cuando un entrenador te reta a una pela, y escapas, nunca termina bien. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"Te resignas, aceptando la pelea. Crees que es la mejor opci??n, y cuando ves a Chonchi, ves en la expresi??n de su cara que tambi??n aprueba tu decisi??n. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"Ahora bien, est??s a punto de tener tu primera pelea junto a tu compa??era. Debes saber que hay instrucciones, son las siguientes: "<<endl;
	esperar(2*1000);
	cin.get();
	system("cls");
	cout<<"-	Primeramente, vas a lanzar los dados; cuando un entrenador te reta a una pelea, se lanzan primero los datos para determinar por suerte qui??n tendr?? la primera ventaja. Claro, debes saber que aunque tengas suerte, eso no te asegura ganar la pelea; todo depender?? de tus decisiones y tu astucia."<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"-	Si tu obtienes la ventaja gracias al juego de dados: tendr??s la oportunidad de usar dos habilidades especiales, y adem??s, podr??s atacar primero. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"-	Si tu oponente obtiene la ventaja, tendr??s que limitarte a utilizar s??lo habilidades normales, y t?? oponente atacar?? primero. "<<endl;
	esperar(2*1000);
	cin.get();
	cout<<"-	Independientemente de qui??n tenga suerte inicialmente, es importante que pienses bien en qu?? habilidades usar??s. Recuerda que todo depende de tus decisiones."<<endl;
	esperar(2*1000);
	cin.get();
	cout<<""<<endl;
	esperar(2*1000);
	cin.get();
	cout<<""<<endl;
	esperar(2*1000);
	cin.get();
	cout<<""<<endl;
	esperar(2*1000);
	cin.get();
		switch(chonchi){
			case desz1:
			
			break;
			case desz2:
			break;
			case desz3:
			break;
			case desz4:
			break;
			case desz5:
			break;
			case desz6:
			break;
			case desz7:
			break;
			case desz8:
			break;
			case desz9:
			break;
			case desz10:
			break;
			default:
			break;
		}
	void nivelc2(){
		switch(chonchi2){
			case desz11:
			break;
			case desz12:
			break;
			case desz13:
			break;
			case desz14:
			break;
			case desz15:
			break;
			case desz16:
			break;
			case desz17:
			break;
			case desz18:
			break;
			case desz19:
			break;
			case desz20:
			break;
			default:
			break;
	}
	}
};
void dialogos(){
	char*dialogue=cout;
    int i = 0, len = strlen(dialogue);
    while(i < len){
        cout << dialogue[i];
        Sleep(100);
        i++;
    }
}
int main(){
	dialogos();
	cout<<"{{- Presione la tecla ???Enter??? para ir pasando los di??logos y la historia. }}"<<endl;
	cin.get();
	cout<<"{{- Una parte del juego ser?? mediante el azar (lanzamiento de dados), y la otra parte ser?? mediante su elecci??n de decisiones (deber?? pensarlas bien para poder ganar). }}"<<endl;
	cin.get();
	cout<<"{{- A medida que avance la historia, se le explicar??n las dem??s instrucciones. }}"<<endl;
	cin.get();
	cout<<"{{- Presione ???Enter??? para comenzar. }}"<<endl;
	cin.get();
	Dados uwu;
	Florence jugador1;
	Fraimus jugador2;
	Chonchi jugador3;
	//dados
	uwu.LanzarDados();
	uwu.ComparacionValores();
	//personajes
	jugador1.poderesnormales=VentajaOponente(comparacion);
	jugador1.poderesespeciales=VentajaJugador(comparacion);
	jugador1.nivel1();
	jugador2.poderesnormales2=VentajaOponente(comparacion);
	jugador2.poderesespeciales2=VentajaJugador(comparacion);
	jugador2.nivelf1();
	jugador3.poderesnormales=VentajaOponente(comparacion);
	jugador3.poderesespeciales=VentajaJugador(comparacion);
	jugador3.nivelc1();
}