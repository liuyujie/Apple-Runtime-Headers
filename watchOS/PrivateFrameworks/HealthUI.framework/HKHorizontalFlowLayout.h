//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout
{
    _Bool _snapsToItemBoundaries;
    _Bool _snapsToItemCenters;
}

+ (float)snapToBoundariesDecelerationRate;
@property(nonatomic) _Bool snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;
@property(nonatomic) _Bool snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;
@property(nonatomic) float trailingInset;
@property(nonatomic) float leadingInset;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)init;

@end

