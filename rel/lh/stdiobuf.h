///////////////////////////////////////////////////////////////////////////
// FILE: stdiobuf.h (Standard I/O streams)
//
// =========================================================================
//
//                          Open Watcom Project
//
// Copyright (c) 2002-2016 The Open Watcom Contributors. All Rights Reserved.
// Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
// Description: This header contains a streambuf class that uses the C
//              standard library as its input/output "device".
///////////////////////////////////////////////////////////////////////////
#ifndef _STDIOBUF_H_INCLUDED
#define _STDIOBUF_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifndef __cplusplus
 #error This header file requires C++
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _STDIO_H_INCLUDED
 #include <stdio.h>
#endif

#ifndef _IOSTREAM_H_INCLUDED
 #include <iostream.h>
#endif

// **************************** STDIOBUF *************************************

#pragma pack( __push, 8 )

class _WPRTLINK stdiobuf : public streambuf {
public:
    stdiobuf();
    stdiobuf( FILE *__fptr );
    ~stdiobuf();

    FILE *stdiofile();

    virtual int overflow( int = EOF );
    virtual int underflow();
    virtual int sync();

private:
    FILE *__file_pointer;
    char __unbuffered_get_area[ DEFAULT_PUTBACK_SIZE+1 ];
    int : 0;
};

#pragma pack( __pop )

inline FILE *stdiobuf::stdiofile() {
    return __file_pointer;
}

#endif
