//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <system_network/NWConcrete_nw_endpoint.h>

@class NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_hostname_endpoint : NWConcrete_nw_endpoint
{
    char *hostname;
    unsigned short port;
    NSObject<OS_xpc_object> *txt_record;
}

- (void).cxx_destruct;
- (unsigned long long)getHash;
- (BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(_Bool)arg2;
- (const char *)getDescription;
- (unsigned short)port;
- (const char *)domainForPolicy;
- (id)copyDictionary;
- (unsigned int)type;
- (void)dealloc;
- (id)initWithHostname:(const char *)arg1 port:(unsigned short)arg2;

@end
