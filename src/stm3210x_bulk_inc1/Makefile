all:
	make clean
	make -C build
clean:
	make -C build clean

install:
	cp -f User/template.bin $(rel_dir)
	cp -f User/template.hex $(rel_dir)
	cp -f User/template.elf $(rel_dir)
	cp -f User/template.map $(rel_dir)
