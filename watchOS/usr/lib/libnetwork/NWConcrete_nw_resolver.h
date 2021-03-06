//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_resolver.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_nw_array>, NSObject<OS_nw_context>, NSObject<OS_nw_endpoint>, NSObject<OS_nw_parameters>, NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver>
{
    int status;
    struct os_unfair_lock_s lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_group> *cancel_group;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t *dns_service;
    struct _DNSServiceRef_t *dns_service_secondary_pointer;
    unsigned int forced_protocol;
    int dns_error;
    unsigned char flags;
    CDUnknownBlockType update_block;
    CDUnknownBlockType cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    void *query_timer;
    void *crazy_eyeballs_timer;
    NSObject<OS_nw_array> *endpoint_array;
    void *internally_retained_object;
    char log_str[84];
    unsigned int is_custom_resolver:1;
    unsigned int used_cached_results:1;
    unsigned int local_only:1;
    unsigned int suppress_logging:1;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 dns_service_id:(unsigned int)arg3 localOnly:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

