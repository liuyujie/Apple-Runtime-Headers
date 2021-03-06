//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class CLKDevice, NSDictionary, NSIndexPath, NSSet, NTKUpNextCollectionViewFlowLayoutAttributes;

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    CLKDevice *_device;
    NSDictionary *_layoutInfo;
    NSDictionary *_headerLayoutInfo;
    NTKUpNextCollectionViewFlowLayoutAttributes *_decorationLayoutInfo;
    NSSet *_previousSectionsWithHeaders;
    NSSet *_sectionsWithHeaders;
    _Bool _needsHeaderUpdate;
    _Bool _needsInsetsUpdate;
    _Bool _useFixedLowTransitionLayout;
    _Bool _snappingEnabled;
    _Bool _showingAllAttributes;
    float _topItemsAlpha;
    float _headerAlpha;
    float _topItemsShift;
    float _statusBarDecorationHeight;
    NSIndexPath *_topElementIndexPath;
    NSIndexPath *_bottomElementIndexPath;
    float _topOffsetForSnapping;
    float _topOffsetForScrolling;
    float _lowTransitionScale;
    float _lowTransitionShift;
    float _highTransitionScale;
    float _highTransitionShift;
    float _maximumDarkeningAmount;
    float _highTransitionBottomOffset;
    NSIndexPath *_indexPathToSnapTo;
    float _snappingOffset;
    NSSet *_dwellIndexPathes;
}

+ (Class)layoutAttributesClass;
@property(readonly, nonatomic) NSSet *dwellIndexPathes; // @synthesize dwellIndexPathes=_dwellIndexPathes;
@property(nonatomic) float snappingOffset; // @synthesize snappingOffset=_snappingOffset;
@property(retain, nonatomic) NSIndexPath *indexPathToSnapTo; // @synthesize indexPathToSnapTo=_indexPathToSnapTo;
@property(nonatomic, getter=isShowingAllAttributes) _Bool showingAllAttributes; // @synthesize showingAllAttributes=_showingAllAttributes;
@property(nonatomic, getter=isSnappingEnabled) _Bool snappingEnabled; // @synthesize snappingEnabled=_snappingEnabled;
@property(nonatomic) float highTransitionBottomOffset; // @synthesize highTransitionBottomOffset=_highTransitionBottomOffset;
@property(nonatomic) float maximumDarkeningAmount; // @synthesize maximumDarkeningAmount=_maximumDarkeningAmount;
@property(nonatomic) _Bool useFixedLowTransitionLayout; // @synthesize useFixedLowTransitionLayout=_useFixedLowTransitionLayout;
@property(nonatomic) float highTransitionShift; // @synthesize highTransitionShift=_highTransitionShift;
@property(nonatomic) float highTransitionScale; // @synthesize highTransitionScale=_highTransitionScale;
@property(nonatomic) float lowTransitionShift; // @synthesize lowTransitionShift=_lowTransitionShift;
@property(nonatomic) float lowTransitionScale; // @synthesize lowTransitionScale=_lowTransitionScale;
@property(nonatomic) float topOffsetForScrolling; // @synthesize topOffsetForScrolling=_topOffsetForScrolling;
@property(nonatomic) float topOffsetForSnapping; // @synthesize topOffsetForSnapping=_topOffsetForSnapping;
@property(retain, nonatomic) NSIndexPath *bottomElementIndexPath; // @synthesize bottomElementIndexPath=_bottomElementIndexPath;
@property(retain, nonatomic) NSIndexPath *topElementIndexPath; // @synthesize topElementIndexPath=_topElementIndexPath;
@property(nonatomic) float statusBarDecorationHeight; // @synthesize statusBarDecorationHeight=_statusBarDecorationHeight;
@property(nonatomic) float topItemsShift; // @synthesize topItemsShift=_topItemsShift;
@property(nonatomic) float headerAlpha; // @synthesize headerAlpha=_headerAlpha;
@property(nonatomic) float topItemsAlpha; // @synthesize topItemsAlpha=_topItemsAlpha;
- (void).cxx_destruct;
- (_Bool)_hasHeaderForSection:(int)arg1;
- (void)_updateContentInsetsIfNeeded;
- (void)_updateSectionHeaderListIfNeeded;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)_updateVisibilityForLayoutAttributes:(id)arg1 inBounds:(struct CGRect)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)flowLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (_Bool)isLastIndexPathWithContent:(id)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

