//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXPlacesMapRenderer.h"

@class MKAnnotationView, NSOrderedSet, PXPlacesMapView;

@protocol PXPlacesMapAnnotationRenderer <PXPlacesMapRenderer>
- (id <MKAnnotation>)annotationForGeotaggables:(NSOrderedSet *)arg1 initialCoordinate:(struct CLLocationCoordinate2D)arg2;
- (MKAnnotationView *)viewForAnnotation:(id <MKAnnotation>)arg1 andMapView:(PXPlacesMapView *)arg2;
- (_Bool)supportsMoveAnimations;
@end
