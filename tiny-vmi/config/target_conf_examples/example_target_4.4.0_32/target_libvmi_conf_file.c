/**
* This is an example target configuration file 
* for ubuntu 14.04 with kernel version 4.4.0
* 32-bit system.
*
*/
//#include "target_libvmi_conf_file.h"
#include "config/libvmi_conf_file.h"

/**
* the following char array is auto generated by unix command 
*       $ xxd -i libvmi.conf
* The original libvmi.conf file looks like:

---------- begin file libvmi.conf -------------------
#####################################################
# This file defines the metadata for each xen guest.
# 	Libvmi will use those metadata to introspect the 
# 	Xen guest VM.
#	The data could be got by two steps:
#		1, copy the map file.
#		2, find the offset by running tool in guest.
#####################################################
#
lap14hvm {
	ostype = "Linux";
	sysmap = "/home/smeller/etc/System.map-3.19.0-79-generic";
	linux_name = 0x5a0;
	linux_tasks = 0x338;
	linux_mm = 0x388;
	linux_pid = 0x3f8;
	linux_pgd = 0x40;
}

u1432hvm {
 	ostype = "Linux";
	sysmap = "/home/smeller/etc/System.map-4.4.0-31-generic-32";
	linux_name = 0x3f0;
	linux_tasks = 0x270;
	linux_mm = 0x298;
	linux_pid = 0x308;
	linux_pgd = 0x20;

}

------------ end file libvmi.conf ---------------------

*/

/* 
unsigned char libvmi_conf[] = {
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x0a, 0x23, 0x20, 0x54, 0x68, 0x69, 0x73,
  0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65,
  0x73, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x64, 0x61,
  0x74, 0x61, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x65, 0x61, 0x63, 0x68, 0x20,
  0x78, 0x65, 0x6e, 0x20, 0x67, 0x75, 0x65, 0x73, 0x74, 0x2e, 0x0a, 0x23,
  0x20, 0x09, 0x4c, 0x69, 0x62, 0x76, 0x6d, 0x69, 0x20, 0x77, 0x69, 0x6c,
  0x6c, 0x20, 0x75, 0x73, 0x65, 0x20, 0x74, 0x68, 0x6f, 0x73, 0x65, 0x20,
  0x6d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0x20, 0x74, 0x6f, 0x20,
  0x69, 0x6e, 0x74, 0x72, 0x6f, 0x73, 0x70, 0x65, 0x63, 0x74, 0x20, 0x74,
  0x68, 0x65, 0x20, 0x0a, 0x23, 0x20, 0x09, 0x58, 0x65, 0x6e, 0x20, 0x67,
  0x75, 0x65, 0x73, 0x74, 0x20, 0x56, 0x4d, 0x2e, 0x0a, 0x23, 0x09, 0x54,
  0x68, 0x65, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x63, 0x6f, 0x75, 0x6c,
  0x64, 0x20, 0x62, 0x65, 0x20, 0x67, 0x6f, 0x74, 0x20, 0x62, 0x79, 0x20,
  0x74, 0x77, 0x6f, 0x20, 0x73, 0x74, 0x65, 0x70, 0x73, 0x3a, 0x0a, 0x23,
  0x09, 0x09, 0x31, 0x2c, 0x20, 0x63, 0x6f, 0x70, 0x79, 0x20, 0x74, 0x68,
  0x65, 0x20, 0x6d, 0x61, 0x70, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x2e, 0x0a,
  0x23, 0x09, 0x09, 0x32, 0x2c, 0x20, 0x66, 0x69, 0x6e, 0x64, 0x20, 0x74,
  0x68, 0x65, 0x20, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x20, 0x62, 0x79,
  0x20, 0x72, 0x75, 0x6e, 0x6e, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x6f,
  0x6c, 0x20, 0x69, 0x6e, 0x20, 0x67, 0x75, 0x65, 0x73, 0x74, 0x2e, 0x0a,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
  0x23, 0x23, 0x23, 0x23, 0x23, 0x0a, 0x23, 0x0a, 0x6c, 0x61, 0x70, 0x31,
  0x34, 0x68, 0x76, 0x6d, 0x20, 0x7b, 0x0a, 0x09, 0x6f, 0x73, 0x74, 0x79,
  0x70, 0x65, 0x20, 0x3d, 0x20, 0x22, 0x4c, 0x69, 0x6e, 0x75, 0x78, 0x22,
  0x3b, 0x0a, 0x09, 0x73, 0x79, 0x73, 0x6d, 0x61, 0x70, 0x20, 0x3d, 0x20,
  0x22, 0x2f, 0x68, 0x6f, 0x6d, 0x65, 0x2f, 0x73, 0x6d, 0x65, 0x6c, 0x6c,
  0x65, 0x72, 0x2f, 0x65, 0x74, 0x63, 0x2f, 0x53, 0x79, 0x73, 0x74, 0x65,
  0x6d, 0x2e, 0x6d, 0x61, 0x70, 0x2d, 0x33, 0x2e, 0x31, 0x39, 0x2e, 0x30,
  0x2d, 0x37, 0x39, 0x2d, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x69, 0x63, 0x22,
  0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x6e, 0x61, 0x6d,
  0x65, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x35, 0x61, 0x30, 0x3b, 0x0a, 0x09,
  0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x74, 0x61, 0x73, 0x6b, 0x73, 0x20,
  0x3d, 0x20, 0x30, 0x78, 0x33, 0x33, 0x38, 0x3b, 0x0a, 0x09, 0x6c, 0x69,
  0x6e, 0x75, 0x78, 0x5f, 0x6d, 0x6d, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x33,
  0x38, 0x38, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x70,
  0x69, 0x64, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x33, 0x66, 0x38, 0x3b, 0x0a,
  0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x70, 0x67, 0x64, 0x20, 0x3d,
  0x20, 0x30, 0x78, 0x34, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x75, 0x31,
  0x34, 0x33, 0x32, 0x68, 0x76, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x09, 0x6f,
  0x73, 0x74, 0x79, 0x70, 0x65, 0x20, 0x3d, 0x20, 0x22, 0x4c, 0x69, 0x6e,
  0x75, 0x78, 0x22, 0x3b, 0x0a, 0x09, 0x73, 0x79, 0x73, 0x6d, 0x61, 0x70,
  0x20, 0x3d, 0x20, 0x22, 0x2f, 0x68, 0x6f, 0x6d, 0x65, 0x2f, 0x73, 0x6d,
  0x65, 0x6c, 0x6c, 0x65, 0x72, 0x2f, 0x65, 0x74, 0x63, 0x2f, 0x53, 0x79,
  0x73, 0x74, 0x65, 0x6d, 0x2e, 0x6d, 0x61, 0x70, 0x2d, 0x34, 0x2e, 0x34,
  0x2e, 0x30, 0x2d, 0x33, 0x31, 0x2d, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x69,
  0x63, 0x2d, 0x33, 0x32, 0x22, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75,
  0x78, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x33,
  0x66, 0x30, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x74,
  0x61, 0x73, 0x6b, 0x73, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x32, 0x37, 0x30,
  0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x6d, 0x6d, 0x20,
  0x3d, 0x20, 0x30, 0x78, 0x32, 0x39, 0x38, 0x3b, 0x0a, 0x09, 0x6c, 0x69,
  0x6e, 0x75, 0x78, 0x5f, 0x70, 0x69, 0x64, 0x20, 0x3d, 0x20, 0x30, 0x78,
  0x33, 0x30, 0x38, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f,
  0x70, 0x67, 0x64, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x32, 0x30, 0x3b, 0x0a,
  0x0a, 0x7d, 0x0a, 0x0a
};

unsigned int libvmi_conf_len = 736;
*/


