//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationContainerView : UIView
{
    _Bool _shouldLayoutForCommitPhase;
    UIView *_contentView;
    float _cornerRadius;
    _UIPreviewPresentationEffectView *_platterClippingView;
    UIView *_platterShadowView;
    UIView *_contentTransformView;
    _UIPreviewPresentationEffectView *_platterView;
    struct CGSize _preferredContentSize;
}

@property(retain, nonatomic) _UIPreviewPresentationEffectView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UIView *contentTransformView; // @synthesize contentTransformView=_contentTransformView;
@property(retain, nonatomic) UIView *platterShadowView; // @synthesize platterShadowView=_platterShadowView;
@property(retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView; // @synthesize platterClippingView=_platterClippingView;
@property(nonatomic) _Bool shouldLayoutForCommitPhase; // @synthesize shouldLayoutForCommitPhase=_shouldLayoutForCommitPhase;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGSize)_standardPreferredContentSize;
- (struct CGRect)_preferredPlatterRectForContainerRect:(struct CGRect)arg1;
- (void)initPlatterViewsIfNeeded;
- (_Bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool shouldRasterizeForTransition; // @dynamic shouldRasterizeForTransition;
@property(nonatomic) float blurRadius; // @dynamic blurRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

