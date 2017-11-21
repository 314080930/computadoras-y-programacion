struct alumnos
{
int edad;
char nombre [60];
char genero;
char carrera [25];
char nCuenta [10];
};
typedef struct alumnos ALUMNO;  
  ALUMNO nuevoAlumno (){
  
  ALUMNO tmp;
printf("introduce la edad:");
scanf ("%d", &tmp .edad);
printf ("Introduce el nombre:");
fflush(stdin);//limpia el buffer del teclado
gets (tmp .nombre);
printf("introduce el genero:");
scanf("%c",tmp .genero);
printf("introduce la carrera:");
fflush(stdin);//limpia el buffer del teclado
gets(tmp .carrera);
printf("introduce numero de cuenta:");
fflush(stdin);//limpia el buffer del teclado
gets(tmp .nCuenta)
return tmp;
}