/**
* the following char array is auto generated by unix command 
*       $ xxd -i libvmi.conf
* The original libvmi.conf file looks like:

---------- begin file libvmi.conf -------------------
u1432hvm {
 	ostype = "Linux";
	sysmap = "/home/smeller/etc/System.map-4.4.0-31-generic-32";
	linux_name = 0x3f0;
	linux_tasks = 0x270;
	linux_mm = 0x298;
	linux_pid = 0x308;
	linux_pgd = 0x20;

}

------------ end file libvmi.conf ---------------------

*/

unsigned char libvmi_conf[] = {
  0x75, 0x31, 0x34, 0x33, 0x32, 0x68, 0x76, 0x6d, 0x20, 0x7b, 0x0a, 0x20,
  0x09, 0x6f, 0x73, 0x74, 0x79, 0x70, 0x65, 0x20, 0x3d, 0x20, 0x22, 0x4c,
  0x69, 0x6e, 0x75, 0x78, 0x22, 0x3b, 0x0a, 0x09, 0x73, 0x79, 0x73, 0x6d,
  0x61, 0x70, 0x20, 0x3d, 0x20, 0x22, 0x2f, 0x68, 0x6f, 0x6d, 0x65, 0x2f,
  0x73, 0x6d, 0x65, 0x6c, 0x6c, 0x65, 0x72, 0x2f, 0x65, 0x74, 0x63, 0x2f,
  0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x6d, 0x61, 0x70, 0x2d, 0x34,
  0x2e, 0x34, 0x2e, 0x30, 0x2d, 0x33, 0x31, 0x2d, 0x67, 0x65, 0x6e, 0x65,
  0x72, 0x69, 0x63, 0x2d, 0x33, 0x32, 0x22, 0x3b, 0x0a, 0x09, 0x6c, 0x69,
  0x6e, 0x75, 0x78, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x3d, 0x20, 0x30,
  0x78, 0x33, 0x66, 0x30, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78,
  0x5f, 0x74, 0x61, 0x73, 0x6b, 0x73, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x32,
  0x37, 0x30, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x6d,
  0x6d, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x32, 0x39, 0x38, 0x3b, 0x0a, 0x09,
  0x6c, 0x69, 0x6e, 0x75, 0x78, 0x5f, 0x70, 0x69, 0x64, 0x20, 0x3d, 0x20,
  0x30, 0x78, 0x33, 0x30, 0x38, 0x3b, 0x0a, 0x09, 0x6c, 0x69, 0x6e, 0x75,
  0x78, 0x5f, 0x70, 0x67, 0x64, 0x20, 0x3d, 0x20, 0x30, 0x78, 0x32, 0x30,
  0x3b, 0x0a, 0x0a, 0x7d, 0x0a, 0x0a
};
unsigned int libvmi_conf_len = 198;


