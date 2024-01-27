subdir = src
top_builddir = ..
includedir = $(top_builddir)/src/include

TARGET = DB

OBJS = \
	$(top_builddir)/$(subdir)/utils/*.o \
	$(top_builddir)/$(subdir)/backend/storage/*.o \
	$(top_builddir)/$(subdir)/backend/master/*.o \
	$(top_builddir)/$(subdir)/backend/main/*.o \
	$(top_builddir)/$(subdir)/backend/access/*.o \
	$(top_builddir)/$(subdir)/backend/parser/*.o \
	$(top_builddir)/$(subdir)/backend/tcop/*.o \
	$(top_builddir)/$(subdir)/backend/catalog/*.o 

	#$(top_builddir)/$(subdir)/backend/executor/*.o \
	#$(top_builddir)/$(subdir)/backend/catalog/*.o


.PHONY: all clean install uninstall

all:
	cd backend ; $(MAKE) -f Makefile 
	cd ..
	cd utils; $(MAKE) -f Makefile
	cd ..
	$(CC) -o $(TARGET) $(OBJS) 

clean:
	rm -rf $(TARGET)
	rm -rf $(top_builddir)/$(subdir)/utils/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/main/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/master/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/storage/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/access/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/parser/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/executor/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/catalog/*.o
	rm -rf $(top_builddir)/$(subdir)/backend/tcop/*.o
	cd backend/parser/ ; rm -rf sql.c sql.h sql.output sql.tab.c sql.tab.h 