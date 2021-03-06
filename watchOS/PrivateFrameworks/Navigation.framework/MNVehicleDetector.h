//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableSet;

@interface MNVehicleDetector : NSObject
{
    NSLock *_observerLock;
    NSMutableSet *_observers;
    int _vehicularToken;
    int _vehicleConnectedToken;
    int _vehicleDisconnectedToken;
    int _testToken;
    _Bool _testMode;
    unsigned int _vehicleDetectionState;
    unsigned int _vehicularState;
    unsigned int _vehicleConnectionState;
}

+ (id)sharedDetector;
@property(nonatomic) unsigned int vehicleConnectionState; // @synthesize vehicleConnectionState=_vehicleConnectionState;
@property(nonatomic) unsigned int vehicularState; // @synthesize vehicularState=_vehicularState;
@property(readonly, nonatomic) unsigned int vehicleDetectionState; // @synthesize vehicleDetectionState=_vehicleDetectionState;
- (void).cxx_destruct;
- (void)setVehicleDetectedState:(unsigned int)arg1;
- (void)_stopVehicleConnectionMonitoring;
- (void)_startVehicleConnectionMonitoring;
- (void)_stopVehicularDetection;
- (void)_startVehicularDetection;
- (void)_stopTestDetection;
- (void)_startTestDetection;
- (void)stopDetectingVehicle;
- (void)startDetectingVehicle;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

