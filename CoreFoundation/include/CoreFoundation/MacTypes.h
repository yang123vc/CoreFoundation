/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 Jean-David Gadina - www-xs-labs.com
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @header      MacTypes.h
 * @copyright   (c) 2016, Jean-David Gadina - www.xs-labs.com
 */

#ifndef CORE_FOUNDATION_MAC_TYPES_H
#define CORE_FOUNDATION_MAC_TYPES_H

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef bool                    Boolean;
typedef int8_t                  SInt8;
typedef uint8_t                 UInt8;
typedef int16_t                 SInt16;
typedef uint16_t                UInt16;
typedef int32_t                 SInt32;
typedef uint32_t                UInt32;
typedef int64_t                 SInt64;
typedef uint64_t                UInt64;
typedef float                   Float32;
typedef double                  Float64;
typedef UInt8                   UTF8Char;
typedef UInt16                  UTF16Char;
typedef UInt32                  UTF32Char;
typedef UInt16                  UniChar;
typedef const unsigned char   * ConstStr255Param;
typedef unsigned char         * StringPtr;
typedef const unsigned char   * ConstStringPtr;

#ifdef __cplusplus
}
#endif

#endif /* CORE_FOUNDATION_MAC_TYPES_H */
