//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOMapFeatureBuildingSection : NSObject
{
    CDStruct_c3b9c2ee *_coordinates;
    unsigned int _coordinateCount;
    double _baseHeight;
    double _height;
    CDStruct_4b3b14e6 *_feature;
    unsigned int _sectionIndex;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(readonly, nonatomic) unsigned int coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_4b3b14e6 *)arg1 sectionIndex:(unsigned int)arg2;

@end

