//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, NSError, NSObject<MKQuickRouteConfigurableView>, _MKRouteETA, _MKRouteETAFetcher;

@interface _MKQuickRouteManager : NSObject
{
    _MKRouteETAFetcher *_etaFetcher;
    double _maxDistanceToRequestETA;
    _MKRouteETA *_lastETA;
    unsigned int _lastPreferredDirectionsType;
    NSError *_lastError;
    double _closeWalkTravelTime;
    double _maxWalkingDistance;
    _Bool _viewHasChangedSinceLastUpdate;
    _Bool _fetchAllTransportTypes;
    id <MKQuickRouteManagerDelegate> _delegate;
    id <MKQuickRouteTransportTypeFinding> _transportTypeFinder;
    NSObject<MKQuickRouteConfigurableView> *_view;
    struct CLLocationCoordinate2D _coordinate;
}

+ (unsigned int)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned int)arg3;
+ (unsigned int)counterpartForTransportType:(unsigned int)arg1;
+ (_Bool)isLikelyToReturnETAForLocation:(id)arg1;
+ (double)_maxDistanceToRequestETA;
@property(nonatomic) _Bool fetchAllTransportTypes; // @synthesize fetchAllTransportTypes=_fetchAllTransportTypes;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak NSObject<MKQuickRouteConfigurableView> *view; // @synthesize view=_view;
@property(nonatomic) __weak id <MKQuickRouteTransportTypeFinding> transportTypeFinder; // @synthesize transportTypeFinder=_transportTypeFinder;
@property(nonatomic) __weak id <MKQuickRouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isOnlyDriving;
- (_Bool)haveETAsForPreferredTransportType:(unsigned int)arg1;
- (unsigned int)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned int)arg2;
- (unsigned int)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 preferredDirectionsType:(unsigned int)arg3;
- (unsigned int)directionsTypeForMapType:(unsigned int)arg1;
- (id)bestETAForPreferredDirectionsType:(unsigned int)arg1;
- (struct CLLocationCoordinate2D)destinationCoordinate;
- (struct CLLocationCoordinate2D)originCoordinate;
@property(readonly, nonatomic, getter=isUsingCurrentLocationForOrigin) _Bool usingCurrentLocationForOrigin;
- (void)requestNewETAForPreferredTransportType:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateETA;
- (id)routeETAForTransportType:(unsigned int)arg1;
- (void)_resetState;
@property(retain, nonatomic) MKMapItem *originMapItem;
@property(retain, nonatomic) MKMapItem *mapItem;
@property(copy, nonatomic) GEOTransitOptions *transitOptions;
@property(copy, nonatomic) GEOAutomobileOptions *automobileOptions;
- (_Bool)_transportTypeShouldBeSmart;
- (void)_performWithTransportType:(CDUnknownBlockType)arg1;
- (id)description;
- (id)init;

@end

