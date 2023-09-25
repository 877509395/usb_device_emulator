What:
	
        The purpose is to simulate USB device by stm32f10x etc according to data gathered by bushound. 
	From bushound log data, device descriptor/configuration descriptor etc can be extracted. The data 
	can be put into stm32f10x program, So the host can enumlated the device as exactly what the device
        is. Also the timestamp when the data is sent to the host can be extracted, so when and what data 
	is sent to host can be emulated. 



Build stm32f10x program:


	pull master branch;
	cd tools;
	./install  #then compiler can be installed
	
	#to build board program
	cd src/stm3210x_bulk_inc1
	make
	#User/template.elf will generated


To run template.elf:
	
	stlink_server_start 		 # start stlink server.
	stm32_debug  User/template.elf   # to start 
		
		target remote 127.0.0.1:3333
		load 
		break main
		c
	

tools/bushound:
	
	used to extract data from bushound log. checkformat.txt is log data from bushound. 


src/powerlab_client:
	windows test program	


