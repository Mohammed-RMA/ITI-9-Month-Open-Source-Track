a process is a program in execution 
process states
![[Pasted image 20261011014149.png]]

1- new : when i run a process (click an application) 
2-ready: the os load it into memory ,itis the state when process is ready to enter the cpu but the os doesnot choose it yet 
3-running: when os choose it , it enters the cpu to execute itis instructions but it doesnot leave the memory 
when there is an interrupt it becomes ready again 
4-waiting : when there is an i/o interrupt it waits for the completion of the i/o then it becomes ready again
5-terminated : when it finishes 

**PCB (process control block)**
itis the process id card 
every process has a unique id 
the kernel keeps a pcb for every process to keep track on it 
![[Pasted image 20261011015457.png]]

context switch 
![[Pasted image 20261011015608.png]]

[[10- process scheduling]]