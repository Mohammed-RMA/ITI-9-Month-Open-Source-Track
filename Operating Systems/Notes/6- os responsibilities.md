![[Pasted image 20261011004406.png]]

**1-process management**
a process is a program in execution 
in execution we mean the process in memory or cpu 
in memory means the process is live ,in cpu itis running  
the os is responsible for process management ![[Pasted image 20261011003652.png]]

the process leaves the cpu in 4 situations 
	> interrupt
	> i/o event
	> The process exceeded the allocated space.
	> process finished 
	and all of these situations we can summarize it into "interrupt"
	
**2-memory management**
memory here is the volatile memory "RAM"
![[Pasted image 20261011005048.png]]
for every application the os assign a 2 spaces for it 
	1- stack space and this is the fixed size assigned before running
	2- heap and this is the dynamic size in runtime
	
**3-file management**
![[Pasted image 20261011005344.png]]

**4-I/O system management**
![[Pasted image 20261011005906.png]]
os doesnot communicate directly with i/o devices 
there is an intermediate layer between os and the i/o devices and this layer called drivers 
![[Screenshot 2026-10-09 104320.png]]

> spooling 
> 	every i/o device has a buffer in memory 

**5-secondary storage management**
![[Pasted image 20261011010350.png]]

**6-networking and protection**
![[Pasted image 20261011010621.png]]

**7-command interceptor **
![[Pasted image 20261011010902.png]]


operating system services 
![[Pasted image 20261011011324.png]]

components are the inside view 
services are the outside view 

[[7- system calls]]