//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetsdClientService.h"

@class NSObject<OS_xpc_object>, NSString;

@interface PLAssetsdClientServiceSender : NSObject <PLAssetsdClientService>
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(_Bool)arg3 data:(id)arg4 error:(id)arg5;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
