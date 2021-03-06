//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWKForecastConnectionDelegate.h"
#import "NWKLocationObservable.h"
#import "NWKRoutineForecastObservable.h"

@class NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NWKLocationConnection, NWKRoutineForecastConnection, WFLocation;

@interface NWKForecastManager : NSObject <NWKForecastConnectionDelegate, NWKLocationObservable, NWKRoutineForecastObservable>
{
    NSMutableDictionary *_forecastConnections;
    NSMutableDictionary *_forecasts;
    _Bool _useStaticLocationCache;
    NSArray *_staticLocations;
    WFLocation *_localLocation;
    WFLocation *_selectedLocation;
    NSObject<OS_dispatch_queue> *_forecastConnectionQueue;
    NSObject<OS_dispatch_queue> *_forecastsQueue;
    Class _forecastConnectionKind;
    NSMutableDictionary *_ephemeralConnections;
    NSTimer *_ephemeralConnectionCleanupTimer;
    NSHashTable *_observers;
    NWKLocationConnection *_locationConnection;
    NWKRoutineForecastConnection *_routineForecastConnection;
}

@property(retain, nonatomic) NWKRoutineForecastConnection *routineForecastConnection; // @synthesize routineForecastConnection=_routineForecastConnection;
@property(retain, nonatomic) NWKLocationConnection *locationConnection; // @synthesize locationConnection=_locationConnection;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *ephemeralConnectionCleanupTimer; // @synthesize ephemeralConnectionCleanupTimer=_ephemeralConnectionCleanupTimer;
@property(retain, nonatomic) NSMutableDictionary *ephemeralConnections; // @synthesize ephemeralConnections=_ephemeralConnections;
@property(nonatomic) Class forecastConnectionKind; // @synthesize forecastConnectionKind=_forecastConnectionKind;
@property(nonatomic, getter=shouldUseStaticLocationCache) _Bool useStaticLocationCache; // @synthesize useStaticLocationCache=_useStaticLocationCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *forecastsQueue; // @synthesize forecastsQueue=_forecastsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *forecastConnectionQueue; // @synthesize forecastConnectionQueue=_forecastConnectionQueue;
@property(retain, nonatomic) WFLocation *selectedLocation; // @synthesize selectedLocation=_selectedLocation;
@property(retain, nonatomic) WFLocation *localLocation; // @synthesize localLocation=_localLocation;
@property(retain, nonatomic) NSArray *staticLocations; // @synthesize staticLocations=_staticLocations;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *forecastConnections;
- (void)routineForecastServerUpdatedRoutineForecast:(id)arg1;
- (void)routineForecastMonitoringStartedForStartDate:(id)arg1 endDate:(id)arg2;
- (void)routineForecastMonitoringFailedToStartForStartDate:(id)arg1 endDate:(id)arg2;
- (void)routineForecastFailedNotFound;
- (void)locationServerUpdatedStaticLocations:(id)arg1;
- (void)locationServerUpdatedSelectedLocation:(id)arg1;
- (void)locationServerUpdatedLocalLocation:(id)arg1;
- (void)locationServerUpdatedLocation:(id)arg1 updatedTimeZone:(id)arg2;
- (void)locationServerUpdatedLocation:(id)arg1 updatedDisplayName:(id)arg2;
- (void)connection:(id)arg1 isUpdatingForecast:(_Bool)arg2 forLocation:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 updateForecastWithToken:(unsigned int)arg2 currentConditions:(id)arg3 hourlyForecasts:(id)arg4 dailyForecasts:(id)arg5 airQuality:(id)arg6 forLocation:(id)arg7;
- (void)_notifyObserversOfUpdatedRoutineForecast:(id)arg1 previousRoutineForecast:(id)arg2;
- (void)_notifyObserversOfUpdatedStaticLocations:(id)arg1 previousStaticLocations:(id)arg2;
- (void)_notifyObserversOfUpdatedSelectedLocation:(id)arg1 previousSelectedLocation:(id)arg2;
- (void)_notifyObserversOfUpdatedLocalLocation:(id)arg1 previousLocalLocation:(id)arg2;
- (void)_notifyObserversOfUpdatedTimeZone:(id)arg1 forLocation:(id)arg2;
- (void)_notifyObserversOfUpdatedDisplayName:(id)arg1 forLocation:(id)arg2;
- (void)_notifyObserversOfUpdatedForecast:(unsigned int)arg1 currentConditions:(id)arg2 currentAirQualityConditions:(id)arg3 hourlyForecasts:(id)arg4 dailyForecasts:(id)arg5 forLocation:(id)arg6;
- (void)_notifyObserver:(id)arg1 ofUpdatedStaticLocations:(id)arg2 previousStaticLocations:(id)arg3;
- (void)startMonitoringRoutineForecastWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)observeMonitoredRoutineForecast;
- (void)stopMonitoringRoutineForecast;
- (void)pauseRoutineForecastConnection;
- (void)resumeLocationConnectionWithTrackedLocationSensitivity:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeLocationConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeLocationConnection;
- (void)resumeLocationConnectionWithTrackedLocationSensitivity:(_Bool)arg1;
- (void)pauseLocationConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseLocationConnection;
- (void)resumeForecastConnectionForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeForecastConnectionForLocation:(id)arg1;
- (void)resumeForecastConnectionForCoreLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeForecastConnectionForCoreLocation:(id)arg1;
- (void)resumeCachedForecastConnectionForLocation:(id)arg1;
- (void)pauseForecastConnectionForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseForecastConnectionForLocation:(id)arg1;
- (void)pauseForecastConnectionForCoreLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseForecastConnectionForCoreLocation:(id)arg1;
- (void)resumeConnectionsForLocationListAndLocations:(id)arg1 connectionKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pauseAllConnectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserverAndNotifyCurrentStaticLocationList:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_addObserver:(id)arg1 notifyCurrentStaticLocationList:(_Bool)arg2;
- (_Bool)isLocationInStaticLocations:(id)arg1;
- (unsigned int)indexOfLocationKeyInStaticLocations:(id)arg1;
- (unsigned int)indexOfLocationInStaticLocations:(id)arg1;
- (id)locationWithLocationKey:(id)arg1;
- (id)locationWithLocationID:(id)arg1;
- (id)forecastForLocation:(id)arg1;
- (id)weatherForecastsGroupForLocation:(id)arg1;
- (id)validConditionsForLocation:(id)arg1 forDate:(id)arg2;
- (void)validConditionsForLocation:(id)arg1 forDate:(id)arg2 fetchHandler:(CDUnknownBlockType)arg3;
- (id)forecastDailyForecastsForLocation:(id)arg1;
- (id)forecastHourlyForecastsForLocation:(id)arg1;
- (id)forecastCurrentAirQualityConditionsForLocation:(id)arg1;
- (id)forecastCurrentConditionsForLocation:(id)arg1;
- (unsigned int)forecastTokenForLocation:(id)arg1;
- (void)forecastTokenAndHourlyForecastsForLocation:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
- (void)forecastTokenAndCurrentConditionsForLocation:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;
- (void)_removeForecastContainerForLocation:(id)arg1;
- (id)_forecastContainerForLocation:(id)arg1;
- (void)_cacheForecast:(unsigned int)arg1 currentConditions:(id)arg2 currentAirQualityConditions:(id)arg3 hourlyForecastConditions:(id)arg4 dailyForecastConditions:(id)arg5 forLocation:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_removeForecastConnectionForLocation:(id)arg1;
- (id)_forecastConnectionForLocation:(id)arg1;
- (void)_enumerateForecastConnectionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_addForecastConnection:(id)arg1 forLocation:(id)arg2;
- (void)removeLocationFromList:(id)arg1;
- (void)addLocationToList:(id)arg1;
- (id)initWithLocationConnectionKind:(Class)arg1 forecastConnectionKind:(Class)arg2 useStaticLocationCache:(_Bool)arg3;
- (id)initWithLocationConnectionKind:(Class)arg1 forecastConnectionKind:(Class)arg2;
- (id)initWithLocationConnectionKind:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

