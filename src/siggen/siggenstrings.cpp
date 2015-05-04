//
// The developer of the original code and/or files is Tripwire, Inc.
// Portions created by Tripwire, Inc. are copyright (C) 2000 Tripwire,
// Inc. Tripwire is a registered trademark of Tripwire, Inc.  All rights
// reserved.
// 
// This program is free software.  The contents of this file are subject
// to the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version.  You may redistribute it and/or modify it
// only in compliance with the GNU General Public License.
// 
// This program is distributed in the hope that it will be useful.
// However, this program is distributed AS-IS WITHOUT ANY
// WARRANTY; INCLUDING THE IMPLIED WARRANTY OF MERCHANTABILITY OR FITNESS
// FOR A PARTICULAR PURPOSE.  Please see the GNU General Public License
// for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.
// 
// Nothing in the GNU General Public License or any other license to use
// the code or files shall permit you to use Tripwire's trademarks,
// service marks, or other intellectual property without Tripwire's
// prior written consent.
// 
// If you have any questions, please contact Tripwire, Inc. at either
// info@tripwire.org or www.tripwire.org.
//
//
// Name....: siggenstrings.cpp
// Date....: 5/12/99
// Creator.: Brian McFeely (bmcfeely)
//

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Dependencies
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include "stdsiggen.h"
#include "siggenstrings.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// String Table
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

TSS_BeginStringtable( cSiggen )

	TSS_StringEntry( siggen::STR_SIGGEN_USAGE,
                   _T("Usage:  siggen [options] file1 [file2...]\n")
                _T("\n")
                _T("  -t                   --terse\n")
		        _T("  -h                   --hexadecimal\n")
                _T("  -a                   --all\n")
                _T("  -C                   --CRC32\n")
                _T("  -M                   --MD5\n")
                _T("  -S                   --SHA\n")
                _T("  -H                   --HAVAL\n")
                _T("file1 [file 2 ...]\n")
                _T("\n")
              ),
	TSS_StringEntry( siggen::STR_SIGGEN_VERSION,        _T("siggen: Display signature function values. \n")),
    TSS_StringEntry( siggen::STR_ERR_OPEN_FAILED,	    _T("File could not be opened") ),
    TSS_StringEntry( siggen::STR_ERR_NO_FILE,	        _T("File does not exist") ),
    TSS_StringEntry( siggen::STR_SIGGEN_NOT_REG_FILE,   _T(" is not a regular file; ignoring.") )
    
TSS_EndStringtable( cSiggen )

// eof: siggenstrings.cpp

