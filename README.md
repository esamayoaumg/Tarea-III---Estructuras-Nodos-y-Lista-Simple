# Tarea-III---Estructuras-Nodos-y-Lista-Simple


## Tarea Semana IV 

## Nombre completo
Elder Geovani Samayoa Esquivel 

## Carné
9941-24-10076

## Sección
B

## Descripción del programa

El programa crea dinámicamente una lista simplemente enlazada de 4 productos utilizando memoria dinámica (new y delete).

Cada nodo contiene:
- Código
- Nombre
- Precio

Funcionamiento:
1. Se crean 4 nodos dinámicamente.
2. Se enlazan en el orden ingresado.
3. Se recorren usando un puntero auxiliar.
4. Se calcula el total acumulado de precios.
5. Se libera correctamente la memoria dinámica antes de finalizar.

Se utiliza:
- struct Producto
- struct Nodo
- new y delete
- Inicialización en nullptr
- Recorrido seguro sin modificar la cabeza
