//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
{
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned int)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned int)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3 freeWhenDone:(_Bool)arg4;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)autorelease;

@end
