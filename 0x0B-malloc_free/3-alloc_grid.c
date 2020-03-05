#include <stdlib.h>
/**
 * alloc_grid - alloc_grid
 * @width: width
 * @height: height
 * Return: double pointer.
 */
int **alloc_grid(int width, int height)
{
	int **p; /* declaracion puntero doble*/
       	int i, x;

	if (width < 0 || height < 0) /* verifica si array tiene contenido*/
		return (NULL); /* segun lo anterior se retorna NULL*/

	p = malloc(sizeof(p) * height); /*SE ASIGNA ESPACIO EN MEMORIA*/

	if (p == NULL) /*si puntero recibe un NULL se retorna NULL*/
		return (NULL);

	for (i = 0; i < height; i++) /* se recoorre h para conocer p[i]*/
	{
		p[i] = malloc(sizeof(int) * width); /*se asignan w a p[i]*/

		if (p[i] == NULL)
		{
			for (x = i; x >= 0; x--)/*si p[i]recibe un NULL*/
				free(p[x]);/*se libera p[i]por medio de p[x]*/
			free(p);/*se libera p como contenedor principal*/
			return (NULL);
		}
	}
	for (i = 0; i < height; i++) /*de lo contrario  se hace asignacion*/
	{
		for (x = 0; x < width; x++)
			p[i][x] = 0; /*value h a de p[i] y value w a p[x]*/
	}

	return (p);
}
