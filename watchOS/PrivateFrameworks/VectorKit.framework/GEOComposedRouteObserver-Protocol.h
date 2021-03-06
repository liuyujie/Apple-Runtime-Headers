//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEOComposedTransitTripRouteLeg, NSArray;

@protocol GEOComposedRouteObserver <NSObject>
- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredLeg:(GEOComposedTransitTripRouteLeg *)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedTraffic:(GEOComposedRoute *)arg1;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;
@end

