//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import "GEOMapServiceSpatialPlaceLookupTicket.h"

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceSpatialPlaceLookupTicket : _GEOPlaceRequestTicket <GEOMapServiceSpatialPlaceLookupTicket>
{
    NSArray *_parameters;
}

+ (unsigned int)maxParametersCount;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (void)callCompletion:(CDUnknownBlockType)arg1 onQueue:(id)arg2 withResult:(id)arg3 error:(id)arg4;
- (id)mapItemsForPlaceLookupResponses:(id)arg1 usingIdentifierToMapItemMap:(id)arg2;
- (void)createSpatialPlaceLookupResultForLookupResults:(id)arg1 mapItems:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (id)spatialPlaceLookupResultsFromResponse:(id)arg1;
- (void)handleResponse:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 queue:(id)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end
