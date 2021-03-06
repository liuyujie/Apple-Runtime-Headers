//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ATXActionPredictionInterface.h"

@class ATXCacheReader, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface>
{
    NSXPCConnection *_xpcConnection;
    NSString *_cacheBasePath;
    ATXCacheReader *_cacheReader;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sendFeedbackWithResponse:(id)arg1;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg1 candidateActionTypes:(id)arg2 actionUILimit:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (id)actionPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2;
- (void)dealloc;
- (id)initWithCacheBasePath:(id)arg1;
- (id)init;

@end

