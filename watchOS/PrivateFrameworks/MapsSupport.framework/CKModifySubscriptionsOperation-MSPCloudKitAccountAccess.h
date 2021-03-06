//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKModifySubscriptionsOperation.h"

#import "MSPCloudRequest.h"

@class NSString;

@interface CKModifySubscriptionsOperation (MSPCloudKitAccountAccess) <MSPCloudRequest>
- (void)setNetworkBehaviorIsDiscretionary:(_Bool)arg1;
- (unsigned int)maximumRetries;
- (void)addCloudAccessCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) _Bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property(readonly) Class superclass;
@end

