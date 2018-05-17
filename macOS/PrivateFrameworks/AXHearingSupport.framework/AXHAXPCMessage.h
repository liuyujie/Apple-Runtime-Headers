//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXHAXPCClient, NSDictionary, NSError, NSObject<OS_xpc_object>;

@interface AXHAXPCMessage : NSObject
{
    AXHAXPCClient *_client;
    NSObject<OS_xpc_object> *_xpcMessage;
    NSDictionary *_payload;
    NSError *_error;
}

+ (id)messageWithPayload:(id)arg1;
+ (id)messageWithPayload:(id)arg1 xpcMessage:(id)arg2 andClient:(id)arg3;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
@property(nonatomic) AXHAXPCClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasEntitlement:(id)arg1;
- (void)dealloc;
- (id)replyMessageWithPayload:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end
