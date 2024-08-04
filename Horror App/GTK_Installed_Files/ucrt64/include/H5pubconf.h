/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://www.hdfgroup.org/licenses.               *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/* H5pubconf.h  Generated By CMake during the configuration */

#ifndef H5_CONFIG_H_
#define H5_CONFIG_H_

/* Define if the Windows virtual file driver should be compiled */
#define H5_HAVE_WINDOWS 1

/* Define if using MinGW */
#define H5_HAVE_MINGW 1

/* Define if on the Windows platform and default WIN32 API */
#define H5_HAVE_WIN32_API 1

/* Define if using a Windows compiler (i.e. Visual Studio) */
/* #undef H5_HAVE_VISUAL_STUDIO */

/* Define if C++ compiler recognizes offsetof */
/* #undef H5_CXX_HAVE_OFFSETOF */

/* Define the default plugins path to compile */
#define H5_DEFAULT_PLUGINDIR "%ALLUSERSPROFILE%\\hdf5\\lib\\plugin"

/* Define if dev_t is a scalar */
#define H5_DEV_T_IS_SCALAR 1

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef H5_FC_DUMMY_MAIN */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef H5_FC_DUMMY_MAIN_EQ_F77 */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define H5_FC_FUNC(name,NAME) name##_

/* As FC_FUNC, but for C identifiers containing underscores. */
#define H5_FC_FUNC_(name,NAME) name##_

/* Define if Fortran C_LONG_DOUBLE is different from C_DOUBLE */
#define H5_FORTRAN_C_LONG_DOUBLE_IS_UNIQUE 1

/* Define if we have Fortran C_LONG_DOUBLE */
#define H5_FORTRAN_HAVE_C_LONG_DOUBLE 1

/* Define if we have Fortran intrinsic C_SIZEOF */
#define H5_FORTRAN_HAVE_C_SIZEOF 1

/* Define if we have Fortran intrinsic SIZEOF */
#define H5_FORTRAN_HAVE_SIZEOF 1

/* Define if we have Fortran intrinsic STORAGE_SIZE */
#define H5_FORTRAN_HAVE_STORAGE_SIZE 1

/* Determine the size of C long double */
#define H5_FORTRAN_SIZEOF_LONG_DOUBLE 16

/* Define Fortran compiler ID */
#define H5_Fortran_COMPILER_ID GNU

/* Define valid Fortran INTEGER KINDs */
#define H5_H5CONFIG_F_IKIND INTEGER, DIMENSION(1:num_ikinds) :: ikind = (/1,2,4,8,16/)

/* Define number of valid Fortran INTEGER KINDs */
#define H5_H5CONFIG_F_NUM_IKIND INTEGER, PARAMETER :: num_ikinds = 5

/* Define number of valid Fortran REAL KINDs */
#define H5_H5CONFIG_F_NUM_RKIND INTEGER, PARAMETER :: num_rkinds = 4

/* Define valid Fortran REAL KINDs */
#define H5_H5CONFIG_F_RKIND INTEGER, DIMENSION(1:num_rkinds) :: rkind = (/4,8,10,16/)

/* Define valid Fortran REAL KINDs Sizeof */
#define H5_H5CONFIG_F_RKIND_SIZEOF INTEGER, DIMENSION(1:num_rkinds) :: rkind_sizeof = (/4,8,16,16/)

/* Define to 1 if you have the `alarm' function. */
#define H5_HAVE_ALARM 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef H5_HAVE_ARPA_INET_H */

/* Define to 1 if you have the `asprintf' function. */
#define H5_HAVE_ASPRINTF 1

/* Define if the __attribute__(()) extension is present */
#define H5_HAVE_ATTRIBUTE 1

/* Define if the compiler understands C99 designated initialization of structs
   and unions */
#define H5_HAVE_C99_DESIGNATED_INITIALIZER 1

/* Define if the compiler understands the __func__ keyword */
#define H5_HAVE_C99_FUNC 1

/* Define to 1 if you have the `clock_gettime' function. */
#define H5_HAVE_CLOCK_GETTIME 1

/* Define if the function stack tracing code is to be compiled in */
/* #undef H5_HAVE_CODESTACK */

/* Define to 1 if you have the <curl/curl.h> header file. */
/* #undef H5_HAVE_CURL_H */

