//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOMapFeatureTransitAccessPoint : NSObject
{
    CDStruct_7cbc13b9 *_feature;
    CDStruct_2c43369c _coordinate;
}

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) double radiusMeters;
@property(readonly, nonatomic) _Bool isExit;
@property(readonly, nonatomic) _Bool isEntrance;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_7cbc13b9 *)arg1;
@property(readonly, nonatomic) CDStruct_7cbc13b9 *feature;

@end
