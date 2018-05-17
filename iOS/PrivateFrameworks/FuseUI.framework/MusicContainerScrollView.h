//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIView;

@interface MusicContainerScrollView : UIScrollView
{
    _Bool _contentScrollViewPreviousAutomaticContentOffsetAdjustmentEnabled;
    _Bool _contentScrollViewPreviousScrollEnabled;
    _Bool _isAdjustingContentScrollViewScrollEnabled;
    _Bool _isChangingContentScrollViewContentOffset;
    struct CGPoint _lastContentScrollViewPositionAdditions;
    struct {
        unsigned int contentSizeDidChange:1;
    } _delegateRespondsToSelector;
    UIScrollView *_contentScrollView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;
- (void)_updateContentSize;
- (void)_unregisterForNotificationsForContentScrollView:(id)arg1;
- (void)_registerForNotificationsForContentScrollView:(id)arg1;
- (void)_getCurrentContentViewFrame:(struct CGRect *)arg1 contentScrollViewContentOffset:(struct CGPoint *)arg2;
@property(nonatomic) __weak id <MusicContainerScrollViewDelegate> delegate; // @dynamic delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContentSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
