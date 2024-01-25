subdir = src/backend
top_builddir = ../..
includedir = $(top_builddir)/src/include

.PHONY: all clean install uninstall

all:
	cd main ; $(MAKE) -f Makefile  
	cd ..
	cd master ; $(MAKE) -f Makefile
	cd ..
	cd storage ; $(MAKE) -f Makefile
	cd ..
	cd access ; $(MAKE) -f Makefile
	cd ..
	cd parser ; $(MAKE) -f Makefile
	cd ..
	#cd executor ; $(MAKE) -f Makefile
	#cd ..
	cd catalog ; $(MAKE) -f Makefile
	cd ..
	cd tcop ; $(MAKE) -f Makefile
	cd ..

#	$(call make_dir, main)
#	$(call make_dir, master)
#	$(call make_dir, storage)
#	$(call make_dir, access)

#clean:
#	rm -rf $(TARGET) $(top_builddir)/$(subdir)/main/*.o
#	rm -rf $(TARGET) $(top_builddir)/$(subdir)/master/*.o
#	rm -rf $(TARGET) $(top_builddir)/$(subdir)/storage/*.o
