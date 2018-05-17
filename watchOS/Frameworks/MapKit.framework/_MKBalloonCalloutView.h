//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer, UIColor, UIImage, UIImageView;

@interface _MKBalloonCalloutView : UIView
{
    UIView *_shadowView;
    UIView *_containerView;
    UIColor *_balloonTintColor;
    UIColor *_strokeColor;
    UIColor *_innerStrokeColor;
    CAShapeLayer *_balloonShape;
    CALayer *_balloonInnerStrokeLayer;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    struct CGSize _intrinsicSize;
    struct CGSize _shadowSize;
    _Bool _originatesAsSmallBalloon;
    float _croppedImageScale;
    UIImageView *_contentViewMaskView;
    UIView *_contentView;
    int _style;
    UIImage *_image;
    float _smallBalloonScale;
}

@property(copy, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) float smallBalloonScale; // @synthesize smallBalloonScale=_smallBalloonScale;
@property(nonatomic) _Bool originatesAsSmallBalloon; // @synthesize originatesAsSmallBalloon=_originatesAsSmallBalloon;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) UIColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
- (void).cxx_destruct;
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;
- (void)hideCalloutAnimated:(_Bool)arg1 endVerticalOffset:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hideCalloutAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showCalloutAnimated:(_Bool)arg1 startVerticalOffset:(float)arg2;
- (void)showCalloutAnimated:(_Bool)arg1;
- (void)_updateCroppedImage;
- (void)didMoveToWindow;
- (id)_generateInnerStrokeImage;
- (void)layoutSubviews;
- (float)_innerDiameter;
- (struct CGRect)_centerFrame;
- (struct CGSize)intrinsicContentSize;
- (id)initWithStyle:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
