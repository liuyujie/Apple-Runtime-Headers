//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_browse_descriptor.h"

@class NSObject<OS_dispatch_data>, NSObject<OS_nw_interface>, NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor>
{
    int type;
    char *bonjour_type;
    char *bonjour_domain;
    NSObject<OS_dispatch_data> *custom_data;
    CDUnknownBlockType browse_block;
    NSObject<OS_nw_interface> *interface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
