/*
 *  olenls.h    National Language Support (NLS) functions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2016 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _OLENLS_
#define _OLENLS_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Macro used to specify extern "C" */
#ifdef __cplusplus
    #define EXTERN_C    extern "C"
#else
    #define EXTERN_C    extern
#endif

/* Macro to specify NLS functions */
#define NLSAPI_( x )    EXTERN_C x WINAPI

/* Primitive data types */
#define _LCID_DEFINED
typedef unsigned long   LCID;
typedef unsigned short  LANGID;
typedef unsigned long   LCTYPE;

/* Character information types */
#define CT_CTYPE1   0x00000001L
#define CT_CTYPE2   0x00000002L
#define CT_CTYPE3   0x00000004L

/* Character information flags used with CT_CTYPE1 */
#define C1_UPPER    0x0001
#define C1_LOWER    0x0002
#define C1_DIGIT    0x0004
#define C1_SPACE    0x0008
#define C1_PUNCT    0x0010
#define C1_CNTRL    0x0020
#define C1_BLANK    0x0040
#define C1_XDIGIT   0x0080
#define C1_ALPHA    0x0100

/* Character information flags used with CT_CTYPE2 */
#define C2_LEFTTORIGHT      0x0001
#define C2_RIGHTTOLEFT      0x0002
#define C2_EUROPENUMBER     0x0003
#define C2_EUROPESEPARATOR  0x0004
#define C2_EUROPETERMINATOR 0x0005
#define C2_ARABICNUMBER     0x0006
#define C2_COMMONSEPARATOR  0x0007
#define C2_BLOCKSEPARATOR   0x0008
#define C2_SEGMENTSEPARATOR 0x0009
#define C2_WHITESPACE       0x000A
#define C2_OTHERNEUTRAL     0x000B
#define C2_NOTAPPLICABLE    0x0000

/* Character information flags used with CT_CTYPE3 */
#define C3_NONSPACING       0x0001
#define C3_DIACRITIC        0x0002
#define C3_VOWELMARK        0x0004
#define C3_SYMBOL           0x0008
#define C3_KATAKANA         0x0010
#define C3_HIRAGANA         0x0020
#define C3_HALFWIDTH        0x0040
#define C3_FULLWIDTH        0x0080
#define C3_IDEOGRAPH        0x0100
#define C3_KASHIDA          0x0200
#define C3_ALPHA            0x8000
#define C3_NOTAPPLICABLE    0x0000

/* CompareString() and LCMapString() flags */
#define NORM_IGNORECASE     0x00000001L
#define NORM_IGNORENONSPACE 0x00000002L
#define NORM_IGNORESYMBOLS  0x00000004L
#define NORM_IGNOREWIDTH    0x00000008L
#define NORM_IGNOREKANATYPE 0x00000010L
#define NORM_IGNOREKASHIDA  0x00040000L

/* LCMapString() flags */
#define LCMAP_LOWERCASE 0x00000100L
#define LCMAP_UPPERCASE 0x00000200L
#define LCMAP_SORTKEY   0x00000400L
#define LCMAP_HALFWIDTH 0x00000800L
#define LCMAP_FULLWIDTH 0x00001000L
#define LCMAP_HIRAGANA  0x00002000L
#define LCMAP_KATAKANA  0x00004000L

/* Language identifiers */
#define LANG_NEUTRAL        0x00
#define LANG_ALBANIAN       0x1C
#define LANG_ARABIC         0x01
#define LANG_BAHASA         0x21
#define LANG_BULGARIAN      0x02
#define LANG_CATALAN        0x03
#define LANG_CHINESE        0x04
#define LANG_CZECH          0x05
#define LANG_DANISH         0x06
#define LANG_DUTCH          0x13
#define LANG_ENGLISH        0x09
#define LANG_FINNISH        0x0B
#define LANG_FRENCH         0x0C
#define LANG_GERMAN         0x07
#define LANG_GREEK          0x08
#define LANG_HEBREW         0x0D
#define LANG_HUNGARIAN      0x0E
#define LANG_ICELANDIC      0x0F
#define LANG_ITALIAN        0x10
#define LANG_JAPANESE       0x11
#define LANG_KOREAN         0x12
#define LANG_NORWEGIAN      0x14
#define LANG_POLISH         0x15
#define LANG_PORTUGUESE     0x16
#define LANG_RHAETO_ROMAN   0x17
#define LANG_ROMANIAN       0x18
#define LANG_RUSSIAN        0x19
#define LANG_SERBO_CROATIAN 0x1A
#define LANG_SLOVAK         0x1B
#define LANG_SPANISH        0x0A
#define LANG_SWEDISH        0x1D
#define LANG_THAI           0x1E
#define LANG_TURKISH        0x1F
#define LANG_URDU           0x20

