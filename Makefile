BUILD_DIR=/usr/local/apache2/build/
APXS=/usr/local/apache2/bin/apxs
MODULE=mod_spamlimit.c

all:
	sudo sed -i 's/\-g//' $(BUILD_DIR)/config_vars.mk; \
	sudo $(APXS) -c $(MODULE)

clean:
	sudo rm -rf .libs *.o *.lo *.so *.la *.a *.slo 

install:
	sudo $(APXS) -cia -n spamlimit $(MODULE)

