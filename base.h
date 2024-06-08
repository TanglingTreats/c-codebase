#ifndef BASE_H
#define BASE_H

#if defined(__GNUC__)
#define COMPILER_GCC 1

#if defined(_M_AMD64)
#define ARCH_X64 1
#elif defined(__aarch64__)
#define ARCH_ARM64 1
#else
#error missing ARCH detection
#endif

#if defined(__APPLE__) && defined(__MACH__)
#define OS_MAC 1
#elif defined(__gnu_linux__)
#define OS_LINUX 1
#else
#error missing OS detection
#endif

#endif

// NOT DEFINES
#if !defined(__GNUC__)
#define COMPILER_GCC 0
#endif

#if !defined(_M_AMD64)
#define ARCH_X64 0
#endif

#if !defined(__aarch64__)
#define ARCH_ARM64 0
#endif

#if !defined(__APPLE__) && !defined(__MACH__)
#define OS_MAC 0
#endif

#if !defined(__gnu_linux__)
#define OS_LINUX 0
#endif

#endif // BASE_H
