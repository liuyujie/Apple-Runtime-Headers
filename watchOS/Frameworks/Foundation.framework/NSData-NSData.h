//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (NSData)
+ (_Bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned int)arg1;
+ (id)_newZeroingDataWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 deallocator:(CDUnknownBlockType)arg3;
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 maxLength:(unsigned int)arg3 error:(id *)arg4;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(_Bool)arg3;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (id)data;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)_providesConcreteBacking;
- (id)base64Encoding;
- (id)initWithBase64Encoding:(id)arg1;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)_base64EncodingAsString:(_Bool)arg1 withOptions:(unsigned int)arg2;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (_Bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 buffer:(char *)arg4 bufferLength:(unsigned int)arg5 state:(CDStruct_ea8e2ad1 *)arg6;
- (id)_createDispatchData;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 maxLength:(unsigned int)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 maxLength:(unsigned int)arg3 error:(id *)arg4;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned int)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void *)arg1 length:(unsigned int)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (_Bool)isEqualToData:(id)arg1;
- (_Bool)_isCompact;
- (_Bool)_isDispatchData;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void *)arg1;
- (_Bool)_allowsDirectEncoding;
- (id)replacementObjectForCoder:(id)arg1;
- (_Bool)_canReplaceWithDispatchDataForXPCCoder;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)_copyWillRetain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_asciiDescription;
- (id)description;
- (unsigned long)_cfTypeID;
- (const void *)bytes;
- (unsigned int)length;
@end
