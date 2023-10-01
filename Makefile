ALERTS = -Wall -Werror -Wextra

all: text_formatter calculator

calculator: lib_culc_objects lib_culc_static
	gcc calc.c libcalc.a -lm -o calculator $(ALERTS)

lib_culc_static: 
	ar -rcs libcalc.a addition.o division.o fuctorial.o multiplication.o square_root.o subtraction.o

lib_culc_objects: 
	gcc -c addition.c division.c fuctorial.c multiplication.c square_root.c subtraction.c $(ALERTS)

text_formatter: lib_formatter_objects lib_formatter_shared lib_formatter_move
	gcc text_formatter.c -lformatter -o text_formatter $(ALERTS)

lib_formatter_move:
	sudo cp libformatter.so /usr/lib
	sudo chmod 0755 /usr/lib/libformatter.so

lib_formatter_shared:
	gcc -shared -o libformatter.so uper.o low.o $(ALERTS)

lib_formatter_objects:
	gcc -fpic -c uper.c low.c $(ALERTS)

clean_all:
	@rm -rf *.o *.a *.so *.h.gch main
	@sudo rm /usr/lib/libformatter.so