/* Define if Darwin or Mac OS X */
/* #undef H5_HAVE_DARWIN */

/* Define to 1 if you have the `difftime' function. */
/* #undef H5_HAVE_DIFFTIME */

/* Define if the direct I/O virtual file driver (VFD) should be compiled */
/* #undef H5_HAVE_DIRECT */

/* Define to 1 if you have the <dirent.h> header file. */
#define H5_HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef H5_HAVE_DLFCN_H */

/* Define to 1 if you have the <dmalloc.h> header file. */
/* #undef H5_HAVE_DMALLOC_H */

/* Define if library information should be embedded in the executables */
#define H5_HAVE_EMBEDDED_LIBINFO 1

/* Define to 1 if you have the `fcntl' function. */
/* #undef H5_HAVE_FCNTL */

/* Define to 1 if you have the <features.h> header file. */
/* #undef H5_HAVE_FEATURES_H */

/* Define if support for deflate (zlib) filter is enabled */
#define H5_HAVE_FILTER_DEFLATE 1

/* Define if support for szip filter is enabled */
#define H5_HAVE_FILTER_SZIP 1

/* Determine if __float128 is available */
#define H5_HAVE_FLOAT128 1

/* Define to 1 if you have the `flock' function. */
/* #undef H5_HAVE_FLOCK */

/* Define to 1 if you have the `fork' function. */
/* #undef H5_HAVE_FORK */

/* Define to 1 if you have the `frexpf' function. */
#define H5_HAVE_FREXPF 1

/* Define to 1 if you have the `frexpl' function. */
#define H5_HAVE_FREXPL 1

/* Define to 1 if you have the `fseeko' function. */
#define H5_HAVE_FSEEKO 1

/* Define if the compiler understands the __FUNCTION__ keyword */
#define H5_HAVE_FUNCTION 1

/* Determine if INTEGER*16 is available */
#define H5_HAVE_Fortran_INTEGER_SIZEOF_16 1

/* Define to 1 if you have the `GetConsoleScreenBufferInfo' function. */
#define H5_HAVE_GETCONSOLESCREENBUFFERINFO 1

/* Define to 1 if you have the `gethostname' function. */
/* #undef H5_HAVE_GETHOSTNAME */

/* Define to 1 if you have the `getpwuid' function. */
/* #undef H5_HAVE_GETPWUID */

/* Define to 1 if you have the `getrusage' function. */
/* #undef H5_HAVE_GETRUSAGE */

/* Define to 1 if you have the `gettextinfo' function. */
/* #undef H5_HAVE_GETTEXTINFO */

/* Define to 1 if you have the `gettimeofday' function. */
#define H5_HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <hdfs.h> header file. */
/* #undef H5_HAVE_HDFS_H */

/* Define if the compiler understands inline */
#define H5_HAVE_INLINE 1

/* Define if parallel library will contain instrumentation to detect correct
   optimization operation */
/* #undef H5_HAVE_INSTRUMENTED_LIBRARY */

/* Define to 1 if you have the <inttypes.h> header file. */
#define H5_HAVE_INTTYPES_H 1

/* Define to 1 if you have the `ioctl' function. */
/* #undef H5_HAVE_IOCTL */

/* Define to 1 if you have the <io.h> header file. */
#define H5_HAVE_IO_H 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
/* #undef H5_HAVE_LIBCRYPTO */

/* Define to 1 if you have the `curl' library (-lcurl). */
/* #undef H5_HAVE_LIBCURL */

/* Define to 1 if you have the `dl' library (-ldl). */
/* #undef H5_HAVE_LIBDL */

/* Define to 1 if you have the `dmalloc' library (-ldmalloc). */
/* #undef H5_HAVE_LIBDMALLOC */

/* Proceed to build with libhdfs */
/* #undef H5_HAVE_LIBHDFS */

/* Define to 1 if you have the `jvm' library (-ljvm). */
/* #undef H5_HAVE_LIBJVM */

/* Define to 1 if you have the `m' library (-lm). */
#define H5_HAVE_LIBM 1

/* Define to 1 if you have the `mpe' library (-lmpe). */
/* #undef H5_HAVE_LIBMPE */

/* Define to 1 if you have the `pthread' library (-lpthread). */
/* #undef H5_HAVE_LIBPTHREAD */

