//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VMUMachOSection : NSObject
{
    unsigned int _localAddress;
    unsigned int _mappingSize;
}

- (unsigned int)mappingSize;
- (unsigned int)localAddress;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 remoteAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;

@end

