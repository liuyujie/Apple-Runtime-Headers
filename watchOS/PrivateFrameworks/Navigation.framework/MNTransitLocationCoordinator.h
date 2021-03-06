//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMapsAppStateMonitorObserver.h"
#import "MNNavigationSessionObserver.h"

@class MNHybridLocationProvider, MNMapsAppStateMonitor, NSString;

__attribute__((visibility("hidden")))
@interface MNTransitLocationCoordinator : NSObject <MNMapsAppStateMonitorObserver, MNNavigationSessionObserver>
{
    MNMapsAppStateMonitor *_appStateMonitor;
    MNHybridLocationProvider *_locationProvider;
}

@property(readonly, nonatomic) MNHybridLocationProvider *locationProvider; // @synthesize locationProvider=_locationProvider;
- (void).cxx_destruct;
- (void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned int)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned int)arg2 legIndex:(unsigned int)arg3;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (void)_invalidateXPCActivities;
- (void)_scheduleXPCActivityAfter:(double)arg1 duration:(double)arg2;
- (void)_stop;
- (void)_start;
- (void)dealloc;
- (id)initWithHybridLocationProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

