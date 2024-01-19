#include <iostream>
using namespace std;
int main ()    /* la funcion main inicia la ejecucion del programa */
{
int opcion;    /* Le coloco una variable para que escoja le opcion del menu */

cout<<"\t\t\t MENU GENERAL\n"<<endl;
cout<<"1.Mayor/menor 2 numeros"<<endl;
cout<<"2.Ecuaciones"<<endl;
cout<<"3.Calculadora"<<endl;
cout<<"4.Hamburguesa"<<endl;
cout<<"5.Menor/mayor/Intermedio 3 numeros"<<endl;
cout<<"6.Cantidad de digitos de un numero natural"<<endl;    /* Todo lo que se muestra en el tablero */
cout<<"7.Mayor/menor 4 numeros"<<endl;
cout<<"8.Convertir metros en: km/Dam/Dm/Cm"<<endl;
cout<<"9.Facturar un producto"<<endl;
cout<<"10.Notas del estudiante"<<endl;
cout<<"11.Tablas de multiplicar"<<endl;
cout<<"12.Convierte de binario a decimal o decimal a binario"<<endl;
cout<<endl<<"eliga una opcion"<<endl;
 cin>>opcion;       /* Aqui puede escoger el menu con la varible que le puse */
 cout<<endl;
switch(opcion)    /* primer switch para el primer menu */
{
case 1:    /*  caso para la primera opcion del menu */

float n1, n2;   /* variables para ingresar los digitos */
cout<<"\t\t\t Escogiste Mayor/menor 2 numeros\n\n ";
cout<<"ingresa 2 digitos\n";
cout<<"\n primer digito\n";     
cin>>n1;
cout<<"\n segundo digito\n";    /* lo que va a aparecer en el tablero del primer ejercicio */
cin>>n2;
if(n2>n1 and n2<n1)
{
cout<<"\n digito mayor\n"<<n1<<endl;  cout<<" digito menor\n"<<n2 <<"\n";
}
else if(n1<n2 and n2>n1)
{
cout<<"\n digito mayor\n"<<n2<<endl; cout<<" digito menor\n"<<n1 <<"\n";	
}
else if(n1<n2 and n2>n1 and n1>n2)
{
cout<<"\n digito mayor\n"<<n2<<endl; cout<<" digito menor\n"<<n1<<"\n";
}
else if(n2<n1 and n2<n1)
{
cout<<"\n digito mayor\n"<<n1<<endl; cout<<" digito menor\n"<<n2 <<"\n";
}
else if(n2>n1 and n2<n1)
{                                                                          /* Todos estos if y else if son para que me organise de menor a mayor los numero que ingrese */
cout<<"\n digito mayor\n"<<n1<<endl; cout<<" digito menor\n"<<n2 <<"\n";	
}
else if(n2>n1 and n2>n1)
{
cout<<"\n digito mayor\n"<<n1<<endl; cout<<" digito menor\n"<<n2 <<"\n";
}
else if(n1<n2 and n2<n1)
{
cout<<"\n digito mayor\n"<<n2<<endl;  cout<<" digito menor\n"<<n1 <<"\n";
}
else if(n2>n1 and n1<n2)
{
cout<<"\n digito mayor\n"<<n1<<endl;  cout<<" digito menor\n"<<n2 <<"\n";	
}
else if(n1>n2 and n2>n1)
{
cout<<"\n digito mayor\n"<<n1<<endl;  cout<<" digito menor\n"<<n2 <<"\n";
}
else if(n1==n2)
{
cout<<"Estos numeros son iguales\n\n";
}
system("pause");
system("cls");   /* estas tres funciones son para que me vuelva al menu */
return main();
break;    /* Este break es para cerrar el caso y no me marque cualquier error */

}

switch(opcion)   /* Segundo switch para segunda opcion del menu */
{
case 2:    /* Caso para la segunda opcion del menu */

cout<<"\t\t\t Escogiste Ecuaciones\n\n ";
float a, b, c, r;    /* Variables para los digitos de las operaciones de la segunda opcion del menu */
      
 char opcion;        /* variable para el switch y para elegir una opcion de las 3 operaciones */
cout<<"1.y=m*x+b"<<endl;
cout<<"2.v:e/t"<<endl;    /* Lo que va a aparecer en el tablero */
cout<<"3.v=c*R"<<endl;
cout<<"Elige la opcion"<<endl;
cin>>opcion;
cout<<endl;
switch(opcion)     /* switch donde van estar los tres ejercicios para resolver */
{
case '1':     /* caso para el primer ejercicio */

cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;
cin>>b;                                       /* lo que  aparecera en el tablero */
cout<<"ingrese tercer numero"<<endl;
cin>>c;
r=a*b+c;            /* operacion para que le de el resultado del ejercicio */
cout<<"El valor de y es:"<<r<<endl;   /* resultado */

break;  /* break  para cerrar el caso del ejercicio y no me marque cualquier error */


case '2':     /* caso para el segundo ejercicio */

cout<<"\t\t QUE DESEAS HALLAR"<<endl;
cout<<"1.La velocidad:"<<"\t v=e/t\n";
cout<<"2.El espacio:"<<"\t t*v=e\n";    /* submenu que aparecera en el tablero */
cout<<"3.El tiempo:"<<"\t t=e/v\n";
cout<<endl<<"Elige la opcion"<<endl; /* para elegir cual submenu escoger */
cin>>opcion;
cout<<endl;
switch(opcion)  /* switch para el submenu */
{
case '1': /*  primer caso para el primer submenu */

cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;      /* lo que  aparecera en el tablero */
cin>>b;
r=a/b;       /* operacion para que le de el resultado del ejercicio */
cout<<"la velocidad es:"<<r<<endl;   /* resultado */

break;  /*  break  para cerrar el caso del submenu y no me marque cualquier error */


case '2':  /* sugundo caso para el segundo submenu */
cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;      /* lo que  aparecera en el tablero */
cin>>b;
r=a*b;    /* operacion para que le de el resultado del ejercicio */
cout<<"El espacio es:"<<r<<endl;    /* resultado */

break;   /*  break  para cerrar el caso del submenu y no me marque cualquier error */


case '3':    /* tercer  caso para el tercer submenu */
	
cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;      /* lo que  aparecera en el tablero */
cin>>b;
r=a/b;         /* operacion para que le de el resultado del ejercicio */
cout<<"El tiempo es:"<<r<<endl;    /* resultado */

break;    /*  break  para cerrar el caso del submenu y no me marque cualquier error */


}
break;   /* break  para cerrar el caso del ejercicio y no me marque cualquier error */


case '3':        /* caso para el tercer ejercicio */

cout<<"\t\t QUE DESEAS HALLAR"<<endl;
cout<<"1.La velocidad:"<<"\t v=c*R\n";
cout<<"2.La corriente:"<<"\t R/v=c\n";      /* submenu que aparecera en el tablero */
cout<<"3.La resistencia:"<<"\t R=c*v\n";
cout<<endl<<"Elige la opcion"<<endl;   /* para elegir cual submenu escoger */
cin>>opcion;
cout<<endl;
switch(opcion)     /* switch para el submenu */
{
case '1':    /*  primer caso para el primer submenu */
	
cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;     /* lo que  aparecera en el tablero */
cin>>b;
r=a*b;         /* operacion para que le de el resultado del ejercicio */
cout<<"la velocidad es:"<<r<<endl;    /* resultado */

break;   /*  break  para cerrar el caso del submenu y no me marque cualquier error */


case '2':    /* sugundo caso para el segundo submenu */
	
cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;     /* lo que  aparecera en el tablero */
cin>>b;
r=a/b;         /* operacion para que le de el resultado del ejercicio */
cout<<"La corriente es:"<<r<<endl;     /* resultado */

break;  /*  break  para cerrar el caso del submenu y no me marque cualquier error */


case '3':       /* tercer  caso para el tercer submenu */

cout<<"ingrese primer numero"<<endl;
cin>>a;
cout<<"ingrese segundo numero"<<endl;   /* lo que  aparecera en el tablero */
cin>>b;
r=a*b;      /* operacion para que le de el resultado del ejercicio */
cout<<"la resistencia es:"<<r<<endl;   /* resultado */

break; /*  break  para cerrar el caso del submenu y no me marque cualquier error */
}
break;    /* break  para cerrar el caso del ejercicio y no me marque cualquier error */
}
system("pause");
system("cls");    /* estas tres funciones son para que me vuelva al menu */
return main();
break;    /* break  para cerrar el caso del la segunda opcion del menu y no me marque cualquier error */

}


switch (opcion)     /* Segundo switch para la tercera opcion del menu */
{
case 3:   /* Caso para la tercera opcion del menu */
 float R,a,b;    /* variavle para que el resultado de la operacion tambien sea en decimales */
 int r,A,B;
  int hola; 
 cout<<"\t\t\t Escogiste Calculadora\n ";
 cout<<"menu"<<endl<<endl;
 cout<<"1.sumar"<<endl;
 cout<<"2.resta"<<endl;
 cout<<"3.multiplicar"<<endl;       /* lo que  aparecera en el tablero */
 cout<<"4.dividir"<<endl;
 cout<<"5.Modulo"<<endl;
 cout<<endl<<"eliga una opcion"<<endl;   /* para elegir cual opcion escoger*/
 cin>>hola;
 cout<<endl;

 switch(hola)  /* switch para poder resolver las opciones */
 {
  case 1:  /* primer caso de la primera opcion*/
cout<<"ingrese dos numeros"<<endl;
 cout<<"primer numero:"<<endl;
 cin>>a;                             /* lo que  aparecera en el tablero */
 cout<<"segundo numero:"<<endl;
 cin>>b;
cout<<"el resultado es:"<<a+b<<endl;  /* operacion y resultado de la opcion */

  break;    /* break  para cerrar el caso de la opcion y no me marque cualquier error */
  
  
  case 2:   /* segundo caso de la sgunda opcion*/
  cout<<"ingrese dos numeros"<<endl;
 cout<<"primer numero:"<<endl;
 cin>>a;                           /* lo que  aparecera en el tablero */
 cout<<"segundo numero:"<<endl;
 cin>>b;
 R=a-b;  /* operacion */
cout<<"el resultado es:"<<R<<endl;  /* resultado */

  break;   /* break  para cerrar el caso de la tercer opcion del menu y no me marque cualquier error */
  
  
  case 3:   /* tercer caso de la tercer opcion*/
   cout<<"ingrese dos numeros"<<endl;
 cout<<"primer numero:"<<endl;
 cin>>a;
 cout<<"segundo numero:"<<endl;    /* lo que  aparecera en el tablero */
 cin>>b;
R=a*b;   /* operacion */
cout<<"el resultado es:"<<R<<endl;   /* resultado */

  break;   /* break  para cerrar el caso de la opcion y no me marque cualquier error */
  
  
  case 4:  /* cuarto caso de la cuarta opcion*/
  
   cout<<"ingrese dos numeros"<<endl;
 cout<<"primer numero:"<<endl;
 cin>>a;
 cout<<"segundo numero:"<<endl;   /* lo que  aparecera en el tablero */
 cin>>b;
R=a/b;  /* operacion */
cout<<"el resultado es:"<<R<<endl;  /* resultado */

  break;   /* break  para cerrar el caso de la opcion y no me marque cualquier error */
  
  case 5:   /* cuarto caso de la cuarta opcion*/
  
   cout<<"ingrese dos numeros"<<endl;
 cout<<"primer numero:"<<endl;
 cin>>A;
 cout<<"segundo numero:"<<endl;     /* lo que  aparecera en el tablero */
 cin>>B;
r=A%B;   /* operacion */
cout<<"el resultado es:"<<r<<endl;  /* resultado */
  break;   /* break  para cerrar el caso de la opcion y no me marque cualquier error */
}


 system("pause");
system("cls");     /* estas tres funciones son para que me vuelva al menu */
return main();
system("pause");
system("cls");     /* estas tres funciones son para que me vuelva al menu */
return main();
break;   /* break  para cerrar el caso de la tercer opcion del menu y no me marque cualquier error */
}


switch(opcion)    
{
case 4:

 string ceb,ripi,sal;

cout<<"\t\t\t\t Escogiste Hamburguesa\n\n";
 cout<<"Hamburguesa con cebolla,Ripio y salsas.\n"<<endl;

		cout<<"Quieres que lleve ceboola?\n";
	
		cout<<endl<<"Ingresa SI o NO:"<<endl;
		cin>>ceb;
	cout<<endl;
	
		cout<<"Quieres que lleve Ripio?\n";

	cout<<endl<<"Ingresa SI o NO:"<<endl;
	cin>>ripi;
	cout<<endl;

		cout<<"Quieres que lleve salsas?\n";
	
    cout<<endl<<"Ingresa SI o NO:"<<endl;
	cin>>sal;
	cout<<endl;
   
	
cout<<"Tu pedido es:\n"<<"Una Hamburguesa que tendra  cebolla:"<<ceb<<"\t Ripio:"<<ripi<<"\t Salsas:"<<sal<<endl;
system("pause");
system("cls");
return main();
break;
}


switch(opcion)
{
case 5:
	
cout<<"\t\t\t Escogiste Menor/mayor/intermedio 3 numeros\n\n ";
float n7, n8, n9;
cout<<"ingresa 3 digitos\n";
	cout<<"\n primer digito\n";
	cin>>n7;
	cout<<"\n segundo digito\n";
	cin>>n8;
	cout<<"\n tercer digito\n";
	cin>>n9;
if(n8>n7 and n8<n9)
{
cout<<"\n Digito MENOR\n"<<n7<<endl; cout<<"Digito INTERMEDIO\n"<<n8<<endl; cout<<" Digito MAYOR\n"<<n9 <<"\n";
}
else if(n7<n8 and n8>n9 and n7>n9)
{
cout<<"\n Digito MENOR\n"<<n9<<endl; cout<<"Digito INTERMEDIO\n"<<n7<<endl; cout<<" Digito MAYOR\n"<<n8 <<"\n";	
}
else if(n7<n8 and n8>n9 and n7>n9)
{
cout<<"\n Digito MENOR\n"<<n9<<endl; cout<<"Digito INTERMEDIO\n"<<n7<<endl; cout<<" Digito MAYOR\n"<<n8 <<"\n";
}
else if(n8<n7 and n8<n9)
{
cout<<"\n Digito MENOR\n"<<n8<<endl; cout<<"Digito INTERMEDIO\n"<<n7<<endl; cout<<" Digito MAYOR\n"<<n9 <<"\n";
}
else if(n8>n7 and n8<n9)
{
cout<<"\n Digito MENOR\n"<<n7<<endl; cout<<"Digito INTERMEDIO\n"<<n9<<endl; cout<<" Digito MAYOR\n"<<n8 <<"\n";	
}
else if(n8>n7 and n8>n9)
{
cout<<"\n Digito MENOR\n"<<n7<<endl; cout<<"Digito INTERMEDIO\n"<<n9<<endl; cout<<" Digito MAYOR\n"<<n8 <<"\n";
}
else if(n9<n8 and n9<n7)
{
cout<<"\n Digito MENOR\n"<<n9<<endl; cout<<"Digito INTERMEDIO\n"<<n8<<endl; cout<<" Digito MAYOR\n"<<n7 <<"\n";
}
else if(n9>n7 and n9<n8)
{
cout<<"\n Digito MENOR\n"<<n7<<endl; cout<<"Digito INTERMEDIO\n"<<n9<<endl; cout<<" Digito MAYOR\n"<<n8<<"\n";	
}
else if(n9>n8 and n9>n7)
{
cout<<"\n Digito MENOR\n"<<n7<<endl; cout<<"Digito INTERMEDIO\n"<<n8<<endl; cout<<" Digito MAYOR\n"<<n9 <<"\n";
}
else if(n7==n8 and n8==n9)
{
cout<<"Estos numeros son iguales\n\n";
}
system("pause");
system("cls");
return main();
break;
}
switch(opcion)
{
case 6:
int a;
cout<<"Digite un numero menor que 1000000"<<endl;
cin>>a; 
if(a>=1 and a<=9)
{
cout<<endl<<"El numero tiene 1 digito"<<endl;
}
else if(a>=10 and a<=99)

{
cout<<"El numero tiene 2 digitos"<<endl;
}
else if(a>=100 and a<=999)
{
cout<<"El numero tiene 3 digitos"<<endl;
}
else if(a>=1000 and a<=9999)
{
cout<<"El numero tiene 4 digitos"<<endl;
}
else if(a>=10000 and a<=99999)
{
cout<<"El numero tiene 5 digitos"<<endl;
}
else if(a>=1000000)
{
cout<<"El numero tiene que ser menor que 1.000.000"<<endl;
}
system("pause");
system("cls");
return main();
break;
}
switch(opcion)
{
case 7:

float n1, n2, n3, n4;
cout<<"\t\t\t Escogiste Mayor/menor 4 numeros \n\n ";
cout<<"INGRESA 4 DIGITOS\n";
	cout<<"\n primer digito\n";
	cin>>n1;
	cout<<"\n segundo digito\n";
	cin>>n2;
	cout<<"\n tercer digito\n";
	cin>>n3;
	cout<<"\n cuarto digito\n";
	cin>>n4;
if(n1>n2 and n1>n2 and n1>n2 and n2<n1 and n2<n3 and n2<n4)
{
cout<<"\n \t\t Digito menor:"<<n2<<endl;  cout<<"\t\t Digito mayor:"<<n1<<"\n";
}
else if(n1>n2 and n1>n2 and n1>n2 and n3<n1 and n3<n2 and n3<n4)
{
cout<<"\n \t\t Digito menor:"<<n3<<endl;  cout<<"\t\t Digito mayor:"<<n1<<"\n";
}
else if(n1>n2 and n1>n2 and n1>n2 and n4<n1 and n4<n2 and n4<n3)
{
cout<<"\n \t\t Digito menor:"<<n4<<endl;  cout<<"\t\t Digito mayor:"<<n1<<"\n";	
}
else if(n2>n1 and n2>n3 and n2>n4 and n1<n2 and n1<n3 and n1<n4)
{
cout<<"\n \t\t Digito menor:"<<n1<<endl;  cout<<"\t\t Digito mayor:"<<n2<<"\n";	
}
else if(n2>n1 and n2>n3 and n2>n4 and n3<n1 and n3<n2 and n3<n4)
{
cout<<"\n \t\t Digito menor:"<<n3<<endl;  cout<<"\t\t Digito mayor:"<<n2<<"\n";	
}
else if(n2>n1 and n2>n3 and n2>n4 and n4<n1 and n4<n2 and n4<n3)
{
cout<<"\n \t\t Digito menor:"<<n4<<endl;  cout<<"\t\t Digito mayor:"<<n2<<"\n";	
}
else if(n3>n2 and n3>n1 and n3>n4 and n1<n2 and n1<n3 and n1<n4)
{
cout<<"\n \t\t Digito menor:"<<n1<<endl;  cout<<"\t\t Digito mayor:"<<n3<<"\n";	
}
else if(n3>n4 and n3>n1 and n3>n2 and n2<n3 and n2<n4 and n2<n1)
{
cout<<"\n \t\t Digito menor:"<<n2<<endl;  cout<<"\t\t Digito mayor:"<<n3<<"\n";
}
else if(n3>n1 and n3>n2 and n3>n4 and n4<n1 and n4<n2 and n4<n3)
{
cout<<"\n \t\t Digito menor:"<<n4<<endl;  cout<<"\t\t Digito mayor:"<<n3<<"\n";	
}
else if(n4>n1 and n4>n2 and n4>n3 and n1<n2 and n1<n3 and n1<n4)
{
cout<<"\n \t\t Digito menor:"<<n1<<endl;  cout<<"\t\t Digito mayor:"<<n4<<"\n";	
}
else if( n2<n1 and n2<n3 and n2<n4 and n4>n1 and n4>n2 and n4>n3)
{
cout<<"\n \t\t Digito menor:"<<n2<<endl;  cout<<"\t\t Digito mayor:"<<n4<<"\n";	
}
else if(n4>n1 and n4>n2 and n4>n3 and  n3<n1 and n3<n2 and n3<n4)
{
cout<<"\n \t\t Digito menor:"<<n3<<endl;  cout<<"\t\t Digito mayor:"<<n4<<"\n";	
}
system("pause");
system("cls");
return main();
break;
}
switch(opcion)
{
case 8:
cout<<"\t\t\t Escogiste Convertir metros en: km/Dam/Dm/Cm \n\n ";
const float b=1000;
const float c=10;
const float d=10;
const float e=100;
 int a,opcion;
float R;
 cout<<"escribe el digito en metros"<<endl;
 cout<<"Digito:"<<endl;
 cin>>a;
 cout<<endl<<"menu"<<endl<<endl;
 cout<<"1.En Km"<<endl;
 cout<<"2.En Dam"<<endl;
 cout<<"3.En Dm"<<endl;
 cout<<"4.En Cm"<<endl;
 cout<<endl<<"eliga una opcion"<<endl<<endl;
 cin>>opcion;
 cout<<endl;
 switch(opcion)
 {
  case 1:R=a/b;
  break;
  case 2:R=a/c;
  break;
  case 3:R=a*d;
  break;
  case 4:R=a*e;
  break;
}
cout<<"el resultado es:"<<R<<endl;
system("pause");
system("cls");
return main();
break;
}
switch(opcion)
{
case 9:
	
int a,b,c,opcion,r;
cout<<"\t\t\t\t Tienda Shop Home\n\n";
cout<<"1.Soflan\t\t";
cout<<"2.Mantequilla\t\t";
cout<<"3.Lava losa\t\t\n";
cout<<endl<<"Que deseas comprar:"<<endl<<endl;
 cin>>opcion;
 cout<<endl;
 switch(opcion)
 {
 case 1 :
 	
cout<<"Cuantos desea comprar:";
cin>>a;
cout<<"\tMetodo de pago\n";
cout<<"1.Efectivo\n";
cout<<"2.Sitecredito\n";
cout<<endl<<"elige metodo de pago"<<endl;
cin>>opcion;
cout<<endl;
switch(opcion)
{
case 1: r=a*17000-a*17000*0.2;
cout<<"\t\t Factura\n";
cout<<"Codigo:"<<"KY3411\n";
cout<<"Descripcion:"<<" Acondicionador de telas liquido brisa de jardin|SUAVITEL\n";
cout<<"Precio:"<<"17.000\n";
cout<<"Cantidad:"<<a;
cout<<"\nTu descuento es de:"<<a*17000*0.2;
cout<<"\nTotal:"<<a*17000;
cout<<"\n\n Monto a pagar:"<<r<<endl;
break;
case 2: r=a*17000-a*17000*0.05;
cout<<"\t\t Factura\n";
cout<<"Codigo:"<<"KY3411\n";
cout<<"Descripcion:"<<" Acondicionador de telas liquido brisa de jardin|SUAVITEL\n";
cout<<"Precio:"<<"17.000\n";
cout<<"Cantidad:"<<a;
cout<<"\nTu descuento es de:"<<a*17000*0.05;
cout<<"\nTotal:"<<a*17000;
cout<<"\n\n Monto a pagar:"<<r<<endl;
break;
}
break;
case 2:
	
cout<<"Cuantos desea comprar:";
cin>>b;
cout<<"\tMetodo de pago\n";
cout<<"1.Efectivo\n";
cout<<"2.Sitecredito\n";
cout<<endl<<"elige metodo de pago"<<endl;
cin>>opcion;
cout<<endl;
switch(opcion)
{
case 1: r=b*4000-b*4000*0.2;
cout<<"\t\t Factura\n";
cout<<"Codigo:"<<"KL4533\n";
cout<<"Descripcion:"<<"Mantequilla con sal para tu familia|RAMA\n";
cout<<"Precio:"<<"4000\n";
cout<<"Cantidad:"<<b;
cout<<"\nTu descuento es de:"<<b*4000*0.2;
cout<<"\nTotal:"<<b*4000;
cout<<"\n\n Monto a pagar:"<<r<<endl;
break;
case 2: r=b*4000-b*4000*0.05;
cout<<"\t\t Factura\n";
cout<<"Codigo:"<<"KL4533\n";
cout<<"Descripcion:"<<"Mantequilla con sal para tu familia|RAMA\n";
cout<<"Precio:"<<"4000\n";
cout<<"Cantidad:"<<b;
cout<<"\nTu descuento es de:"<<b*4000*0.05;
cout<<"\nTotal:"<<b*4000;
cout<<"\n\n Monto a pagar:"<<r<<endl;
break;
}
break;
case 3:
	
cout<<"Cuantos desea comprar:";
cin>>c;
cout<<"\tMetodo de pago\n";
cout<<"1.Efectivo\n";
cout<<"2.Sitecredito\n";
cout<<endl<<"elige metodo de pago"<<endl;
cin>>opcion;
cout<<endl;
switch(opcion)
{
case 1: r=c*8600-c*8600*0.2;
cout<<"\t\t Factura\n";
cout<<"Codigo:"<<"BA0029\n";
cout<<"Descripcion:"<<"Lava losa liquido con bicavornato remueve toda la grasa de tus platos sucios|SALVO\n";
cout<<"Precio:"<<"8600\n";
cout<<"Cantidad:"<<c;
cout<<"\nTu descuento es de:"<<c*8600*0.2;
cout<<"\nTotal:"<<c*8600;
cout<<"\n\n Monto a pagar:"<<r<<endl;
break;
case 2: r=c*8600-c*8600*0.05;
cout<<"\t\t Factura\n";
cout<<"Codigo:"<<"BA0029\n";
cout<<"Descripcion:"<<"Lava losa liquido con bicavornato remueve toda la grasa de tus platos sucios|SALVO\n";
cout<<"Precio:"<<"8600\n";
cout<<"Cantidad:"<<c;
cout<<"\nTu descuento es de:"<<c*8600*0.05;
cout<<"\nTotal:"<<c*8600;
cout<<"\n\n Monto a pagar:"<<r<<endl;
break;
}
system("pause");
system("cls");
return main();
break;
 }
}
switch(opcion)
{
case 10:
	
string nom;
float n1,n2,n3,n4,n5,nf;
cout<<"Digite nombre:\t";
cin>>nom;
cout<<"\n Digite notas:\n"<<endl;
cout<<"Primera nota:\t";
cin>>n1;
while(n1<0 or n1>5)
{
cout<<endl<<"Error la nota tiene que ser de 0-5:\n";
cout<<endl<<"primera nota:\t";
cin>>n1;
}
cout<<endl<<"Segunda nota:\t";
cin>>n2;
while(n2<0 or n2>5)
{
	cout<<endl<<"Error la nota tiene que ser de 0-5:\n";
	cout<<endl<<"Segunda nota:\t";
	cin>>n2;
}
cout<<endl<<"tercera nota:\t";
cin>>n3;
while(n3<0 or n3>5)
{
cout<<endl<<"Error la nota tiene que ser de 0-5:\n";
cout<<endl<<"tercera nota:\t";
cin>>n3;
}
cout<<endl<<"cuarta nota:\t";
cin>>n4;
while(n4<0 or n4>5)
{
cout<<endl<<"Error la nota tiene que ser de 0-5:\n";
cout<<endl<<"cuarta nota:\t";
cin>>n4;
}
cout<<endl<<"Quinta nota:\t";
cin>>n5;
while(n5<0 or n5>5)
{
cout<<endl<<"Error la nota tiene que ser de 0-5:\n";
cout<<endl<<"Quinta nota:\t";
cin>>n5;
}
nf=n1*0.05+n2*0.15+n3*0.2+n4*0.3+n5*0.3;
cout<<"\t\t\t\t Datos de las notas del estudiante:"<<nom;
cout<<endl<<"\n\n\t\t Primera nota:"<<n1;cout<<"\t 5%";
cout<<endl<<"\t\t Segunda nota:"<<n2;cout<<"\t 15%";
cout<<endl<<"\t\t Tercera nota:"<<n3;cout<<"\t 20%";
cout<<endl<<"\t\t cuarta nota:"<<n4;cout<<"\t 30%";
cout<<endl<<"\t\t Quinta nota:"<<n5;cout<<"\t 30%";
cout<<endl<<endl<<"nota final:"<<nf<<endl;
if(nf>3.0 and nf<=3.5)
{
cout<<endl<<"Tu nota es aceptable\n"<<endl;
}
else if(nf<=3.0)
{
cout<<endl<<"Tu nota es deficiente\n"<<endl;
}
else if(nf>=3.5 and nf<=3.9)
{
cout<<endl<<"Tu nota es buena\n"<<endl;
}
else if(nf>=4.0)
{
cout<<endl<<"Tu nota es excelente\n"<<endl;
}
system("pause");
system("cls");
return main();
break;
}
switch(opcion)
{
case 11:
cout<<"\t\t\t Escogiste Tablas de multiplicar\n\n ";
int a, num;
do
{
cout<<"ingresa un numero\n";
cin>>num;
}
while(num<2|num>9);
for(int i=1;i<=10;i++)
{
cout<<num<<"x"<<i<<"="<<num*i<<endl;

}
system("pause");
system("cls");
return main();
break;


case 12:
	
int n1,op,nf,resto =0;
int n2[8];
short n3[8];
cout<<"\t\t\t CONVIERTE DE BINARIO A DECIMAL O DECIMAL A BINARIO\n\n";
cout<<"1.Binario-Decimal"<<endl;
cout<<"2.Decimal-Bimario"<<endl;
cout<<endl<<"Que deseas convertir:";
cin>>op;
cout<<endl;
switch(op)
{
case 1:
cout<<"Ingresa numero binario:"<<endl;
cin>>n1;

for (int i = 0; i<8; i++)
{

n2[i] = n1 % 10; 
n1 /= 10;
}

for (int i=7; i>=0; i--)
{
	
nf= (resto *2) + n2[i];
resto=nf;
}
cout<<endl<<"El numero equivalente a decimal es:"<<nf<<endl;
 break;
 
 case 2:
cout<<"Ingresa numero decimal:"<<endl;
cin>>n1;

for (int i=0; i<8; i++)
{

n3[i] = n1 % 2;
n1 /= 2;
}

cout<<endl<<"El numero equivalente a binario es:"<<endl;

for (int i=7; i>=0; i--)
{

cout<<n3[i];
}
cout<<endl;
break;
}
system("pause");
system("cls");
return main();
return 0;
}
system("pause");
return 0;
}
