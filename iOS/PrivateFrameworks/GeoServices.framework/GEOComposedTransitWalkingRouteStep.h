//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class GEOTransitStep, NSArray;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep
{
    GEOTransitStep *_transitStep;
    CDStruct_2c43369c _startCoordinate;
    CDStruct_2c43369c _endCoordinate;
    id <GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
    id <GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;
    NSArray *_steppingArtwork;
    NSArray *_routeDetailsPrimaryArtwork;
    id <GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
}

- (id)routeDetailsSecondaryArtwork;
- (id)routeDetailsPrimaryArtwork;
- (id)steppingArtwork;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage; // @synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> steppingIncidentMessage; // @synthesize steppingIncidentMessage=_steppingIncidentMessage;
- (void).cxx_destruct;
- (_Bool)isArrivalStep;
- (unsigned int)distance;
- (id)transitStep;
- (id)instructions;
- (CDStruct_c3b9c2ee)endGeoCoordinate;
- (CDStruct_c3b9c2ee)startGeoCoordinate;
- (void)_commonInitWithDecoderData:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 transitStep:(id)arg2 stepIndex:(unsigned long long)arg3 startCoordinate:(CDStruct_c3b9c2ee)arg4 endCoordinate:(CDStruct_c3b9c2ee)arg5 pointRange:(struct _NSRange)arg6;
- (id)initWithComposedRoute:(id)arg1 transitStep:(id)arg2 stepIndex:(unsigned long long)arg3 geoStep:(id)arg4 pointRange:(struct _NSRange)arg5 maneuverPointRange:(struct _NSRange)arg6;

@end

