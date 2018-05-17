//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STSiriModelObject.h"

@class NSArray;

@interface STMapViewport : STSiriModelObject
{
    NSArray *_viewportVertices;
    double _northLatitude;
    double _southLatitude;
    double _eastLongitude;
    double _westLongitude;
    double _timeSinceViewportChanged;
    double _timeSinceViewportEnteredForeground;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *viewportVertices; // @synthesize viewportVertices=_viewportVertices;
@property(nonatomic) double timeSinceViewportEnteredForeground; // @synthesize timeSinceViewportEnteredForeground=_timeSinceViewportEnteredForeground;
@property(nonatomic) double timeSinceViewportChanged; // @synthesize timeSinceViewportChanged=_timeSinceViewportChanged;
@property(nonatomic) double westLongitude; // @synthesize westLongitude=_westLongitude;
@property(nonatomic) double eastLongitude; // @synthesize eastLongitude=_eastLongitude;
@property(nonatomic) double southLatitude; // @synthesize southLatitude=_southLatitude;
@property(nonatomic) double northLatitude; // @synthesize northLatitude=_northLatitude;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_aceContextObjectValue;

@end
