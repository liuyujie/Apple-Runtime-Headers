//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_path_evaluator.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_nw_browse_descriptor>, NSObject<OS_nw_endpoint>, NSObject<OS_nw_parameters>, NSString, NWConcrete_nw_path;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_evaluator : NSObject <OS_nw_path_evaluator>
{
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_browse_descriptor> *descriptor;
    NWConcrete_nw_path *path;
    NSObject<OS_dispatch_queue> *client_queue;
    CDUnknownBlockType update_block;
    CDUnknownBlockType cancel_handler;
    unsigned char client_id[16];
    struct os_unfair_lock_s lock;
    unsigned int flow_count;
    unsigned int is_default:1;
    unsigned int is_listener:1;
    unsigned int started:1;
    unsigned int cancelled:1;
}

- (void).cxx_destruct;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

