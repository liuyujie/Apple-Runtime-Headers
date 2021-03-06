//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNNavigationStateInterface.h"

@class MNNavigationStateManager, MNNavigationTraceManager, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationState : NSObject <MNNavigationStateInterface>
{
    MNNavigationStateManager *_stateManager;
    double _locationUpdateInterval;
    double _suggestionUpdateFrequency;
}

@property(readonly, nonatomic) __weak MNNavigationStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) double suggestionUpdateFrequency; // @synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency;
@property(readonly, nonatomic) double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
- (void).cxx_destruct;
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setRideIndex:(unsigned int)arg1 forLegIndex:(unsigned int)arg2;
- (void)setDisplayedStepIndex:(unsigned int)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopPredictingDestinations;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)confirmDestination:(id)arg1;
- (void)updateVehicleDetected:(_Bool)arg1;
- (void)updateMapsActive:(_Bool)arg1;
- (void)leaveState;
- (void)enterState;
- (void)dealloc;
- (id)initWithStateManager:(id)arg1;
- (id)init;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property(readonly, nonatomic) unsigned int desiredResourcePolicy;
@property(readonly, nonatomic) unsigned int desiredLocationProviderType;
@property(readonly, nonatomic) _Bool requiresHighMemoryThreshold;
@property(readonly, nonatomic) unsigned int type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

