MAIN = main 
HEADER_DEFINITIONS = fibonacci
CC = g++-4.9 -std=c++11
COMPILE = -c 
OPTIMIZE = -0s
SHELL = /bin/bash
ARGS = 20
all: link
	@echo "Executing..........."
	@echo "> > > > > > OUTPUT < < < < < <"
	@$(SHELL) -c './$(EXE) *.o'
	link: compile
		@echo -n "Linking............"
		@$(SHELL) -c '$(CC) -o $(EXE) *.o'
		compile: $(MAIN).cpp $(HEADER_DEFINITIONS).cpp
		@echo -n "Compiling............"
		@$(SHELL) -c '$(CC) $(OPTIMIZE) $(COMPILE) $^'
		clean:
		@echo "Cleaning................"
		@$(SHELL) -c 'rm -f *~ *.o $(EXE)'