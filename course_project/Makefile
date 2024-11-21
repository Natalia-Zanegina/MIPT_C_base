all: report

report: report.o temp_functions.o
	gcc -o report report.o temp_functions.o

report.o: report.c
	gcc -c -o report.o report.c

temp_functions.o: temp_functions.c
	gcc -c -o temp_functions.o temp_functions.c

clean:
	rm -rf *.o report