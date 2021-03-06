//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDInteractionDeleting.h"
#import "_CDInteractionQuerying.h"
#import "_CDInteractionRecording.h"

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording>
{
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
    _Bool _enforceDataLimits;
    _Bool _enforcePrivacy;
}

+ (id)interactionRecorder;
@property _Bool enforcePrivacy; // @synthesize enforcePrivacy=_enforcePrivacy;
@property _Bool enforceDataLimits; // @synthesize enforceDataLimits=_enforceDataLimits;
- (void).cxx_destruct;
- (unsigned int)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id *)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 domainIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned int)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 account:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned int)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 error:(id *)arg4;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned int)countContactsUsingPredicate:(id)arg1 error:(id *)arg2;
- (void)countContactsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 error:(id *)arg4;
- (void)queryContactsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned int)countInteractionsUsingPredicate:(id)arg1 error:(id *)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned int)arg3 error:(id *)arg4;
- (void)queryInteractionsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)recordInteractions:(id)arg1;
- (_Bool)recordInteraction:(id)arg1;
- (_Bool)recordInteractions:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;

@end

