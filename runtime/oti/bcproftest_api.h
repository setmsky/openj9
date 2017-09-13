/*******************************************************************************
 * Copyright (c) 1991, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/

#ifndef bcproftest_api_h
#define bcproftest_api_h

/**
* @file bcproftest_api.h
* @brief Public API for the BCPROFTEST module.
*
* This file contains public function prototypes and
* type definitions for the BCPROFTEST module.
*
*/

#include "j9.h"
#include "j9comp.h"
#include "jni.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---------------- bcproftest.c ---------------- */

/**
* @brief
* @param *jvm
* @param options
* @param *reserved
* @return jint
*/
jint JNICALL 
JVM_OnLoad( JavaVM *jvm, char* options, void *reserved );

#ifdef __cplusplus
}
#endif

#endif /* bcproftest_api_h */