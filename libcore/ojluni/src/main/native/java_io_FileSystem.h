/* This file was generated from java/io/FileSystem.java and is licensed under
 * the same terms. The copyright and license information for
 * java/io/FileSystem.java follows.
 *
 * Copyright (c) 1998, 2005, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_io_FileSystem */

#ifndef _Included_java_io_FileSystem
#define _Included_java_io_FileSystem
#ifdef __cplusplus
extern "C" {
#endif
#undef java_io_FileSystem_BA_EXISTS
#define java_io_FileSystem_BA_EXISTS 1L
#undef java_io_FileSystem_BA_REGULAR
#define java_io_FileSystem_BA_REGULAR 2L
#undef java_io_FileSystem_BA_DIRECTORY
#define java_io_FileSystem_BA_DIRECTORY 4L
#undef java_io_FileSystem_BA_HIDDEN
#define java_io_FileSystem_BA_HIDDEN 8L
#undef java_io_FileSystem_ACCESS_OK
#define java_io_FileSystem_ACCESS_OK 8L
#undef java_io_FileSystem_ACCESS_READ
#define java_io_FileSystem_ACCESS_READ 4L
#undef java_io_FileSystem_ACCESS_WRITE
#define java_io_FileSystem_ACCESS_WRITE 2L
#undef java_io_FileSystem_ACCESS_EXECUTE
#define java_io_FileSystem_ACCESS_EXECUTE 1L
#undef java_io_FileSystem_SPACE_TOTAL
#define java_io_FileSystem_SPACE_TOTAL 0L
#undef java_io_FileSystem_SPACE_FREE
#define java_io_FileSystem_SPACE_FREE 1L
#undef java_io_FileSystem_SPACE_USABLE
#define java_io_FileSystem_SPACE_USABLE 2L
/*
 * Class:     java_io_FileSystem
 * Method:    getFileSystem
 * Signature: ()Ljava/io/FileSystem;
 */
JNIEXPORT jobject JNICALL Java_java_io_FileSystem_getFileSystem
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif