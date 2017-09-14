#------------- Compilers and Flags -------------
ifndef DEBUG
# Default: compile for debug
DEBUG=1
endif

# Default C compiler
CC=gcc

# Flags
BASICFLAGS= -std=c11

# Debug Flags
DEBUGFLAGS= -g
# Optional Flags
OPTFLAGS= -g -finline -march=native -O3 -DNDEBUG

INCLUDE_PATH=-I${SRC_DIR}

CFLAGS= -Wall -D_GNU_SOURCE $(BASICFLAGS) $(INCLUDE_PATH)

ifeq ($(DEBUG),1)
CFLAGS+=  $(DEBUGFLAGS)
else
CFLAGS+=  $(OPTFLAGS)
endif

#Flex
FLEX=flex
F_LIBS=-lfl

#Bison
BISON=bison
BISON_LIB=-d -v -r all --report=solved



SRC_DIR=.

#-------------------- Files --------------------
SOURCES= cgen.c
# File Dependancies
FCC_depen= lex.yy.c cgen.c myanalyzer.tab.c

FCC_lexdepen= mylexer.l cgen.h myanalyzer.tab.h

FCC_bisondepen= myanalyzer.y cgen.h

# Generated files
FLEX_OUTPUT= lex.yy.c

BISON_OUTPUT= myanalyzer.tab.h myanalyzer.tab.c myanalyzer.output

EXECUTABLE= fcc

GEN= ${FLEX_OUTPUT} ${BISON_OUTPUT} ${EXECUTABLE}
#-----------------------------------------------

# Rules

.PHONY:	all	clean

all: fcc

fcc: ${FCC_depen}
	${CC} $(CFLAGS) -o $@ $^ ${F_LIBS}

lex.yy.c: ${FCC_lexdepen}
	$(FLEX) -o $@ $<

myanalyzer.tab.c myanalyzer.tab.h: ${FCC_bisondepen}
		$(BISON) ${BISON_LIB} $<

depend: .depend

.depend: $(SOURCES)
		        rm -f ./.depend
		        $(CC) $(CFLAGS) -MM $^>>./.depend;

include .depend

# Cleaning Project files
clean: realClean cleanDepend

cleanDepend:
	@echo "Cleaning .depend file"
	@rm .depend
	@echo Done
	@echo

realClean:
	@echo
	@echo "Cleaning object files"
	@rm  ${SRC_DIR}/${GEN}
	@echo Done
	@echo
