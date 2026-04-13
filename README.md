
SECCION I — Preguntas Te´oricas (4 puntos) ´
Responde en el README. Cada pregunta vale 0.67 puntos.
1. ¿Que valor imprime el siguiente c´odigo?
1 void modificar ( int x ) {
2 x = 100;
3 }
4 int main () {
5 int num = 50;
6 modificar ( num ) ;
7 cout << num << endl ;
8 }
b) 50 

2. ¿Que valor imprime el siguiente c´odigo?
1 void modificar ( int& x ) {
2 x = 100;
3 }
4 int main () {
5 int num = 50;
6 modificar ( num ) ;
7 cout << num << endl ;
8 }

b) 50.


3. ¿Que valor imprime el siguiente c´odigo?
1 void modificar ( int* x ) {
2 * x = 100;
3 }
4 int main () {
5 int num = 50;
6 modificar (& num ) ;
7 cout << num << endl ;
8 }
b) 50.



4. Dado el siguiente codigo, ¿que representa *ptr?
1 int valor = 25;
2 int * ptr = & valor ;
3 cout << * ptr << endl ;

b) El valor almacenado en valor
(25)


5. ¿Cual es la diferencia entre llamar una funcion con referencia vs. con puntero?
c) Con referencia: funcion(&variable). Con puntero: funcion(variable)


6. ¿Que imprime el siguiente codigo?
1 void intercambiar ( int& a , int& b ) {
2 int temp = a ;
3 a = b ;
4 b = temp ;
5 }
6 int main () {
7 int x = 10 , y = 20;
8 intercambiar (x , y ) ;
9 cout << x << " " << y << endl ;
10 }

b) 20 10 
