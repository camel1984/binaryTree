#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([binaryTree], [1.0], [wangshuaijie@hotmail.com])
AM_INIT_AUTOMAKE
LT_PREREQ([2.4.2])
LT_INIT
AC_CONFIG_SRCDIR([src/main/main.c])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h stdio.h string.h])

# Checks for command-line options

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile src/Makefile src/include/Makefile src/lib/Makefile src/main/Makefile])
AC_OUTPUT

cat << EOF
-------------------------------------------------

${PACKAGE_NAME} Version ${PACKAGE_VERSION}

Prefix: '${prefix}'.
Compiler: '${CC} ${CFLAGS} ${CPPFLAGS}'
Libraries: '${LIBS}'

Package features:
  Async Execution: ${async_exec}

  Now type 'make @<:@<target>@:>@'
    where the optional <target> is:
      all                - build all binaries
      install            - install everything

--------------------------------------------------
EOF
