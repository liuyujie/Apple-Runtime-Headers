//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject
{
    unsigned int _maxRetryCount;
    unsigned int _minSecondsBetweenRetries;
    unsigned int _maxSecondsBetweenRetries;
    unsigned int _minSecondsBetweenRetriesUnderMemoryPressure;
    unsigned int _maxSecondsBetweenRetriesUnderMemoryPressure;
    NSMutableDictionary *_countersByBundleID;
}

@property(retain, nonatomic) NSMutableDictionary *countersByBundleID; // @synthesize countersByBundleID=_countersByBundleID;
@property(nonatomic) unsigned int maxSecondsBetweenRetriesUnderMemoryPressure; // @synthesize maxSecondsBetweenRetriesUnderMemoryPressure=_maxSecondsBetweenRetriesUnderMemoryPressure;
@property(nonatomic) unsigned int minSecondsBetweenRetriesUnderMemoryPressure; // @synthesize minSecondsBetweenRetriesUnderMemoryPressure=_minSecondsBetweenRetriesUnderMemoryPressure;
@property(nonatomic) unsigned int maxSecondsBetweenRetries; // @synthesize maxSecondsBetweenRetries=_maxSecondsBetweenRetries;
@property(nonatomic) unsigned int minSecondsBetweenRetries; // @synthesize minSecondsBetweenRetries=_minSecondsBetweenRetries;
@property(nonatomic) unsigned int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (void).cxx_destruct;
- (long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(_Bool)arg3;
- (id)initWithDictionary:(id)arg1;

@end

