data: Unsummarized, unanalyzed, detailed, facts
	a fact is a value of any type (int, str, chr)
	
information: Summarized and analyzed data processed by a computer or application. The opposite of data. 

computer: An electronic device that performs arithmetic and logical operations. 

application (program, protocol, software, command): A set of instructions. 

knowledge: The capacity to use information to make decisions.
	Knowing what the information means.
	
network: A group or system of interconnected people or things. 
	The Internet is a network of computer networks. The Internet is different from the network. 
	It is the communication links for transferring data from one computer another. 
	There are three major components in a computer network: end systems, communication links, and packet switches. 
	
server: An advanced computing device that stores large databases for web applications. 

end systems/hosts: A computing device (desktops, laptops, servers, cellphones, etc.) that is connected by communication links and packet-switched networks. 
	*An exam question asks whether or not end system is the same as a host. 

communication links: Physical media that includes cables (coaxial, copper, optical fiber, radio spectrum). 
	Different methods of communication links transfer data at different rates, which is measured in bits/second (Kbps, Mbps, Gbps). 
	
packet switch: There are two types of switch - link-layer and router. 
	The link-layer is the hardware that connects two devices. 
	The router receives data from an end system and segments it into packets. 
	Each packet gains a header byte and is forwared to another router or to the end receiver. The receiver waits for each packet and reassembles it once each 
	one has arrived. 
	
network route: The sequence of communication links and packet switches traversed by a packet from the sending end system to the receiving end system. 

ISP (Internet Service Provider): A network of communication links and packet switches. 
	There can be multiple types of ISPs such as residential, corporate, university, and cellular data. 
	
socket interface: A protocol that runs on all end systems (senders and receivers) in the transport layer. It determines the rules for packets to pass into the end 
	system. It acts like a gateway for computing devices. It accepts or rejects segments from entering the end system. 

TCP/IP: A suite of communication protocols used to interconnect network devices on the Internet. IP Specifies the format of packets. 
	TCP is a transport layer protocol. 
	
UDP: User Datagram Protocol. Well-suited for connections where real-time information is needed, such as video calls. 

distributed application: An application that runs on 2 or more end systems. 

network edge: An area where a computer network interfaces with the Internet. 
	Clients tend to be desktops, laptops, cellphones, etc. Servers tend to be powerful machines that store and distribute large media files or convey emails, 
	among other things. 

L/WAN: Local/Wide Area Network

cloud computing: A computing model where servers, networks, storage, development tools, and even applications are enabled through the internet. 

hybrid fiber coaxial (HFC): A hybrid of fiber optic and coaxial cables used in Cable Internet Access. *midterm question

network core: The network of packet switches and links that interconnect the Internet's end systems. 

network application: An application that allows end systems to exchange messages with each other. 

transmission time = (bit length)/(bits/sec) 
	The time it takes for packets to be transmitted from one end system to another. 

total delay = 2L/R seconds - At this time the router has already received the first packet and has just received the second packet. 
	At time nL/R the router has already received n-1 packets and has just received the nth packet. 
	If the router does not keep the packets and instead forwards them immediately then the total delay is the transmission time. 
	
packet loss: When a packet is dropped while waiting in the queue of a packet-switched network. 

network architecture: The hardware making up a network which provides a set of services to applications. 

P2P architecture: There is minimal dependance on dedicated servers in data centers. P2P applications only communicate between users; an ISP is not involved at all.
In a P2P file sharing system, a file is transferred from one process in one peer to another process in another peer. 

BitTorrent: A network application protocol that controls file sharing on a network. It runs on the application layer. 

torrent: Collection of peers that are participating in the distribution of files. 

process: An instance of an application running on a host. 

network layer stack: Application, Transport, Network, Data link, Physical

HTTP: Application layer protocol

ports: Software-based connection points. Each port number is usually associated with certain kinds of traffic, such as email or webpages. 
	All HTTP messages go to port 80.
	Each port number is 16-bits, ranging from 0 to 65535. "Well-known" ports range from 0 to 1023. 

multiplexing: A transport layer protocol. A method of sending multiple streams of information in one signal. 
	Gathering data from the source through the sockets. 

demultiplexing: A method of interpreting multiplexed signals. Delivering the data in a transport-layer segment to the correct socket. 

URL: Unified Resource Locater. 

handshaking protocol: The receiver sends a small message to the source acknowledge that a message was received. 

application layer protocols: DNS, BitTorrent, FTP

transport layer protocols: TCP, UDP, socket

-Four types of programming-
procedural (C): A programming model that is derived from structured programming. 
oop (Java, Python, Ruby): Execution of program is based on objects. 
declarative (SQL): Language used to process data based on commands.
mark-up (HTML, XML): Languages used to design web pages. 