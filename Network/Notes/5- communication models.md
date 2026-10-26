1-OSI Model (open systems interconnection)
	layered approach 
	![[Pasted image 20261014181533.png]]
	
	1- first 3 layers are software layer
		>application layer
		>presentation layer
		>session layer
		
		here itis raw data 
		human lang. ==> binary lang.
	
	2-transport layer
		organize the data into segments
		reliable transport between end systems

![[Pasted image 20261014183003.png]]

		crc: for error check
		session no. : is the  number of the session
		sequence no. : is the order of the sequence it tranmitted with 

	3- network layer 
		organize the data into packets 
		itis responsibe for the IP 
		it know the best path for the destination 

![[Pasted image 20261014183703.png]]

	4- Datalink & physical layer
		organize the data into frames
		it deals with mac address

![[Pasted image 20261014183937.png]]


![[Pasted image 20261014184149.png]]


2- TCP/IP transmission control protocol 
	only 4 layers
	![[Pasted image 20261014184509.png]]

	1- application layer
		some protocols used like
		HTTP - FTP - SMTP - RTP
	2- transport layer 
		TCP - UDP

![[Pasted image 20261014185226.png]]

===================================
Physical address (MAC)
Unique address over the world
• Physical addresses can be either
	• Unicast
	• Multicast
	• Broadcast

NAT (Network Address Translation)
The technology allows a site to use a set of private
addresses for internal communication and a set of global Internet addresses (at least one) for communication with the rest of the world


[[6- transport layer]]