/* Sublanguage identifiers */
#define SUBLANG_NEUTRAL                 0x00
#define SUBLANG_DEFAULT                 0x01
#define SUBLANG_SYS_DEFAULT             0x02
#define SUBLANG_CHINESE_SIMPLIFIED      0x02
#define SUBLANG_CHINESE_TRADITIONAL     0x01
#define SUBLANG_DUTCH                   0x01
#define SUBLANG_DUTCH_BELGIAN           0x02
#define SUBLANG_ENGLISH_US              0x01
#define SUBLANG_ENGLISH_UK              0x02
#define SUBLANG_ENGLISH_AUS             0x03
#define SUBLANG_ENGLISH_CAN             0x04
#define SUBLANG_ENGLISH_NZ              0x05
#define SUBLANG_ENGLISH_EIRE            0x06
#define SUBLANG_FRENCH                  0x01
#define SUBLANG_FRENCH_BELGIAN          0x02
#define SUBLANG_FRENCH_CANADIAN         0x03
#define SUBLANG_FRENCH_SWISS            0x04
#define SUBLANG_GERMAN                  0x01
#define SUBLANG_GERMAN_SWISS            0x02
#define SUBLANG_GERMAN_AUSTRIAN         0x03
#define SUBLANG_ITALIAN                 0x01
#define SUBLANG_ITALIAN_SWISS           0x02
#define SUBLANG_NORWEGIAN_BOKMAL        0x01
#define SUBLANG_NORWEGIAN_NYNORSK       0x02
#define SUBLANG_PORTUGUESE              0x02
#define SUBLANG_PORTUGUESE_BRAZILIAN    0x01
#define SUBLANG_SERBO_CROATIAN_CYRILLIC 0x02
#define SUBLANG_SERBO_CROATIAN_LATIN    0x01
#define SUBLANG_SPANISH                 0x01
#define SUBLANG_SPANISH_MEXICAN         0x02
#define SUBLANG_SPANISH_MODERN          0x03

/* Country codes */
#define CTRY_DEFAULT        0
#define CTRY_AUSTRALIA      61
#define CTRY_AUSTRIA        43
#define CTRY_BELGIUM        32
#define CTRY_BRAZIL         55
#define CTRY_CANADA         2
#define CTRY_DENMARK        45
#define CTRY_FINLAND        358
#define CTRY_FRANCE         33
#define CTRY_GERMANY        49
#define CTRY_ICELAND        354
#define CTRY_IRELAND        353
#define CTRY_ITALY          39
#define CTRY_JAPAN          81
#define CTRY_MEXICO         52
#define CTRY_NETHERLANDS    31
#define CTRY_NEW_ZEALAND    64
#define CTRY_NORWAY         47
#define CTRY_PORTUGAL       351
#define CTRY_PRCHINA        86
#define CTRY_SOUTH_KOREA    82
#define CTRY_SPAIN          34
#define CTRY_SWEDEN         46
#define CTRY_SWITZERLAND    41
#define CTRY_TAIWAN         886
#define CTRY_UNITED_KINGDOM 44
#define CTRY_UNITED_STATES  1

/* Locale information type flags */
#define LOCALE_NOUSEROVERRIDE   0x80000000L

