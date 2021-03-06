//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

@class CMMotionActivityManager;

@interface REDeviceMotionPredictor : REPredictor
{
    CMMotionActivityManager *_activityManager;
    _Bool _isStationary;
    unsigned int _type;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)_updateWithActivity:(id)arg1;
- (void)pause;
- (void)resume;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)init;

@end

