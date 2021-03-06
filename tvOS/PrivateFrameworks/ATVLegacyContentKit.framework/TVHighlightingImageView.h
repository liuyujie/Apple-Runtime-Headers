//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TVImageProxy, UIColor, UIImage, UIImageView;

@interface TVHighlightingImageView : UIView
{
    TVImageProxy *_imageProxy;
    UIColor *_imageColor;
    UIColor *_highlightedImageColor;
    UIImage *_placeholderImage;
    double _highlightDuration;
    double _unhighlightDuration;
    UIImageView *_imageView;
    UIImageView *_highlightedImageView;
    UIImage *_originalImage;
}

@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(nonatomic) double unhighlightDuration; // @synthesize unhighlightDuration=_unhighlightDuration;
@property(nonatomic) double highlightDuration; // @synthesize highlightDuration=_highlightDuration;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIColor *highlightedImageColor; // @synthesize highlightedImageColor=_highlightedImageColor;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor=_imageColor;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)_setupImagesFromImage:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) double cornerRadius;
- (void)setImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIImage *highlightedImage;
@property(readonly, nonatomic) UIImage *coloredImage;
@property(retain, nonatomic) UIImage *image;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (long long)contentMode;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

