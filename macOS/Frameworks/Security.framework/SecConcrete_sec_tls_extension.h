//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_sec_tls_extension.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_tls_extension : NSObject <OS_sec_tls_extension>
{
    unsigned short type;
    CDUnknownBlockType adder;
    CDUnknownBlockType parser;
    CDUnknownBlockType freer;
}

- (void).cxx_destruct;
- (id)initWithCallbacks:(unsigned short)arg1 adder:(CDUnknownBlockType)arg2 parser:(CDUnknownBlockType)arg3 freer:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
