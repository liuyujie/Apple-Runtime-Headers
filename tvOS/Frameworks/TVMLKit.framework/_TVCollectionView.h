//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface _TVCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _bottomPadding;
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;
    struct UIEdgeInsets _gradientBoundsInsets;
    CDStruct_ce7ae26c _flags;
    NSIndexPath *_indexPathForLastFocusedItem;
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void).cxx_destruct;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (struct UIEdgeInsets)_gradientBoundsInsets;
- (void)_setGradientBoundsInsets:(struct UIEdgeInsets)arg1;
- (struct CGRect)_visibleBounds;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;
- (void)_performBlockWithLongPressedCellIndexPath:(CDUnknownBlockType)arg1;
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;
- (void)_longPressAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
@property(nonatomic) __weak id <_TVCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;
- (void)reloadData;
- (_Bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
