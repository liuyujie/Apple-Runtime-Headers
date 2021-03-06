//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTPredictionController.h>

@class RTApplicationManager, RTMediaRemote, RTPredictionExpertApplicationDataSource;

@interface RTPredictionControllerApplication : RTPredictionController
{
    _Bool _routineEnabled;
    RTApplicationManager *_applicationManager;
    RTMediaRemote *_mediaRemote;
    unsigned long long _maxLocationsOfInterestForTraining;
    double _maxTimeIntervalBeforeTrainingWithoutLocations;
    RTPredictionExpertApplicationDataSource *_dataSource;
}

+ (long long)reasonForPredictionWithEvent:(id)arg1;
@property(retain, nonatomic) RTPredictionExpertApplicationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double maxTimeIntervalBeforeTrainingWithoutLocations; // @synthesize maxTimeIntervalBeforeTrainingWithoutLocations=_maxTimeIntervalBeforeTrainingWithoutLocations;
@property(nonatomic) unsigned long long maxLocationsOfInterestForTraining; // @synthesize maxLocationsOfInterestForTraining=_maxLocationsOfInterestForTraining;
@property(retain, nonatomic) RTMediaRemote *mediaRemote; // @synthesize mediaRemote=_mediaRemote;
@property(retain, nonatomic) RTApplicationManager *applicationManager; // @synthesize applicationManager=_applicationManager;
@property(nonatomic) _Bool routineEnabled; // @synthesize routineEnabled=_routineEnabled;
- (void).cxx_destruct;
- (void)fetchPredictionTablePropertyListRepresentationWithHandler:(CDUnknownBlockType)arg1;
- (void)dumpPredictionTable:(CDUnknownBlockType)arg1;
- (void)fetchPredictedApplicationsForEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)rankUniqueLocationsWithDataProvider:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)combinePredictions:(id)arg1 withFallbackPredictionsForEvent:(id)arg2;
- (void)predictWithEvent:(id)arg1 limit:(unsigned long long)arg2 confidence:(double)arg3 handler:(CDUnknownBlockType)arg4;
- (void)predictWithEvent:(id)arg1 limit:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_createPredictedApplicationWithEvent:(id)arg1 predictionItem:(id)arg2;
- (void)_handleErrorWhileProcessingData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)__processData:(CDUnknownBlockType)arg1;
- (void)_processData:(CDUnknownBlockType)arg1;
- (void)onAuthorizationUpdate:(id)arg1;
- (void)onDefaultsUpdate:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_updateRegisteredDefaults:(CDUnknownBlockType)arg1;
- (void)_setup;
- (void)invalidate;
- (id)_createExpertFromClass:(Class)arg1 featureAddons:(id)arg2 dataSource:(id)arg3;
- (id)_createExpertsFromClass:(Class)arg1 featureAddonArray:(id)arg2 dataSource:(id)arg3;
- (void)_buildExpertsWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithExperts:(id)arg1 dataProviders:(id)arg2 defaultsManager:(id)arg3 authorizationManager:(id)arg4 persistenceManager:(id)arg5 dataProtectionManager:(id)arg6 metricManager:(id)arg7 locationTagger:(id)arg8 mediaRemote:(id)arg9 predictionTable:(id)arg10 applicationManager:(id)arg11 dataSource:(id)arg12;
- (id)init;

@end

