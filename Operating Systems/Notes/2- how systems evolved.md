![[Pasted image 20261008232626.png]]

1- simple batch 
	os queue the jobs and run them in turn 
2- multiprogramming 
	never lets cpu sit idle , changes to another on i/o event
	![[Pasted image 20261008232933.png]]
3- time sharing 
	there is a common clock , the cpu switches between processes fast 
![[Pasted image 20261008233538.png]]

4- desktop systems 
	itis our pcs
5- more than one cpu 
	-multiprocessor vs distributed
		>multiprocessor (one kitchen) more than one cpu running on same pc 
		>tightly coupled cpus share memory and clock
	-distributed (many restaurants) 
		>several machines share the wanted info
		>loosely coupled : each has itis own memory and clock
	-clustered systems 
		several computers running to achieve one job  shared storage 
		>Asymmetric : one server running and the others standby 
		>Symmetric : all servers running together 

[[3- computer systems operation]]