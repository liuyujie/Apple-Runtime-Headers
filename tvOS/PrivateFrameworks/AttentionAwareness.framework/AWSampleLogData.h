//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AWSampleLogData : NSObject
{
    _Bool _pollingClient;
    NSString *_identifier;
    unsigned long long _samplingInterval;
    unsigned long long _cumulativeSamplingTime;
    unsigned long long _samplingStartTime;
}

@property(nonatomic) unsigned long long samplingStartTime; // @synthesize samplingStartTime=_samplingStartTime;
@property(nonatomic) unsigned long long cumulativeSamplingTime; // @synthesize cumulativeSamplingTime=_cumulativeSamplingTime;
@property(nonatomic) _Bool pollingClient; // @synthesize pollingClient=_pollingClient;
@property(nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

