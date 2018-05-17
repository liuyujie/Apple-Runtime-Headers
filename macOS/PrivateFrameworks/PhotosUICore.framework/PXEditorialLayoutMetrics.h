//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXEditorialLayoutMetrics : PXLayoutMetrics
{
    unsigned long long _numberOfColumns;
    double _interTileSpacing;
    unsigned long long _lowerItemCountThreshold;
    struct NSEdgeInsets _contentInsets;
}

@property(nonatomic) unsigned long long lowerItemCountThreshold; // @synthesize lowerItemCountThreshold=_lowerItemCountThreshold;
@property(nonatomic) struct NSEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