/* Define to 1 if you have the `sz' library (-lsz). */
#define H5_HAVE_LIBSZ 1

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
#define H5_HAVE_LIBWS2_32 1

/* Define to 1 if you have the `z' library (-lz). */
#define H5_HAVE_LIBZ 1

/* Define to 1 if you have the `llround' function. */
#define H5_HAVE_LLROUND 1

/* Define to 1 if you have the `llroundf' function. */
#define H5_HAVE_LLROUNDF 1

/* Define to 1 if you have the `longjmp' function. */
#define H5_HAVE_LONGJMP 1

/* Define to 1 if you have the `lround' function. */
#define H5_HAVE_LROUND 1

/* Define to 1 if you have the `lroundf' function. */
#define H5_HAVE_LROUNDF 1

/* Define to 1 if you have the `lseek64' function. */
#define H5_HAVE_LSEEK64 1

/* Define to 1 if you have the `lstat' function. */
/* #undef H5_HAVE_LSTAT */

/* Define if the map API (H5M) should be compiled */
/* #undef H5_HAVE_MAP_API */

/* Define to 1 if you have the <memory.h> header file. */
#define H5_HAVE_MEMORY_H 1

/* Define whether the Mirror virtual file driver (VFD) will be compiled */
/* #undef H5_HAVE_MIRROR_VFD */

/* Define if we have MPE support */
/* #undef H5_HAVE_MPE */

/* Define to 1 if you have the <mpe.h> header file. */
/* #undef H5_HAVE_MPE_H */

/* Define if MPI_Comm_c2f and MPI_Comm_f2c exist */
/* #undef H5_HAVE_MPI_MULTI_LANG_Comm */

/* Define if MPI_Info_c2f and MPI_Info_f2c exist */
/* #undef H5_HAVE_MPI_MULTI_LANG_Info */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef H5_HAVE_NETDB_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef H5_HAVE_NETINET_IN_H */

/* Define to 1 if you have the <openssl/evp.h> header file. */
/* #undef H5_HAVE_OPENSSL_EVP_H */

/* Define to 1 if you have the <openssl/hmac.h> header file. */
/* #undef H5_HAVE_OPENSSL_HMAC_H */

/* Define to 1 if you have the <openssl/sha.h> header file. */
/* #undef H5_HAVE_OPENSSL_SHA_H */

/* Define if we have parallel support */
/* #undef H5_HAVE_PARALLEL */

/* Define if both pread and pwrite exist. */
/* #undef H5_HAVE_PREADWRITE */

/* Define to 1 if you have the <pthread.h> header file. */
#define H5_HAVE_PTHREAD_H 1

/* Define to 1 if you have the <quadmath.h> header file. */
#define H5_HAVE_QUADMATH_H 1

/* Define to 1 if you have the `random' function. */
/* #undef H5_HAVE_RANDOM */

/* Define to 1 if you have the `rand_r' function. */
/* #undef H5_HAVE_RAND_R */

/* Define whether the Read-Only S3 virtual file driver (VFD) should be
   compiled */
/* #undef H5_HAVE_ROS3_VFD */

/* Define to 1 if you have the `round' function. */
#define H5_HAVE_ROUND 1

/* Define to 1 if you have the `roundf' function. */
#define H5_HAVE_ROUNDF 1

/* Define to 1 if you have the `setjmp' function. */
#define H5_HAVE_SETJMP 1

/* Define to 1 if you have the <setjmp.h> header file. */
#define H5_HAVE_SETJMP_H 1

/* Define to 1 if you have the `setsysinfo' function. */
/* #undef H5_HAVE_SETSYSINFO */

/* Define to 1 if you have the `siglongjmp' function. */
/* #undef H5_HAVE_SIGLONGJMP */

/* Define to 1 if you have the `signal' function. */
#define H5_HAVE_SIGNAL 1

/* Define to 1 if you have the `sigprocmask' function. */
/* #undef H5_HAVE_SIGPROCMASK */

/* Define to 1 if you have the `sigsetjmp' function. */
/* #undef H5_HAVE_SIGSETJMP */

/* Define to 1 if you have the `snprintf' function. */
#define H5_HAVE_SNPRINTF 1

/* Define to 1 if you have the `srandom' function. */
/* #undef H5_HAVE_SRANDOM */