/* Locale information types */
#define LOCALE_ILANGUAGE            0x00000001L
#define LOCALE_SLANGUAGE            0x00000002L
#define LOCALE_SENGLANGUAGE         0x00001001L
#define LOCALE_SABBREVLANGNAME      0x00000003L
#define LOCALE_SNATIVELANGNAME      0x00000004L
#define LOCALE_ICOUNTRY             0x00000005L
#define LOCALE_SCOUNTRY             0x00000006L
#define LOCALE_SENGCOUNTRY          0x00001002L
#define LOCALE_SABBREVCTRYNAME      0x00000007L
#define LOCALE_SNATIVECTRYNAME      0x00000008L
#define LOCALE_IDEFAULTLANGUAGE     0x00000009L
#define LOCALE_IDEFAULTCOUNTRY      0x0000000AL
#define LOCALE_IDEFAULTCODEPAGE     0x0000000BL
#define LOCALE_IDEFAULTANSICODEPAGE 0x00001004L
#define LOCALE_SLIST                0x0000000CL
#define LOCALE_IMEASURE             0x0000000DL
#define LOCALE_SDECIMAL             0x0000000EL
#define LOCALE_STHOUSAND            0x0000000FL
#define LOCALE_SGROUPING            0x00000010L
#define LOCALE_IDIGITS              0x00000011L
#define LOCALE_ILZERO               0x00000012L
#define LOCALE_INEGNUMBER           0x00001010L
#define LOCALE_SNATIVEDIGITS        0x00000013L
#define LOCALE_SCURRENCY            0x00000014L
#define LOCALE_SINTLSYMBOL          0x00000015L
#define LOCALE_SMONDECIMALSEP       0x00000016L
#define LOCALE_SMONTHOUSANDSEP      0x00000017L
#define LOCALE_SMONGROUPING         0x00000018L
#define LOCALE_ICURRDIGITS          0x00000019L
#define LOCALE_IINTLCURRDIGITS      0x0000001AL
#define LOCALE_ICURRENCY            0x0000001BL
#define LOCALE_INEGCURR             0x0000001CL
#define LOCALE_SDATE                0x0000001DL
#define LOCALE_STIME                0x0000001EL
#define LOCALE_SSHORTDATE           0x0000001FL
#define LOCALE_SLONGDATE            0x00000020L
#define LOCALE_STIMEFORMAT          0x00001003L
#define LOCALE_IDATE                0x00000021L
#define LOCALE_ILDATE               0x00000022L
#define LOCALE_ITIME                0x00000023L
#define LOCALE_ITIMEMARKPOSN        0x00001005L
#define LOCALE_ICENTURY             0x00000024L
#define LOCALE_ITLZERO              0x00000025L
#define LOCALE_IDAYLZERO            0x00000026L
#define LOCALE_IMONLZERO            0x00000027L
#define LOCALE_S1159                0x00000028L
#define LOCALE_S2359                0x00000029L
#define LOCALE_ICALENDARTYPE        0x00001009L
#define LOCALE_IOPTIONALCALENDAR    0x0000100BL
#define LOCALE_IFIRSTDAYOFWEEK      0x0000100CL
#define LOCALE_IFIRSTWEEKOFYEAR     0x0000100DL
#define LOCALE_SDAYNAME1            0x0000002AL
#define LOCALE_SDAYNAME2            0x0000002BL
#define LOCALE_SDAYNAME3            0x0000002CL
#define LOCALE_SDAYNAME4            0x0000002DL
#define LOCALE_SDAYNAME5            0x0000002EL
#define LOCALE_SDAYNAME6            0x0000002FL
#define LOCALE_SDAYNAME7            0x00000030L
#define LOCALE_SABBREVDAYNAME1      0x00000031L
#define LOCALE_SABBREVDAYNAME2      0x00000032L
#define LOCALE_SABBREVDAYNAME3      0x00000033L
#define LOCALE_SABBREVDAYNAME4      0x00000034L
#define LOCALE_SABBREVDAYNAME5      0x00000035L
#define LOCALE_SABBREVDAYNAME6      0x00000036L
#define LOCALE_SABBREVDAYNAME7      0x00000037L
#define LOCALE_SMONTHNAME1          0x00000038L
#define LOCALE_SMONTHNAME2          0x00000039L
#define LOCALE_SMONTHNAME3          0x0000003AL
#define LOCALE_SMONTHNAME4          0x0000003BL
#define LOCALE_SMONTHNAME5          0x0000003CL
#define LOCALE_SMONTHNAME6          0x0000003DL
#define LOCALE_SMONTHNAME7          0x0000003EL
#define LOCALE_SMONTHNAME8          0x0000003FL
#define LOCALE_SMONTHNAME9          0x00000040L
#define LOCALE_SMONTHNAME10         0x00000041L
#define LOCALE_SMONTHNAME11         0x00000042L
#define LOCALE_SMONTHNAME12         0x00000043L
#define LOCALE_SMONTHNAME13         0x0000100EL
#define LOCALE_SABBREVMONTHNAME1    0x00000044L
#define LOCALE_SABBREVMONTHNAME2    0x00000045L
#define LOCALE_SABBREVMONTHNAME3    0x00000046L
#define LOCALE_SABBREVMONTHNAME4    0x00000047L
#define LOCALE_SABBREVMONTHNAME5    0x00000048L
#define LOCALE_SABBREVMONTHNAME6    0x00000049L
#define LOCALE_SABBREVMONTHNAME7    0x0000004AL
#define LOCALE_SABBREVMONTHNAME8    0x0000004BL
#define LOCALE_SABBREVMONTHNAME9    0x0000004CL
#define LOCALE_SABBREVMONTHNAME10   0x0000004DL
#define LOCALE_SABBREVMONTHNAME11   0x0000004EL
#define LOCALE_SABBREVMONTHNAME12   0x0000004FL
#define LOCALE_SABBREVMONTHNAME13   0x0000100FL
#define LOCALE_SPOSITIVESIGN        0x00000050L
#define LOCALE_SNEGATIVESIGN        0x00000051L
#define LOCALE_IPOSSIGNPOSN         0x00000052L
#define LOCALE_INEGSIGNPOSN         0x00000053L
#define LOCALE_IPOSSYMPRECEDES      0x00000054L
#define LOCALE_IPOSSEPBYSPACE       0x00000055L
#define LOCALE_INEGSYMPRECEDES      0x00000056L
#define LOCALE_INEGSEPBYSPACE       0x00000057L

