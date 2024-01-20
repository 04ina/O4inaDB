subdir = src
top_builddir = ..
includedir = $(top_builddir)/src/include

TARGET = DB

OBJS = \
	$(top_builddir)/$(subdir)/utils/*.o \
	$(top_builddir)/$(subdir)/backend/storage/*.o \
	$(top_builddir)/$(subdir)/backend/master/*.o \
	$(top_builddir)/$(subdir)/backend/main/*.o \
	$(top_builddir)/$(subdir)/backend/access/*.o


.PHONY: all clean install uninstall

all:
	cd backend ; $(MAKE) -f Makefile 
	cd ..
	cd utils; $(MAKE) -f Makefile
	cd ..
	$(CC) -o $(TARGET) $(OBJS) 

clean:
	rm -rf $(TARGET) $(top_builddir)/$(subdir)/utils/*.o
	rm -rf $(TARGET) $(top_builddir)/$(subdir)/backend/main/*.o
	rm -rf $(TARGET) $(top_builddir)/$(subdir)/backend/master/*.o
	rm -rf $(TARGET) $(top_builddir)/$(subdir)/backend/storage/*.o
	rm -rf $(TARGET) $(top_builddir)/$(subdir)/backend/access/*.o