/* Define to 1 if you have the `stat64' function. */
/* #undef H5_HAVE_STAT64 */

/* Define if `struct stat' has the `st_blocks' field */
/* #undef H5_HAVE_STAT_ST_BLOCKS */

/* Define to 1 if you have the <stdbool.h> header file. */
#define H5_HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define H5_HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define H5_HAVE_STDINT_H 1

/* Define to 1 if you have the <stdint.h> header file for Cplusplus. */
#define H5_HAVE_STDINT_H_CXX 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define H5_HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define H5_HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define H5_HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define H5_HAVE_STRING_H 1

/* Define to 1 if you have the `strtoll' function. */
#define H5_HAVE_STRTOLL 1

/* Define to 1 if you have the `strtoull' function. */
#define H5_HAVE_STRTOULL 1

/* Define if struct text_info is defined */
/* #undef H5_HAVE_STRUCT_TEXT_INFO */

/* Define if struct videoconfig is defined */
/* #undef H5_HAVE_STRUCT_VIDEOCONFIG */

/* Define to 1 if you have the `symlink' function. */
/* #undef H5_HAVE_SYMLINK */

/* Define to 1 if you have the `system' function. */
#define H5_HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define H5_HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef H5_HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef H5_HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef H5_HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define H5_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define H5_HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define H5_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <szlib.h> header file. */
#define H5_HAVE_SZLIB_H 1

#if defined(_WIN32) && !defined(H5_BUILT_AS_DYNAMIC_LIB)
/* Not supported on WIN32 platforms with static linking */
/* #undef H5_HAVE_THREADSAFE */
#else
/* Define if we have thread safe support */
/* #undef H5_HAVE_THREADSAFE */
#endif

/* Define if timezone is a global variable */
#define H5_HAVE_TIMEZONE 1

/* Define if the ioctl TIOCGETD is defined */
/* #undef H5_HAVE_TIOCGETD */

/* Define if the ioctl TIOGWINSZ is defined */
/* #undef H5_HAVE_TIOCGWINSZ */

/* Define to 1 if you have the `tmpfile' function. */
#define H5_HAVE_TMPFILE 1

/* Define if tm_gmtoff is a member of struct tm */
/* #undef H5_HAVE_TM_GMTOFF */

/* Define to 1 if you have the <unistd.h> header file. */
#define H5_HAVE_UNISTD_H 1

/* Define to 1 if you have the `vasprintf' function. */
#define H5_HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define H5_HAVE_VSNPRINTF 1

/* Define to 1 if you have the `waitpid' function. */
/* #undef H5_HAVE_WAITPID */

/* Define to 1 if you have the 'InitOnceExecuteOnce' function. */
/* #undef H5_HAVE_WIN_THREADS */

/* Define if your system has window style path name. */
#define H5_HAVE_WINDOW_PATH 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define H5_HAVE_WINSOCK2_H 1

/* Define to 1 if you have the <zlib.h> header file. */
#define H5_HAVE_ZLIB_H 1

/* Define to 1 if you have the `_getvideoconfig' function. */
/* #undef H5_HAVE__GETVIDEOCONFIG */

/* Define to 1 if you have the `_scrsize' function. */
/* #undef H5_HAVE__SCRSIZE */

/* Define if the compiler understands __inline */
#define H5_HAVE___INLINE 1

/* Define if the compiler understands __inline__ */
#define H5_HAVE___INLINE__ 1

/* Define if the library will ignore file locks when disabled */
#define H5_IGNORE_DISABLED_FILE_LOCKS 1

/* Define if the high-level library headers should be included in hdf5.h */
#define H5_INCLUDE_HL 1

/* Define if your system can convert long double to (unsigned) long long
   values correctly. */
#define H5_LDOUBLE_TO_LLONG_ACCURATE 1

/* Define if your system converts long double to (unsigned) long values with
   special algorithm. */
/* #undef H5_LDOUBLE_TO_LONG_SPECIAL */

/* Define if your system can convert (unsigned) long long to long double
   values correctly. */
#define H5_LLONG_TO_LDOUBLE_CORRECT 1

/* Define if your system can convert (unsigned) long to long double values
   with special algorithm. */
/* #undef H5_LONG_TO_LDOUBLE_SPECIAL */

