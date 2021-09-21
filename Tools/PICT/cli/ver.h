#pragma once

#define VER_MAKESTR_1(x)        #x
#define VER_MAKESTR(x)          VER_MAKESTR_1( ##x)

#define VER_PRODBUILD_MAJOR     3
#define VER_PRODBUILD_MINOR     7
#define VER_PRODBUILD_BUILD     2
#define VER_PRODBUILD_REVISION  0

#define VER_FILEVERSION         VER_PRODBUILD_MAJOR,VER_PRODBUILD_MINOR,VER_PRODBUILD_BUILD,VER_PRODBUILD_REVISION
#define VER_FILEVERSION_STR     VER_MAKESTR(VER_PRODBUILD_MAJOR) "." VER_MAKESTR(VER_PRODBUILD_MINOR) "." VER_MAKESTR(VER_PRODBUILD_BUILD) "." VER_MAKESTR(VER_PRODBUILD_REVISION)
#define VER_PRODUCTVERSION      VER_PRODBUILD_MAJOR,VER_PRODBUILD_MINOR,VER_PRODBUILD_BUILD,VER_PRODBUILD_REVISION
#define VER_PRODUCTVERSION_STR  VER_MAKESTR(VER_PRODBUILD_MAJOR) "." VER_MAKESTR(VER_PRODBUILD_MINOR) "." VER_MAKESTR(VER_PRODBUILD_BUILD) "." VER_MAKESTR(VER_PRODBUILD_REVISION)
#define VER_COMPANYNAME_STR     "Microsoft Corporation\0"
#define VER_PRODUCTNAME_STR     "Pairwise Independent Combinatorial Testing\0"
#define VER_LEGALCOPYRIGHT_STR  "Copyright (C) 2000-2021 Microsoft Corp. All rights reserved.\0"