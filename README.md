# SimComputer - Simulated Computer

## Things to do

1. Need to convert processes and process_queue to pointers

After the exec of a process which included changing the number of cycles processed, the process on the queue was not changed.
This was probably because somewhere a copy was made rather than the original object. The copy was changed but not the object.