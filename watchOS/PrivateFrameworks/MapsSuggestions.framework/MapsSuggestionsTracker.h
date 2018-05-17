//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsSuggestionsObject.h"

@class CLLocation, GEOAutomobileOptions, GEOComposedWaypoint, GEOLocationShifter, MapsSuggestionsManager, MapsSuggestionsMutableWeakEntries, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_refreshTimer;
    double _refreshInterval;
    double _refreshDeferTime;
    int _transportType;
    MapsSuggestionsManager *_manager;
    NSMutableDictionary *_waypoints;
    GEOLocationShifter *_locationShifter;
    struct NSMutableDictionary *_etaTitleFormatters;
    struct NSMutableDictionary *_distanceTitleFormatters;
    _Bool _shouldBeRunning;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
    CLLocation *_currentLocation;
    GEOComposedWaypoint *_currentLocationWaypoint;
    MapsSuggestionsMutableWeakEntries *_trackedEntries;
}

+ (_Bool)_isLocationShiftRequiredForLocation:(id)arg1;
@property(retain, nonatomic) MapsSuggestionsMutableWeakEntries *trackedEntries; // @synthesize trackedEntries=_trackedEntries;
@property(retain) GEOComposedWaypoint *currentLocationWaypoint; // @synthesize currentLocationWaypoint=_currentLocationWaypoint;
@property(retain) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (void)_shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 withShiftRequestBlock:(CDUnknownBlockType)arg3;
- (id)location;
- (void)unschedule;
- (void)_unschedule;
- (void)scheduleRefresh;
- (void)_scheduleRefresh;
- (void)_refresh;
- (void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)_determineTransportTypeFromOrigin:(id)arg1 withMapsSuggestionsEntry:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)_requestDistances;
- (void)_decorateEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3;
- (id)_transportTypesForDestinationEntries:(id)arg1;
- (void)_requestETAs;
- (_Bool)_requestAllRequiredWaypoints;
- (_Bool)_requestWaypointForCurrentLocation:(id)arg1 dispatchGroup:(id)arg2;
- (_Bool)_requestWaypointForMapsSuggestionsEntry:(id)arg1 dispatchGroup:(id)arg2;
- (_Bool)_keepExistingWaypointsForTrackedEntries:(struct NSArray *)arg1;
- (void)trackSuggestionEntries:(struct NSArray *)arg1 transportType:(int)arg2;
- (id)_distanceTitleFormatterForType:(unsigned int)arg1;
- (id)_etaTitleFormatterForType:(unsigned int)arg1;
- (_Bool)_hasTitleFormatterForType:(unsigned int)arg1;
- (void)setTitleFormatter:(id)arg1 forType:(unsigned int)arg2;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
