all: report

report: report.o temp_api.o
	gcc -o report report.o temp_api.o

report.o: report.c
	gcc -c -o report.o report.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	rm -rf *.o report