/* Define if your system is power6 and cannot convert some long double values. */
/* #undef H5_DISABLE_SOME_LDOUBLE_CONV */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
/* #undef H5_LT_OBJDIR */

/* Define to enable internal memory allocation sanity checking. */
/* #undef H5_MEMORY_ALLOC_SANITY_CHECK */

/* Define if we can violate pointer alignment restrictions */
#define H5_NO_ALIGNMENT_RESTRICTIONS 1

/* Define if deprecated public API symbols are disabled */
/* #undef H5_NO_DEPRECATED_SYMBOLS */

/* Name of package */
#define H5_PACKAGE "hdf5"

/* Define to the address where bug reports for this package should be sent. */
#define H5_PACKAGE_BUGREPORT "help@hdfgroup.org"

/* Define to the full name of this package. */
#define H5_PACKAGE_NAME "HDF5"

/* Define to the full name and version of this package. */
#define H5_PACKAGE_STRING "HDF5 1.12.1"

/* Define to the one symbol short name of this package. */
#define H5_PACKAGE_TARNAME "hdf5"

/* Define to the home page for this package. */
#define H5_PACKAGE_URL "http://www.hdfgroup.org"

/* Define to the version of this package. */
#define H5_PACKAGE_VERSION "1.12.1"

/* Determine the maximum decimal precision in C */
#define H5_PAC_C_MAX_REAL_PRECISION 33

/* Define Fortran Maximum Real Decimal Precision */
#define H5_PAC_FC_MAX_REAL_PRECISION 33

/* Width for printf() for type `long long' or `__int64', use `ll' */
#define H5_PRINTF_LL_WIDTH "I64"

/* The size of `bool', as computed by sizeof. */
#define H5_SIZEOF_BOOL 1

/* The size of `char', as computed by sizeof. */
#define H5_SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define H5_SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define H5_SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define H5_SIZEOF_INT 4

/* The size of `int16_t', as computed by sizeof. */
#define H5_SIZEOF_INT16_T 2

/* The size of `int32_t', as computed by sizeof. */
#define H5_SIZEOF_INT32_T 4

/* The size of `int64_t', as computed by sizeof. */
#define H5_SIZEOF_INT64_T 8

/* The size of `int8_t', as computed by sizeof. */
#define H5_SIZEOF_INT8_T 1

/* The size of `int_fast16_t', as computed by sizeof. */
#define H5_SIZEOF_INT_FAST16_T 2

/* The size of `int_fast32_t', as computed by sizeof. */
#define H5_SIZEOF_INT_FAST32_T 4

/* The size of `int_fast64_t', as computed by sizeof. */
#define H5_SIZEOF_INT_FAST64_T 8

/* The size of `int_fast8_t', as computed by sizeof. */
#define H5_SIZEOF_INT_FAST8_T 1

/* The size of `int_least16_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST16_T 2

/* The size of `int_least32_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST32_T 4

/* The size of `int_least64_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST64_T 8

/* The size of `int_least8_t', as computed by sizeof. */
#define H5_SIZEOF_INT_LEAST8_T 1

#if !defined(__APPLE__)

/* The size of `size_t', as computed by sizeof. */
#define H5_SIZEOF_SIZE_T 8

/* The size of `ssize_t', as computed by sizeof. */
#define H5_SIZEOF_SSIZE_T 8

/* The size of `long', as computed by sizeof. */
#define H5_SIZEOF_LONG 4

/* The size of `long double', as computed by sizeof. */
#define H5_SIZEOF_LONG_DOUBLE 16

#else

  /* On Apple, to support Universal Binaries (where multiple CPU
     architectures exist in one library/executable), we can't assume
     the machine doing the compiling has the same endianness or type
     sizes as all the various architectures (PowerPC, Intel, ARM). */

  # if defined(__LP64__) && __LP64__
  #define H5_SIZEOF_LONG 8
  #define H5_SIZEOF_SIZE_T 8
  #define H5_SIZEOF_SSIZE_T 8
  # else
  #define H5_SIZEOF_LONG 4
  #define H5_SIZEOF_SIZE_T 4
  #define H5_SIZEOF_SSIZE_T 4
  # endif

  # if defined(__i386__) || defined(__x86_64__)
  #define H5_SIZEOF_LONG_DOUBLE 16
  # elif defined(__aarch64__)
  #define H5_SIZEOF_LONG_DOUBLE 8
  # else
  #define H5_SIZEOF_LONG_DOUBLE 16
  # endif

