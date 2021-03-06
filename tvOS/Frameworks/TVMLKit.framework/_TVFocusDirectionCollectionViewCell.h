//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIMotionEffectGroup;

@interface _TVFocusDirectionCollectionViewCell : UICollectionViewCell
{
    UIMotionEffectGroup *_motionEffectGroup;
    _Bool _selectSubviews;
    id <TVFocusDirectionCollectionViewCellDelegate> _delegate;
    struct CGPoint _focusDirection;
}

@property(nonatomic) _Bool selectSubviews; // @synthesize selectSubviews=_selectSubviews;
@property(nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property(nonatomic) __weak id <TVFocusDirectionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)layeredImageContainerLayer;
- (void)_detachMotionEffects;
- (void)_attachMotionEffects;
- (_Bool)_unapplyMotionEffect:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

