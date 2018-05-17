//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class _TVImageView, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVShowcaseCell : UICollectionViewCell
{
    _UIFloatingContentView *_floatingView;
    _TVImageView *_imageView;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) __weak _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