/* Macros to manipulate language identifers */
#define MAKELANGID( p1, p2 )    (((unsigned short)(p2) << 10) | (unsigned short)(p1))
#define PRIMARYLANGID( x )      ((unsigned short)(x) & 0x03FF)
#define SUBLANGID( x )          ((unsigned short)(x) >> 10)

/* Macros to manipulate locale identifiers */
#define MAKELCID( x )       ((unsigned long)(unsigned short)(x))
#define LANGIDFROMLCID( x ) ((unsigned short)(x))

/* Default language identifiers */
#define LANG_SYSTEM_DEFAULT MAKELANGID( LANG_NEUTRAL, SUBLANG_SYS_DEFAULT )
#define LANG_USER_DEFAULT   MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT )

/* Default locale identifiers */
#define LOCALE_SYSTEM_DEFAULT   MAKELCID( LANG_SYSTEM_DEFAULT )
#define LOCALE_USER_DEFAULT     MAKELCID( LANG_USER_DEFAULT )

/* Functions in OLE2NLS.DLL */
NLSAPI_( int )      CompareStringA( LCID, unsigned long, const char FAR *, int, const char FAR *, int );
NLSAPI_( int )      GetLocaleInfoA( LCID, LCTYPE, char FAR *, int );
NLSAPI_( int )      GetStringTypeA( LCID, unsigned long, const char FAR *, int, unsigned short FAR * );
NLSAPI_( LCID )     GetSystemDefaultLCID( void );
NLSAPI_( LANGID )   GetSystemDefaultLangID( void );
NLSAPI_( LCID )     GetUserDefaultLCID( void );
NLSAPI_( LANGID )   GetUserDefaultLangID( void );
NLSAPI_( int )      LCMapStringA( LCID, unsigned long, const char FAR *, int, char FAR *, int );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _OLENLS_ */
