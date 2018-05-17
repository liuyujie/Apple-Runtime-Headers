//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject
{
    _CLLocationManagerRoutineProxy *_locationManagerRoutineProxy;
}

@property(retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy; // @synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy;
@property(nonatomic) id <CLLocationManagerRoutineDelegate> delegate;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)dealloc;
- (id)init;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopUpdatingPredictedApplications;
- (void)startUpdatingPredictedApplications;

@end
