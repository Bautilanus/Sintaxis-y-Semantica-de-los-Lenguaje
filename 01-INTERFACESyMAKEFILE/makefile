#comentario
all:
	Conversion ConversionTest TablasDeConversion

TablasDeConversion:  
	gcc  TablasDeConversion.c  -o TablasDeConversion 

TablasDeConversion.o: TablasDeConversion.c
	gcc -c TablasDeConversion.o

Conversion:
	gcc Conversion.c -o Conversion

Conversion.o:
	gcc -c Conversion.o

ConversionTest: 
	gcc ConversionTest.c -o ConversionTest

ConversionTest.o:
	gcc -c ConversionTest.o
	
clean:
	rm -f Conversion TablasDeConversion ConversionTest *.o