cmd_/home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/linux/dvb/.install := /bin/bash scripts/headers_install.sh /home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/linux/dvb   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/audio.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/ca.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/dmx.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/frontend.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/net.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/osd.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/version.h   /home/devin/buildroot-2014.02/output/build/linux-headers-3.10.32/include/uapi/linux/dvb/video.h ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/linux/dvb/$$F; done; touch /home/devin/buildroot-2014.02/output/host/usr/arm-buildroot-linux-uclibcgnueabihf/sysroot/usr/include/linux/dvb/.install