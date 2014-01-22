SUB_DIR1 = "./module1"
SUB_DIR2 = "./module2"
all:
	cd $(SUB_DIR1) && make
	cd $(SUB_DIR2) && make CMD1=cmd_var
clean:
	cd $(SUB_DIR1) && make clean
	cd $(SUB_DIR2) && make clean