#endif

/* Define size of long long and/or __int64 bit integer type only if the type
   exists.  */
#if !defined(__APPLE__)
 #define H5_SIZEOF_LONG_LONG 8
#else
 #define H5_SIZEOF_LONG_LONG 8
#endif

/* The size of `off64_t', as computed by sizeof. */
#define H5_SIZEOF_OFF64_T 8

/* The size of `off_t', as computed by sizeof. */
#define H5_SIZEOF_OFF_T 8

/* The size of `ptrdiff_t', as computed by sizeof. */
#define H5_SIZEOF_PTRDIFF_T 8

/* The size of `short', as computed by sizeof. */
#define H5_SIZEOF_SHORT 2

/* The size of `time_t', as computed by sizeof. */
#define H5_SIZEOF_TIME_T 8

/* The size of `uint16_t', as computed by sizeof. */
#define H5_SIZEOF_UINT16_T 2

/* The size of `uint32_t', as computed by sizeof. */
#define H5_SIZEOF_UINT32_T 4

/* The size of `uint64_t', as computed by sizeof. */
#define H5_SIZEOF_UINT64_T 8

/* The size of `uint8_t', as computed by sizeof. */
#define H5_SIZEOF_UINT8_T 1

/* The size of `uint_fast16_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_FAST16_T 2

/* The size of `uint_fast32_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_FAST32_T 4

/* The size of `uint_fast64_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_FAST64_T 8

/* The size of `uint_fast8_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_FAST8_T 1

/* The size of `uint_least16_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST16_T 2

/* The size of `uint_least32_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST32_T 4

/* The size of `uint_least64_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST64_T 8

/* The size of `uint_least8_t', as computed by sizeof. */
#define H5_SIZEOF_UINT_LEAST8_T 1

/* The size of `unsigned', as computed by sizeof. */
#define H5_SIZEOF_UNSIGNED 4

/* The size of `_Quad', as computed by sizeof. */
#define H5_SIZEOF__QUAD 0

/* The size of `__float128', as computed by sizeof. */
#define H5_SIZEOF___FLOAT128 16

/* The size of `__int64', as computed by sizeof. */
#define H5_SIZEOF___INT64 8

/* Define to 1 if you have the ANSI C header files. */
#define H5_STDC_HEADERS 1

/* Define if strict file format checks are enabled */
/* #undef H5_STRICT_FORMAT_CHECKS */

/* Define if your system supports pthread_attr_setscope(&attribute,
   PTHREAD_SCOPE_SYSTEM) call. */
#define H5_SYSTEM_SCOPE_THREADS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define H5_TIME_WITH_SYS_TIME 1

/* Define using v1.6 public API symbols by default */
/* #undef H5_USE_16_API_DEFAULT */

/* Define using v1.8 public API symbols by default */
/* #undef H5_USE_18_API_DEFAULT */

/* Define using v1.10 public API symbols by default */
/* #undef H5_USE_110_API_DEFAULT */

/* Define using v1.12 public API symbols by default */
#define H5_USE_112_API_DEFAULT 1

/* Define if the library will use file locking */
#define H5_USE_FILE_LOCKING 1

/* Define if the library will use recursive RW locks for thread safety */
/* #undef H5_USE_RECURSIVE_RW_LOCKS */

/* Define if a memory checking tool will be used on the library, to cause
   library to be very picky about memory operations and also disable the
   internal free list manager code. */
/* #undef H5_USING_MEMCHECKER */

/* Version number of package */
#define H5_VERSION "1.12.1"

/* Data accuracy is prefered to speed during data conversions */
#define H5_WANT_DATA_ACCURACY 1

/* Check exception handling functions during data conversions */
#define H5_WANT_DCONV_EXCEPTION 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if !defined(__APPLE__)
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#else
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#endif

/* #undef WORDS_BIGENDIAN */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef H5__FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef H5__LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef H5_const */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef H5_off_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef H5_ptrdiff_t */

/* Define to `unsigned long' if <sys/types.h> does not define. */
/* #undef H5_size_t */

/* Define to `long' if <sys/types.h> does not define. */
/* #undef H5_ssize_t */

#endif
