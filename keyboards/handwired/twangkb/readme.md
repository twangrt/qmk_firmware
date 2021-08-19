# twangkb
This is just my personal keyboard, a handwired planck.

To compile this, just use:

    util/docker_build.sh handwired/twangkb:default

Convert the json from qmk.conf to c:

    qmk json2c <.json> -o keymap.c

Add muse.c to file?
