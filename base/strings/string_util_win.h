// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_STRINGS_STRING_UTIL_WIN_H_
#define BASE_STRINGS_STRING_UTIL_WIN_H_

#include <string.h>

namespace base {

// Chromium code style is to not use malloc'd strings; this is only for use
// for interaction with APIs that require it.
inline char* strdup(const char* str) {
  return _strdup(str);
}

inline int strcasecmp(const char* s1, const char* s2) {
  return _stricmp(s1, s2);
}

inline int strncasecmp(const char* s1, const char* s2, size_t count) {
  return _strnicmp(s1, s2, count);
}

}  // namespace base

#endif  // BASE_STRINGS_STRING_UTIL_WIN_H_
