#ifndef TARGET_LIBVMI_COMMON_H
#define TARGET_LIBVMI_COMMON_H


/**
* define system_map_string for Linux
* change this if use another system map
* all the System_map_* variables are declared here, and
* defined at file /tiny-vmi/config/target_config/target_libvmi_sym.c
* the definition is generated by xxd command which coverts a file
* to ASCII string codes: xxd -i System_map_*

*/


#ifndef SYM_FILE_FROM_STRING
#define SYM_FILE_FROM_STRING
#endif

#ifdef REKALL_FILE_FROM_STRING
#undef REKALL_FILE_FROM_STRING
#endif

#define linux_system_map_string System_map_4_4_0_101_generic
#define linux_system_map_string_len System_map_4_4_0_101_generic_len

extern unsigned char System_map_4_4_0_101_generic[];
extern unsigned int System_map_4_4_0_101_generic_len;


#define linux_system_map_string_SRC_FILE "/tiny-vmi/config/target_config/target_libvmi_sym.c"

#endif // TARGET_LIBVMI_COMMON_H

