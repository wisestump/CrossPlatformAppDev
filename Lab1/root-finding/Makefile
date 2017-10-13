SUBDIRS = bin lib
out = ../build/_out

.PHONY: subdirs $(SUBDIRS) clean

subdirs: $(SUBDIRS)

$(SUBDIRS):
		mkdir -p $(out)
		$(MAKE) -C $@

bin: lib

clean:
		rm -rf $(out)
