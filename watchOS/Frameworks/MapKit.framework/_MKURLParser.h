//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapURLParser, GEOURLExtraStorage, GEOUserSessionEntity, NSString;

@interface _MKURLParser : NSObject
{
    GEOMapURLParser *parser;
}

+ (_Bool)isValidMapURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly) GEOURLExtraStorage *extraStorage;
@property(readonly) _Bool tester;
@property(readonly) int favoritesType;
@property(readonly, copy) NSString *lineName;
@property(readonly) unsigned long long lineMUID;
@property(readonly) double roll;
@property(readonly) double tilt;
@property(readonly) double rotation;
@property(readonly) double altitude;
@property(readonly) GEOUserSessionEntity *userSessionEntity;
@property(readonly) NSString *cnAddressIdentifier;
@property(readonly) NSString *cnContactIdentifier;
@property(readonly) NSString *abAddressID;
@property(readonly) NSString *abRecordID;
@property(readonly) NSString *contentProviderID;
@property(readonly) NSString *contentProvider;
@property(readonly) unsigned long long searchUID;
@property(readonly) int searchProviderID;
@property(readonly) CDStruct_b7cb895d searchRegion;
@property(readonly) struct CLLocationCoordinate2D searchCoordinate;
@property(readonly) NSString *label;
@property(readonly) NSString *searchQuery;
@property(readonly) NSString *directionsDestinationAddressString;
@property(readonly) NSString *directionsSourceAddressString;
@property(readonly) NSString *addressString;
@property(readonly) float zoomLevel;
@property(readonly) CDStruct_c3b9c2ee span;
@property(readonly) struct CLLocationCoordinate2D centerCoordinate;
@property(readonly) _Bool exactPositionSpecified;
@property(readonly) int trackingMode;
@property(readonly) _Bool trackingModeSpecified;
@property(readonly) unsigned int transportType;
@property(readonly) unsigned int mapType;
- (_Bool)parseIncludingCustomParameters:(_Bool)arg1;
- (id)initWithURL:(id)arg1;

@end

