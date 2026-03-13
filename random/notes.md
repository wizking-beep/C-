- ## Stack vs Heap Memory
Stack memory, this is fixed memory for the application to run.
The memory gets assigned based on a particular function operation.
If it happens that the function depends on another to run, then 
memory is assigned to for the other function to run and the 
memory block for the current one is "locked" until the other function is 
executed and the memory freed then the function execution of the main 
function is caried out, on its memory space after which the memory is freed.
If it happens that the function memory allocation for the program is exceeded 
than what the device allocates then a stack overflow occurs which results into
crashing of the program.

Heap memory is the entirity asignment of memory from the users memory.
THis memory is allocated at runtime by the program.
Proper freeing up of the memory used needs to be implemented after the
use of a particular memory space.

## Automatic vs dynamic storage duration
