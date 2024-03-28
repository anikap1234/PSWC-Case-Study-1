reportcard.exe: reportcard.o report.o
/t/tgcc reportcard.o report.o
report.o : reportcard.c report.h
/t/tgcc -c reportcard.c
report.o : report.c report.h
/t/tgcc -c report.c



