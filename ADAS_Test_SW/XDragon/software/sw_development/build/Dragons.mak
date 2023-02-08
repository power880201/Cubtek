WIND_DIAB_PATH ?= C:\WindRiver\diab\5.8.0.0
SHELL = cmd

MATLAB_ROOT ?= C:\Program Files\MATLAB\R2007b
MATLAB_INC = \
	-I"$(MATLAB_ROOT)\extern\include" \
	-I"$(MATLAB_ROOT)\rtw\c\src" \
	-I"$(MATLAB_ROOT)\rtw\c\libsrc" \

SIMULINK_MODEL ?= hcu_main

CC = "$(WIND_DIAB_PATH)\WIN32\bin\dcc.exe"
CFLAGS = -tPPC5554EG:simple 

CFLAGS += \
		-ei1517\
		-ei1560\
		-g3\
		-Xkill-opt=0x80000\
		-Xforce-declarations\
		-Xforce-prototypes\
		-Xlint\
		-Xno-recognize-lib\
		-Xargs-in-regs\
		-Xstruct-min-align=1\
		-Xmember-max-align=1\
		-Xunroll=16\
		-Xunroll-size=160\
		-Xparse-size=12000\
		-Xenum-is-best\
		-Xkeywords=0x1c\
		-Xsmall-data=0\
		-Xsmall-const=0\
		-Xno-common\
		-Xlocal-struct=0\
		-Wa,-WDDOBJECT=E\
		-Xdebug-struct-compact\
		-Xold-inline-asm-casting\
		-Xpass-source\
		-Xmismatch-warning\
		-Xstring-align=1\
		-Xkill-reorder=9\
		-Xdialect-ansi\
		-Xstsw-slow

LD = "$(WIND_DIAB_PATH)\WIN32\bin\dld.exe"
LD_FLAGS = -tPPC5554EG:simple -lm -lc

DUMP = "$(WIND_DIAB_PATH)\WIN32\bin\ddump.exe"
DUMP_FLAGS += -R -m3 -w16 -v
