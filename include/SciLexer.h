// Scintilla source code edit control
// SciLexer - interface to the added lexer functions in the SciLexer version of the edit control
// Copyright 1998-2000 by Neil Hodgson <neilh@scintilla.org>
// The License.txt file describes the conditions under which this software may be distributed.

#ifndef SCILEXER_H
#define SCILEXER_H

// SciLexer features - not in standard Scintilla

#define SCLEX_CONTAINER 0
#define SCLEX_NULL 1
#define SCLEX_PYTHON 2
#define SCLEX_CPP 3
#define SCLEX_HTML 4
#define SCLEX_XML 5
#define SCLEX_PERL 6
#define SCLEX_SQL 7
#define SCLEX_VB 8
#define SCLEX_PROPERTIES 9
#define SCLEX_ERRORLIST 10
#define SCLEX_MAKEFILE 11
#define SCLEX_BATCH 12

// Lexical states for SCLEX_PYTHON
#define SCE_P_DEFAULT 0
#define SCE_P_COMMENTLINE 1
#define SCE_P_NUMBER 2
#define SCE_P_STRING 3
#define SCE_P_CHARACTER 4
#define SCE_P_WORD 5
#define SCE_P_TRIPLE 6
#define SCE_P_TRIPLEDOUBLE 7
#define SCE_P_CLASSNAME 8
#define SCE_P_DEFNAME 9
#define SCE_P_OPERATOR 10
#define SCE_P_IDENTIFIER 11
#define SCE_P_COMMENTBLOCK 12
#define SCE_P_STRINGEOL 13

// Lexical states for SCLEX_CPP, SCLEX_VB
#define SCE_C_DEFAULT 0
#define SCE_C_COMMENT 1
#define SCE_C_COMMENTLINE 2
#define SCE_C_COMMENTDOC 3
#define SCE_C_NUMBER 4
#define SCE_C_WORD 5
#define SCE_C_STRING 6
#define SCE_C_CHARACTER 7
#define SCE_C_PUNTUATION 8
#define SCE_C_PREPROCESSOR 9
#define SCE_C_OPERATOR 10
#define SCE_C_IDENTIFIER 11
#define SCE_C_STRINGEOL 12
#define SCE_C_UUID 13

// Lexical states for SCLEX_HTML, SCLEX_xML
#define SCE_H_DEFAULT 0
#define SCE_H_TAG 1
#define SCE_H_TAGUNKNOWN 2
#define SCE_H_ATTRIBUTE 3
#define SCE_H_ATTRIBUTEUNKNOWN 4
#define SCE_H_NUMBER 5
#define SCE_H_DOUBLESTRING 6
#define SCE_H_SINGLESTRING 7
#define SCE_H_OTHER 8
#define SCE_H_COMMENT 9
#define SCE_H_ENTITY 10
// XML and ASP
#define SCE_H_TAGEND 11
#define SCE_H_XMLSTART 12
#define SCE_H_XMLEND 13
#define SCE_H_SCRIPT 14
#define SCE_H_ASP 15
#define SCE_H_ASPAT 16
// Embedded Javascript
#define SCE_HJ_START 40
#define SCE_HJ_DEFAULT 41
#define SCE_HJ_COMMENT 42
#define SCE_HJ_COMMENTLINE 43
#define SCE_HJ_COMMENTDOC 44
#define SCE_HJ_NUMBER 45
#define SCE_HJ_WORD 46
#define SCE_HJ_KEYWORD 47
#define SCE_HJ_DOUBLESTRING 48
#define SCE_HJ_SINGLESTRING 49
#define SCE_HJ_SYMBOLS 50
#define SCE_HJ_STRINGEOL 51
// ASP Javascript
#define SCE_HJA_START 55
#define SCE_HJA_DEFAULT 56
#define SCE_HJA_COMMENT 57
#define SCE_HJA_COMMENTLINE 58
#define SCE_HJA_COMMENTDOC 59
#define SCE_HJA_NUMBER 60
#define SCE_HJA_WORD 61
#define SCE_HJA_KEYWORD 62
#define SCE_HJA_DOUBLESTRING 63
#define SCE_HJA_SINGLESTRING 64
#define SCE_HJA_SYMBOLS 65
#define SCE_HJA_STRINGEOL 66
// Embedded VBScript
#define SCE_HB_START 70
#define SCE_HB_DEFAULT 71
#define SCE_HB_COMMENTLINE 72
#define SCE_HB_NUMBER 73
#define SCE_HB_WORD 74
#define SCE_HB_STRING 75
#define SCE_HB_IDENTIFIER 76
#define SCE_HB_STRINGEOL 77
// ASP VBScript
#define SCE_HBA_START 80
#define SCE_HBA_DEFAULT 81
#define SCE_HBA_COMMENTLINE 82
#define SCE_HBA_NUMBER 83
#define SCE_HBA_WORD 84
#define SCE_HBA_STRING 85
#define SCE_HBA_IDENTIFIER 86
#define SCE_HBA_STRINGEOL 87
// Embedded Python
#define SCE_HP_START 90
#define SCE_HP_DEFAULT 91
#define SCE_HP_COMMENTLINE 92
#define SCE_HP_NUMBER 93
#define SCE_HP_STRING 94
#define SCE_HP_CHARACTER 95
#define SCE_HP_WORD 96
#define SCE_HP_TRIPLE 97
#define SCE_HP_TRIPLEDOUBLE 98
#define SCE_HP_CLASSNAME 99
#define SCE_HP_DEFNAME 100
#define SCE_HP_OPERATOR 101
#define SCE_HP_IDENTIFIER 102
// ASP Python
#define SCE_HPA_START 105
#define SCE_HPA_DEFAULT 106
#define SCE_HPA_COMMENTLINE 107
#define SCE_HPA_NUMBER 108
#define SCE_HPA_STRING 109
#define SCE_HPA_CHARACTER 110
#define SCE_HPA_WORD 111
#define SCE_HPA_TRIPLE 112
#define SCE_HPA_TRIPLEDOUBLE 113
#define SCE_HPA_CLASSNAME 114
#define SCE_HPA_DEFNAME 115
#define SCE_HPA_OPERATOR 116
#define SCE_HPA_IDENTIFIER 117

// Lexical states for SCLEX_PERL
#define SCE_PL_DEFAULT 0
#define SCE_PL_HERE 1
#define SCE_PL_COMMENTLINE 2
#define SCE_PL_POD 3
#define SCE_PL_NUMBER 4
#define SCE_PL_WORD 5
#define SCE_PL_STRING 6
#define SCE_PL_CHARACTER 7
#define SCE_PL_PUNCTUATION 8
#define SCE_PL_PREPROCESSOR 9
#define SCE_PL_OPERATOR 10
#define SCE_PL_IDENTIFIER 11
#define SCE_PL_SCALAR 12
#define SCE_PL_ARRAY 13
#define SCE_PL_HASH 14
#define SCE_PL_SYMBOLTABLE 15
#define SCE_PL_REF 16
#define SCE_PL_REGEX 17
#define SCE_PL_REGSUBST 18
#define SCE_PL_LONGQUOTE 19
#define SCE_PL_BACKTICKS 20
#define SCE_PL_DATASECTION 21
    
#endif
