//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OSAStreamDeflater : NSObject
{
    struct z_stream_s _strm;
    char *_in;
    char *_out;
    BOOL _capViolation;
}

@property BOOL capViolation; // @synthesize capViolation=_capViolation;
- (id)copyDeflatedDataFromStream:(struct __sFILE *)arg1 withCap:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end
