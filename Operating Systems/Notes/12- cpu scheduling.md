decides which process enters the cpu
![[Pasted image 20261011143510.png]]

preemptive vs non-preemptive 
preemptive: معناها اني بخرج البروسيس اللي شغالة علشان في بروسيس جت اعلي في البريورتي
واغلب ال os اللي شغال دلوقتي هو preemptive
not-preemptive : it doesnot leave the cpu until it finishes
![[Pasted image 20261011143826.png]]

the dispatcher
![[Pasted image 20261011144833.png]]

** the os priority is higher than any application priority 
so when there is an os interrupt it enters the cpu and removes the application process that was running then when it finishes it decides which application process to enter the cpu 
![[Pasted image 20261011145327.png]]

turnaround time : الوقت من بداية دخول البروسيس الميموري لعند لما تكمل 
	turnaround time=completion time- arrival 

waiting time : the time the process takes waiting in ready queue
	waiting time=turnaround- burst time

response time : the time process takes until cpu respond to it


[[13- scheduling alghorithms]]