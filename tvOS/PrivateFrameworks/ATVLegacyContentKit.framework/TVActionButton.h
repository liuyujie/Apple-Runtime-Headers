//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, NSString, TVFloatingView, TVHighlightingImageView, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface TVActionButton : UIControl
{
    TVHighlightingImageView *_badgeImageView;
    TVFloatingView *_floatingView;
    UILabel *_headlineLabel;
    UILabel *_unFocusedHeadlineLabel;
    UIImageView *_imageView;
    CALayer *_maskImageLayer;
    UILabel *_titleLabel;
    UIView *_focusedOverlayView;
    UIView *_unfocusedOverlayView;
    UITapGestureRecognizer *_selectRecognizer;
    _Bool _drawsBorder;
    _Bool _invertTextColorOnFocus;
    NSString *_title;
    NSString *_headline;
    UIImage *_image;
    UIImage *_badgeImage;
}

@property(nonatomic) _Bool invertTextColorOnFocus; // @synthesize invertTextColorOnFocus=_invertTextColorOnFocus;
@property(nonatomic) _Bool drawsBorder; // @synthesize drawsBorder=_drawsBorder;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_updateImageViewBounds;
- (id)_headlineLabel;
- (id)_titleLabel;
- (void)_selectButtonAction:(id)arg1;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end

