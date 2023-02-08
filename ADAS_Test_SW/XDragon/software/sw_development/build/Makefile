include Dragons.mak

LD_OPTS = 	-L./delphi -lbsw_1_0_13   	\
			-L./can    -lbsw_can 		\
			-o $(SIMULINK_MODEL).elf 	\
			$(wildcard ./out/*.o) 		\
			./delphi/scg2.dld
 
all: compile link dump

compile: 
	@ if not exist out mkdir out
	$(MAKE) -C appcode
	$(MAKE) -C gluecode
	$(MAKE) -C diag
	$(MAKE) -C can
	$(MAKE) -C delphi

link:
	$(LD) $(LD_FLAGS) $(LD_OPTS) -m6 > $(SIMULINK_MODEL).map

dump:	
	@ $(DUMP) -Nx	$(SIMULINK_MODEL).elf  > $(SIMULINK_MODEL)_Nx.txt
	@ $(DUMP) -t	$(SIMULINK_MODEL).elf  > $(SIMULINK_MODEL)_t.txt
	@ $(DUMP) -h	$(SIMULINK_MODEL).elf  > $(SIMULINK_MODEL)_h.txt
	
	@ $(DUMP) -Nxg	$(SIMULINK_MODEL).elf  > $(SIMULINK_MODEL)_a2l.txt
	
	$(DUMP) $(DUMP_FLAGS)     -o $(SIMULINK_MODEL).s19      $(SIMULINK_MODEL).elf
	
clean:
	@ if exist out  del /f/q out\*.*
	@ if exist out  rmdir out
	@ if exist $(SIMULINK_MODEL)*.*  del /f/q $(SIMULINK_MODEL)*.*

distclean:	clean
	@ if exist appcode\*.h del /f/q appcode\*.h
	@ if exist appcode\*.c del /f/q appcode\*.c
	@ if exist appcode\*.a2l del /f/q appcode\*.a2l

.PHONY : all compile link dump clean distclean
