SUBDIRS = bin lib
out = ../_out

.PHONY: subdirs $(SUBDIRS) clean

subdirs: $(SUBDIRS)

$(SUBDIRS):
		mkdir -p $(out)
		$(MAKE) -C $@

bin: lib

clean:
		rm -rf ../_out
