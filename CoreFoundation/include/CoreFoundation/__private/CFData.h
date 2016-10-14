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
 * @header      CFData.h
 * @copyright   (c) 2016, Jean-David Gadina - www.xs-labs.com
 */

#ifndef CORE_FOUNDATION___PRIVATE_CF_DATA_H
#define CORE_FOUNDATION___PRIVATE_CF_DATA_H

#include <CoreFoundation/CoreFoundation.h>
#include <CoreFoundation/__private/CFRuntime.h>

CF_EXTERN_C_BEGIN

struct CFData
{
    CFRuntimeBase   _base;
    const UInt8   * _bytes;
    CFIndex         _length;
    CFAllocatorRef  _deallocator;
    bool            _mutable;
};

CF_EXPORT void        CFDataDestruct( CFDataRef data );
CF_EXPORT CFHashCode  CFDataHash( CFDataRef data );
CF_EXPORT bool        CFDataEquals( CFDataRef d1, CFDataRef d2 );
CF_EXPORT CFStringRef CFDataCopyDescription( CFDataRef Data );

CF_EXPORT CFTypeID       CFDataTypeID;
CF_EXPORT CFRuntimeClass CFDataClass;

CF_EXTERN_C_END

#endif /* CORE_FOUNDATION___PRIVATE_CF_DATA_H */
