
La estructura de un empleado

| Campo      | Tamaño en bytes | Offset |
| ---------- | --------------- | ------ | 
| id         | 4               | 0 |
| edad       | 4               | 4 |
| nombre     | 12              | 8 |

Total: 20 bytes por empleado.

Cómo leo el primer (0) empleado? Offset: 0
Cómo leo el segundo (1) empleado? Offset: 20
Cómo leo el tercer (2) empleado? Offset: 40
Cómo leo el cuarto (3) empleado? Offset: 60

Cómo leo el empleado n? Offset: n*20

Índice
| ID         | Offset |
| ---------- | -------|
| 1          | 520    |
| 2          | 160    |
| 4          | 0      |