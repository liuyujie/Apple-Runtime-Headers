//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PathObject : NSObject
{
    int _len;
    char *_path;
}

+ (id)pathObjectWithPath:(const char *)arg1 component:(const char *)arg2;
@property(readonly) int len; // @synthesize len=_len;
@property(readonly) char *path; // @synthesize path=_path;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(const char *)arg1 component:(const char *)arg2;

@end
