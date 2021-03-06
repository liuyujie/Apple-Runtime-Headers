//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_protocol_stack.h"

@class NSObject<OS_nw_array>, NSObject<OS_nw_protocol_options>, NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_stack : NSObject <OS_nw_protocol_stack>
{
    NSObject<OS_nw_array> *application_protocols;
    NSObject<OS_nw_protocol_options> *transport_protocol;
    NSObject<OS_nw_protocol_options> *internet_protocol;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

