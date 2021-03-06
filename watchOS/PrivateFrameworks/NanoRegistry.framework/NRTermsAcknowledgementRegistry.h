//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRTermsAcknowledgementRegistry.h"

@class NSString, NSXPCConnection;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry>
{
    id <NRTermsAcknowledgementRegistry> _proxy;
}

+ (id)errorWithEnum:(unsigned int)arg1;
+ (id)errorStringWithEnum:(unsigned int)arg1;
@property(readonly, nonatomic) id <NRTermsAcknowledgementRegistry> proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSXPCConnection *connection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

