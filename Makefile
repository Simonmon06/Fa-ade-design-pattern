OBJS = main.o Student.o Course.o Storage.o View.o Control.o   Monitor.o GPAMonitor.o FWMonitor.o CourseList.o


sas:	$(OBJS) StuServer.o
	g++ -o sas $(OBJS)  StuServer.o

main.o:	main.cc Student.h defs.h Storage.h
	g++ -c main.cc

Student.o:	Student.cc Student.h Course.h defs.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

Storage.o:	Storage.cc Storage.h
	g++ -c Storage.cc


View.o:	View.cc View.h
	g++ -c View.cc

Control.o:	Control.cc Control.h
	g++ -c Control.cc

Monitor.o:	Monitor.cc Monitor.h
	g++ -c Monitor.cc


FWMonitor.o:	FWMonitor.cc FWMonitor.h
	g++ -c FWMonitor.cc

GPAMonitor.o:	GPAMonitor.cc GPAMonitor.h
	g++ -c GPAMonitor.cc

CourseList.o:	CourseList.cc CourseList.h List.h Course.h
	g++ -c CourseList.cc


clean:
	rm -f  $(OBJS) sas
